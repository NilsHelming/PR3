/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Implementation der Student Klasse
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Student.h"

Student::~Student(){
    if(autor != nullptr) //entferne diesen Studenten aus den Observern des Autors.
        autor->remObserver(*this);
}

void Student::setAutor(Autor* _autor){
    //entferne den Studenten vom alten Autor.
    if(this->autor != nullptr)
        if(!this->autor->remObserver(*this))
            throw new std::logic_error(
                "Unexpected Situation: Student "+this->toString()+
                " nicht in Observern von "+this->autor->toString());

    //setze das eigene Feld
    this->autor = _autor;

    //fuege diesen Studenten beim neuen Autor hinzu.
    if(this->autor != nullptr)
        if(!this->autor->addObserver(*this))
            throw new std::logic_error(
                "Unexpected Situation: Student "+this->toString()+
                " war schon in Observern von "+this->autor->toString());
}

void Student::update(){
    //Finde den aktuell relevanten Tweet
    std::string tweet = "<Kein Autor>";
    if(this->autor != nullptr)
        tweet = this->autor->getName() + ": " + this->autor->getTweet();

    std::cout << this->toString() << "> Neuer Tweet:" << tweet << std::endl;
}

std::string Student::toString(){
    return this->name + ":" + this->mtrNr;
}
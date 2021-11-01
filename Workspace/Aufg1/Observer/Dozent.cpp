/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Implementation der Dozent Klasse
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Dozent.h"


Dozent::~Dozent(){
    if(this->autor != nullptr) //entferne diesen Dozenten aus den Observern des Autors.
        this->autor->remObserver(*this);
}

void Dozent::setAutor(Autor* _autor){
    //entferne den Dozenten vom alten Autor.
    if(this->autor != nullptr)
        if(!this->autor->remObserver(*this))
            throw new std::logic_error(
                "Unexpected Situation: Dozent "+this->toString()+
                " nicht in Observern von "+this->autor->toString());

    //setze das eigene Feld
    this->autor = _autor;

    //fuege diesen Dozenten beim neuen Autor hinzu.
    if(this->autor != nullptr)
        if(!this->autor->addObserver(*this))
            throw new std::logic_error(
                "Unexpected Situation: Dozent "+this->toString()+
                " war schon in Observern von "+this->autor->toString());
}

void Dozent::update(){
    //Finde den aktuell relevanten Tweet
    std::string tweet = "<Kein Autor>";
    if(this->autor != nullptr)
        tweet = this->autor->getName() + ": " + this->autor->getTweet();

    std::cout << this->toString() << "> Neuer Tweet:" << tweet << std::endl;
}

std::string Dozent::toString(){
    return this->name + ":" + this->persNr;
}
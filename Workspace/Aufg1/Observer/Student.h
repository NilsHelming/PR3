/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Definition der Student Klasse
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#pragma once

#include <string>
#include <iostream>

#include "Observer.h"
#include "Autor.h"

/*
 * Klasse: Student : public Observer
 *
 * Die Definition der Klasse Student. Dieser soll einen Namen und eine MatrikelNummer
 * haben. Diese werden im Konstruktor uebergeben und koennen sich danach nicht mehr
 * aendern.
 */
class Student : public Observer {

    /*
     * Variable: std::string Student::name
     *
     * Enthaelt den Namen dieses Studenten. Im Konstruktor uebergeben.
     */
    std::string name;

    /*
     * Variable: std::string Student::mtrNr
     *
     * Enthaelt die Matrikelnummer dieses Studenten. Im Konstruktor uebergeben.
     */
    std::string mtrNr;

    /*
     * Variable: Autor* Student::autor
     *
     * Enthaelt den momentan beobachteten Autor. Kann ueber Student::SetAutor(Autor*)
     * geaendert werden. Kann auch nullptr sein.
     */
    Autor* autor;

public:

    /*
     * Methode: Student::Student(std::string name, std::string mtrNr)
     *
     * Konstruktor der Studenten Klasse. Der uebergebene Name und die uebergebene
     * Matrikelnummer sind konstant.
     */
    Student(std::string _name, std::string _mtrNr)
        : name(_name), mtrNr(_mtrNr), autor(nullptr) {};

    /*
     * Methode: Student::~Student()
     *
     * Dekonstruktor der Studenten Klasse.
     */
    ~Student() = default;

    /*
     * Methode: void Student::update()
     *
     * Die Methode, die von allen Obervables aufgerufen werden, um den jeweiligen
     * Observer anzusprechen.
     * In Diesem Fall wird der neue Zustand des Studenten und dem relevanten Tweet
     * ausgegeben.
     */
    void update(){
        //Finde den aktuell relevanten Tweet
        std::string tweet = "<Kein Autor>";
        if(this->autor != nullptr)
            tweet = this->autor->getName() + ": " + this->autor->getTweet();

        std::cout << this->toString() << "> Neuer Tweet:" << tweet << std::endl;
    };

    /*
     * Methode: Observer::toString()
     *
     * Diese Methode soll Informationen über ein Objekt in einem kurzen String
     * für Konsolenausgabe liefern.
     *
     * return           : std::string           - Identifizierender String.
     */
    std::string toString(){
        return this->name + ":" + this->mtrNr;
    };
};
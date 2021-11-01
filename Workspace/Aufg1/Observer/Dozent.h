/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Definition der Dozent Klasse
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
 * Klasse: Dozent : public Observer
 *
 * Die Definition der Klasse Dozent. Dieser soll einen Namen und eine Personalnummer
 * haben. Diese werden im Konstruktor uebergeben und koennen sich danach nicht mehr
 * aendern.
 */
class Dozent : public Observer {

    /*
     * Variable: std::string Dozent::name
     *
     * Enthaelt den Namen dieses Dozenten. Im Konstruktor uebergeben.
     */
    std::string name;

    /*
     * Variable: std::string Dozent::mtrNr
     *
     * Enthaelt die Personalnummer dieses Dozenten. Im Konstruktor uebergeben.
     */
    std::string persNr;

    /*
     * Variable: Autor* Dozent::autor
     *
     * Enthaelt den momentan beobachteten Autor. Kann ueber Dozent::setAutor(Autor*)
     * geaendert werden. Kann auch nullptr sein.
     */
    Autor* autor;

public:

    /*
     * Methode: Dozent::Dozent(std::string name, std::string mtrNr)
     *
     * Konstruktor der Dozent Klasse. Der uebergebene Name und die uebergebene
     * Personalnummer sind konstant.
     */
    Dozent(std::string _name, std::string _persNr)
        : name(_name), persNr(_persNr), autor(nullptr) {};

    /*
     * Methode: Dozent::~Dozent()
     *
     * Dekonstruktor der Studenten Klasse.
     */
    ~Dozent();


    /*
     * Methode: void Dozent::setAutor(Autor* autor)
     *
     * Setzt den momentan betrachteten Autor dieses Dozenten. Alle noetigen
     * Registrierungsaufgaben werden hier vollzogen.
     *
     * autor            : Autor*                - Der neue Autor.
     * throws           : std::logic_error      - Falls der Dozent nicht in den
     *                                            Observern des Autors gefunden wurde.
     * throws           : std::logic_error      - Falls der Dozent schon in den
     *                                            Observern des Autors gewesen ist.
     */
    void setAutor(Autor* _autor);

    /*
     * Methode: void Dozent::update()
     *
     * Die Methode, die von allen Obervables aufgerufen werden, um den jeweiligen
     * Observer anzusprechen.
     * In Diesem Fall wird der neue Zustand des Dozent und dem relevanten Tweet
     * ausgegeben.
     */
    void update();

    /*
     * Methode: Dozent::toString()
     *
     * Diese Methode soll Informationen über ein Objekt in einem kurzen String
     * für Konsolenausgabe liefern.
     *
     * return           : std::string           - Identifizierender String.
     */
    std::string toString();
};
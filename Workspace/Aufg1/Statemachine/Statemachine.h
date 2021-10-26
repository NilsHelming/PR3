/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.1 Zustandsautomat
 * Autor: Nils Helming
 *
 * Definition der Statemachine.
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#pragma once

#include <string>

#include "State.h"

/*
 * Klasse: Statemachine
 *
 * Die Statemachine haelt einen Zustand, in dem sich diese Maschiene befindet.
 * Ein Objekt dieser Klasse kann identifizieren, ob Sie sich momentan in einem
 * Endzustand befindet. Ausserdem kann sie einen einzelnen Buchstaben, wie auch
 * Zeichenketten als Eingaben für den Zustandsablauf annehmen.
 */
class Statemachine {

    /*
     * Variable: State* Statemachine::state
     *
     * Der state ist der momentane Zustand, in dem sich die Statemachine befindet.
     * Er muss in allen Konstruktoren mit einem sinnvollen Startwert initialisiert
     * werden und zwangsweise in allen Destruktoren wieder zerstört werden. Durch
     * die Funktionsweise des Interfaces 'State' ist es extrem relevant mit diesen
     * Referenzen vorsichtig umzugehen!
     */
    State* state = nullptr;

public:

    /*
     * Methode: Statemachine::Statemachine()
     *
     * Konstruktor der Klasse Statemachine. Hier wird der Ausgangszustand der
     * Maschiene festgelegt.
     */
    Statemachine();

    /*
     * Methode: Statemachine::~Statemachine()
     *
     * Dekonstruktor der Klasse Statemachine. Hier muss der momentan referenzierte
     * Zustand zerstört werden, da er (bzw. der Ausgangszustand) im Konstruktor
     * erstellt wurde.
     */
    ~Statemachine();

    /*
     * Methode: bool Statemachine::isSuccessful()
     *
     * Es wird zurückgegeben, ob sich die Maschiene momentan in einem Endzustand
     * befindet.
     *
     * return              : bool           - true, falls Maschiene im Endzustand
     */
    bool isSuccessful();

    /*
     * Methode: void Statemachine::parse(std::string str)
     *
     * Es werden mehrere aufeinander folgende Buchstaben als Eingabe verarbeitet.
     *
     * str              : std::string           - Zeichenkette für die Bearbeitung.
     * throws           : std::invalid_argument - falls Buchstabe nich "a" oder "b".
     */
    void parse(std::string str);

    /*
     * Methode: void Statemachine::parse(char c)
     *
     * Es wird ein Buchstabe als Eingabe verarbeitet.
     *
     * c                : char                  - Buchstabe fuer den naechsten Schritt.
     * throws           : std::invalid_argument - falls Buchstabe nich "a" oder "b".
     */
    void parse(char c);
};
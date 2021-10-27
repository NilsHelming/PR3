/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Definition des Observer Interfaces
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#pragma once

#include <string>


/*
 * Interface: Observable
 *
 * Die Definition des Interfaces Observer, welches sich bei Observables registrieren
 * kann und von diesen dann notified werden koennen.
 */
class Observer {
public:

    /*
     * Methode: Observer::Observer()
     *
     * Konstruktor des Observer-Interfaces
     */
    Observer() = default;

    /*
     * Methode: Observer::~Observer()
     *
     * Dekonstruktor des Observer-Interfaces
     */
    virtual ~Observer() = default;

    /*
     * Methode: Observer::update()
     *
     * Die Methode, die von allen Obervables aufgerufen werden, um den jeweiligen
     * Observer anzusprechen.
     */
    virtual void update();

    /*
     * Methode: Observer::toString()
     *
     * Diese Methode soll Informationen über ein Objekt in einem kurzen String
     * für Konsolenausgabe liefern.
     *
     * return           : std::string           - Identifizierender String.
     */
    virtual std::string toString();
};
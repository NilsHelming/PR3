/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Definition des Observable Interfaces
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#pragma once

#include <list>

#include "Observer.h"

/*
 * Abstract: Observable
 *
 * Die Definition des Interfaces Observable, welches von Observern abgehoert
 * werden koennen.
 */
class Observable {
    /*
     * Variable: std::list<Observer> Observable::observers
     *
     * Die observers sind die menge aller momentan registrierten Observer.
     * Diese Liste enthält keine Duplikate.
     */
    std::list<Observer*> observers = {};

public:

    /*
     * Methode: Observable::Observable()
     *
     * Konstruktor des Observable-Interfaces
     */
    Observable() = default;

    /*
     * Methode: Observable::~Observable()
     *
     * Dekonstruktor des Observable-Interfaces
     */
    virtual ~Observable() = default;

    /*
     * Methode: bool Observable::addObserver(const Observer& observer)
     *
     * Es soll ein neuer Observer hinzugefuegt werden, der dann mit allen anderen notified
     * werden kann.
     *
     * observer         : const Observer&   - Referenz des hinzuzufügenden Observers.
     * return           : bool              - true, falls der Observer tatsaechlich
     *                                        hinzugefügt wurde. (false, falls Duplikat)
     */
    virtual bool addObserver(Observer& observer);

    /*
     * Methode: bool Observable::remObserver(const Observer& observer)
     *
     * Es soll ein Observer aus den registrierten Observern entfernt werden. Dieser wird
     * daraufhin nicht weiter notified.
     *
     * observer         : Observer&   - Referenz des zu entfernenden Observers.
     * return           : bool              - true, falls der Observer tatsaechlich
     *                                        entfernt wurde. (false, falls nicht vorhanden)
     */
    virtual bool remObserver(Observer& observer);

    /*
     * Methode: void Observable::notifyObservers()
     *
     * Alle registrierten Observer werden per Observer::update() angesprochen.
     */
    virtual void notifyObservers();
};
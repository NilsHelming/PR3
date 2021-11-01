/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Implementation des Observable Interfaces
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Observable.h"

bool Observable::addObserver(Observer& observer){
    Observer* pObserver = &observer;

    //check, if the Observer is already contained in the list
    //return false, if so.
    for(const Observer* comp : observers)
        if(comp == pObserver)
            return false;

    //the observer was not contained in the list, we can add it.
    observers.push_back(pObserver);
    return true;
}

bool Observable::remObserver(Observer& observer){
    Observer* pObserver = &observer;
    bool bContained = false;

    //search for the to be removed observer, update bContained once found.
    for(const Observer* comp : this->observers)
        if(comp == pObserver)
            bContained = true;

    this->observers.remove(pObserver);
    return bContained;
}

void Observable::notifyObservers(){
    for(Observer* pObserver : this->observers)
        pObserver->update();
}
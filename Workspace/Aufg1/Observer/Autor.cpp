/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Implementation der Autor Klasse
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Autor.h"

bool Autor::setTweet(std::string _tweet){
    //falls der neue Tweet identisch zum alten ist, soll niemand notified werden.
    //in diesem Fall soll auch false zurueck gegeben werden.
    if(tweet == _tweet)
        return false;

    tweet = _tweet;
    this->notifyObservers();
    return true;
}

std::string Autor::toString(){
    return this->getName();
}
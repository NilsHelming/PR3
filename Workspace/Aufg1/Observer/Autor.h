/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Definition der Autor Klasse
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#pragma once

#include <string>

#include "Observable.h"

/*
 * Klasse: Autor : public Observable
 *
 * Ein Autor enthaelt seinen Namen, sowie seinen letzten Tweet zur Abfrage. Wann
 * immer dieser Tweet geaendert wird, werden alle registrierten Observer informiert.
 */
class Autor : public Observable {
    /*
     * Variable: std::string Autor::name
     *
     * Enthaelt den Namen dieses Autors. Im Konstruktor uebergeben.
     */
    std::string name;

    /*
     * Variable: std::string Autor::tweet
     *
     * Enthaelt den aktuellen Tweet des Autors. Zu beginn leer.
     * Wird durch Autor::setTweet(std::string tweet) gesetzt.
     */
    std::string tweet = "";

public:

    /*
     * Methode: Autor::Autor(std::string name)
     *
     * Konstruktor eines Autors. Der uebergebene std::string bestimmt den Namen des Autors.
     *
     * name             : std::string   - Der Name, der dem Autor gegeben werden soll.
     */
    Autor(std::string _name) : name(_name) {};


    /*
     * Methode: bool Autor::setTweet(std::string tweet)
     *
     * Setzt den Tweet dieses Autors. Loest ein Observer::update() bei allen Observer aus,
     * falls dieser sich geaendert hat.
     *
     * tweet            : std::string   - Der Tweet, der dem Autor zugeordnet werden soll.
     * return           : bool          - true, falls sich der Tweet geaendert hat und somit
     *                                    alle Observer informiert wurden.
     */
    bool setTweet(std::string _tweet);

    /*
     * Methode: std::string Autor::getTweet()
     *
     * Gibt den momentanen Tweet dieses Autors zurueck.
     *
     * return           : std::string   - Der aktuelle Tweet dieses Autors.
     */
    std::string getTweet(){return this->tweet;}

    /*
     * Methode: std::string Autor::getName()
     *
     * Gibt den Namen dieses Autors zurueck.
     *
     * return           : std::string   - Der Name dieses Autors.
     */
    std::string getName(){return this->name;}

    /*
     * Methode: std::string Autor::toString()
     *
     * Gibt eine kurze Zusammenfassung des Autors zurueck.
     *
     * return           : std::string   - Der Name dieses Autors.
     */
    std::string toString();
};
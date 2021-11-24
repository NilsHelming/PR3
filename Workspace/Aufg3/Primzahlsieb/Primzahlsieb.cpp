/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 3.1 Primzahlsieb
 * Autor: Nils Helming
 *
 * Implementation der Funktionen für das Primzahlsieb
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Primzahlsieb.h"

#include <algorithm>
using std::remove_if;

/**
 * @brief Unaeres Praedikat, welches bestimmt, ob die im Konstruktor angegebene
 * Zahl die uebergebene Zahl ganz Teilt.
 *
 */
class multipleOf {
private:
    C_Elem n;
public:
    multipleOf(C_Elem _n) : n(_n) {}

    bool operator()(C_Elem x) const {
        return (x%n) == 0;
    }
};


C_Iter primzahlSieb(C_Iter start, C_Iter end){
    if(start == end)
        return end;

    //Das naechste Element, welches zum sieben verwendet werden soll.
    C_Elem first = *start;

    //Start-Iterator fuer den Teil der Liste, welcher nach first gesiebt wird
    C_Iter sieb_start = ++C_Iter(start);
    //End-Iterator fuer den Teil der Liste, welcher nach first gesiebt wird
    C_Iter sieb_end = remove_if(sieb_start, end, multipleOf(first));

    return primzahlSieb(sieb_start, sieb_end);
}
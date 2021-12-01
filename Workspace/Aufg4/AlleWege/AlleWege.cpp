/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.1 Alle Wege
 * Autor: Nils Helming
 *
 * Implementation der Funktion für die Bestimmung der Anzahl aller moeglichen
 * Wege zwischen dem Punkt Oben-Links und Unten-Rechts in einem Rechteck mit den
 * Laengen n (Breite) und m (Hoehe)
 *
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "AlleWege.h"

int alleWege(int n, int m){
    if(n <= 0 || m <= 0)
        return 1;
    else
        return alleWege(n-1, m) + alleWege(n, m-1);
}
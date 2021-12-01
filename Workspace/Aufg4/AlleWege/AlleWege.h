#pragma once
/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.1 Alle Wege
 * Autor: Nils Helming
 *
 * Definition der Funktionen für die Bestimmung der Anzahl aller moeglichen
 * Wege zwischen dem Punkt Oben-Links und Unten-Rechts in einem Rechteck mit den
 * Laengen n (Breite) und m (Hoehe)
 *
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

/**
 * @brief Bestimmt die Anzahl aller moeglichen Wege zwischen dem Punkt
 * Oben-Links und Unten-Rechts in einem Rechteck mit den Laengen n (Breite) und
 * m (Hoehe)
 *
 * @param n Breite des Rechtecks
 * @param m Hoehe des Rechtecks
 * @return int Anzahl moeglichkeiten zwischen den Eckpunkten.
 */
int alleWege(int n, int m);
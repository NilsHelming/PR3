#pragma once
/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.3 Binomische Zahlen
 * Autor: Nils Helming
 *
 * Definition der Funktionen zur Berechnung binomischer Zahlen per rekursiver,
 * stapelbasierter und iterativer Methoden.
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

/**
 * @brief Soll Binomische Zahlen fuer n und k bestimmen. Dies geschieht per
 * rekursion.
 *
 * @param n
 * @param k k<=n
 * @return int
 */
unsigned int binomi_rekursiv(unsigned int n, unsigned int k);
/**
 * @brief Soll Binomische Zahlen fuer n und k bestimmen. Dies geschieht per
 * Stapel.
 *
 * @param n
 * @param k k<=n
 * @return int
 */
unsigned int binomi_stapel(unsigned int n, unsigned int k);
/**
 * @brief Soll Binomische Zahlen fuer n und k bestimmen. Dies geschieht
 * iterativ.
 *
 * @param n
 * @param k k<=n
 * @return int
 */
unsigned int binomi_iterativ(unsigned int n, unsigned int k);
/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 3.2 Mergesort
 * Autor: Nils Helming
 *
 * Implementierung der Funktion fuer Mergesort und aller Hilfsfunktionen
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Mergesort.h"

#include <algorithm>

void mergeSort(C_Iter start, C_Iter end, const pC_Elem_Comp comparator);
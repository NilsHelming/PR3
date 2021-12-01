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
using std::inplace_merge;

#include <iterator>
using std::distance;
using std::advance;

void mergeSort(C_Iter start, C_Iter end, const pC_Elem_Comp comparator){
    int size = distance(start, end);
    if(size <= 1)
        return;

    //die Liste ist mindestens zwei Elemente lang.

    //Der Iterator, der HINTER die erste haelfte der Liste zeigen soll,
    //und damit auf das ERSTE Element der zweiten Liste zeigt.
    //Im Zweifelsfall ist die erste haelfte der Liste die kleinere.
    C_Iter middle = C_Iter(start);
    advance(middle, size/2);

    mergeSort(start, middle, comparator);
    mergeSort(middle, end, comparator);

    inplace_merge(start, middle, end, comparator);
}
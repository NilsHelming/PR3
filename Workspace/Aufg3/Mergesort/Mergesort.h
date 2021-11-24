#pragma once
/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 3.2 Mergesort
 * Autor: Nils Helming
 *
 * Definition der Funktion fuer Mergesort
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <list>
using std::list;
#include <functional>
using std::function;

//source: Netcase/Handout_p3ti/01_SoftwareParadigmen/XCode_SoftwareParadigmen/LiveQuicksort/Quicksort0.cpp
typedef list<int> Container;          // Anforderung: beliebiger sequenzieller Container!
typedef Container::iterator C_Iter;   // Anforderung: bidirektional
typedef Container::value_type C_Elem; // Anforderung: operator< implementiert

typedef function<bool(C_Elem, C_Elem)> pC_Elem_Comp;

/**
 * @brief Diese Funktion soll eine Liste, gegeben durch Start- und
 * End-Iteratoren, ueber Mergesort sortieren. Diese Sortierung soll dabei ueber
 * den Vergleich, gegeben durch den Funktions-Pointer, erfolgen.
 *
 * @param start Der Anfang der zu sortierenden Liste.
 * @param end Das Ende der zu sortierenden Liste.
 * @param comparator Ein Funktionszeiger, der den Vergleich zweier Elemente
 * implementiert.
 */
void mergeSort(C_Iter start, C_Iter end, const pC_Elem_Comp comparator);
#pragma once
/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 3.1 Primzahlsieb
 * Autor: Nils Helming
 *
 * Definition der Funktionen für das Primzahlsieb
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <list>
using std::list;

//source: Netcase/Handout_p3ti/01_SoftwareParadigmen/XCode_SoftwareParadigmen/LiveQuicksort/Quicksort0.cpp
typedef list<int> Container;          // Anforderung: beliebiger sequenzieller Container!
typedef Container::iterator C_Iter;   // Anforderung: bidirektional
typedef Container::value_type C_Elem; // Anforderung: operator< implementiert

/**
 * @brief Erhaelt zwei Iteratoren einer Zahlenfolge, welche Beispielsweise eine
 * Liste [2,3,4,...,n] darstellen. Und wendet auf diesen das Primzahlsieb an.
 * Die Liste wird im vorhinein nicht sortiert und auch nach dem Sieb sind die
 * Elemente in ihrer urspruenglichen Reihenfolge. Zurueckgegeben wird das neue
 * Ende der Zahlenfolge, alle Elemente nach diesem Ende sind von dem Sieb
 * ausgesiebt worden.
 *
 * @param start Der Iterator, welcher den Start der Zahlenfolge darstellt.
 * @param end Der Iterator, wecher das Ende der Zahlenfolge darstellt.
 * @return C_Iter Der Iterator, welcher das neue Ende festlegt.
 */
C_Iter primzahlSieb(C_Iter start, C_Iter end);


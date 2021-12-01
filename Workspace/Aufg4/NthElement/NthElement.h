#pragma once
/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.2 n-th Element
 * Autor: Nils Helming
 *
 * Definition der Funktionen mit welcher das n-t kleinste Element aus einer
 * gegebenen Liste gefunden werden soll. Dies soll nicht ueber Sortierung
 * sondern ueber einen rekursiven Ansatz gemacht werden.
 *
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <list>
using std::list;


typedef list<int> Container;          // Anforderung: beliebiger sequenzieller Container!
typedef Container::value_type C_Elem; // Anforderung: operator< implementiert

/**
 * @brief Diese Funktion bestimmt ueber einen rekursiven Ansatz das n-t kleinste
 * Element in dem Container. Dabei ist 1 die kleinste sinnvolle, und size(c)
 * die groeste sinnvolle Zahl.
 *
 * @param c Der Container, in welchem das Element gefunden werden soll.
 * @param n Das n-t kleinste Element soll gefunden werden.
 * @return C_Elem Das n-t kleinste Element.
 */
C_Elem nthElement(Container c, int n);

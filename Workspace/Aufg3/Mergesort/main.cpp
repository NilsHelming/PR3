/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 3.2 Mergesort
 * Autor: Nils Helming
 *
 * Beispielimplementation fuer Mergesort.
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */
#include <iostream>

#include "Mergesort.h"


/**
 * @brief Gibt den Inhalt einer Iteratorsequenz auf der Konsole aus.
 *
 * @param begin Anfang der Iteratorsequenz
 * @param end Ende der Iteratorsequenz
 */
void print(C_Iter begin, C_Iter end) {
    for (C_Iter it = begin; it != end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void print(Container c){
    print(c.begin(), c.end());
}


int main(int argc, char const *argv[])
{
    Container l = {8, 2, -2, 0, 11, 11, 1, 7, 3};
    print(l);

    C_Iter start = l.begin();
    C_Iter end = l.end();

    mergeSort(start, end, [](C_Elem a, C_Elem b)->bool{return a<b;});

    print(l);




    return 0;
}

/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 3.1 Primzahlsieb
 * Autor: Nils Helming
 *
 * Beispielimplementation für das Primzahlsieb
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>

#include "Primzahlsieb.h"



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
    Container l = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    print(l);

    C_Iter end = primzahlSieb(l.begin(), l.end());
    print(l);

    l.erase(end, l.end());
    print(l);

    system("pause");
    return 0;
}

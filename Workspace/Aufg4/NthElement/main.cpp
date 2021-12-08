/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.2 n-th Element
 * Autor: Nils Helming
 *
 * Beispielimplementation für n-th Element
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>

#include "NthElement.h"

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
    Container c = {8, 2, -2, 0, 11, 11, 1, 7, 3};
    print(c);

    std::cout << "Selecting All Elements ordered:" << std::endl;
    for(int i = 1; i<= c.size(); ++i){
        C_Elem ithElem = nthElement(c, i);
        std::cout << "Element #" << i << ": " << ithElem << std::endl;
    }

    system("pause");
    return 0;
}

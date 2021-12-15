/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.3 n-th Element
 * Autor: Nils Helming
 *
 * Beispielimplementation für Binomische Zahlen
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>
using std::cout;
using std::endl;

#include "binomi.h"

void test(unsigned int n, unsigned int k){
    cout << "Test (" << n << ", " << k <<")"
         << ": rekursiv: " << binomi_rekursiv(n,k)
         << ", stapel: " << binomi_stapel(n,k)
         << ", iterativ: " << binomi_iterativ(n,k)
         << endl;
}

int main(int argc, char const *argv[])
{
    //test(2,1);
    //test(4,3);
    test(8,5);
    //test(33,17);

    system("pause");
    return 0;
}

/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.1 Alle Wege
 * Autor: Nils Helming
 *
 * Beispielimplementation für Alle Wege
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>

#include "AlleWege.h"

int main(int argc, char const *argv[])
{
    std::cout << "Einfache Wege:" << std::endl;
    std::cout << "1x0: "<< alleWege(1,0) << std::endl;
    std::cout << "7x0: "<< alleWege(7,0) << std::endl;
    std::cout << "0x1: "<< alleWege(0,1) << std::endl;
    std::cout << "0x7: "<< alleWege(0,7) << std::endl;

    std::cout << "Komplexere Wege:" << std::endl;
    std::cout << "1x1: "<< alleWege(1,1) << std::endl;
    std::cout << "1x2: "<< alleWege(1,2) << std::endl;
    std::cout << "2x1: "<< alleWege(2,1) << std::endl;
    std::cout << "2x2: "<< alleWege(2,2) << std::endl;
    std::cout << "10x10: "<< alleWege(10,10) << std::endl;


    system("pause");
    return 0;
}

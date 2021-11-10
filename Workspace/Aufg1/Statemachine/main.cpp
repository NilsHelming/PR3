/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.1 Zustandsautomat
 * Autor: Nils Helming
 *
 * Beispiel-Ausfuerung einer Statemachine
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>

#include "State.h"
#include "Statemachine.h"

/*
 * Funktion: int main()
 * Es soll eine Statemachine erstellt werden
 * und eine Eingabe durchgearbeitet werden.
 *
 * return           : int           - 0, falls erfolgreich ausgeführt
 */
int main(){
    Statemachine machine;
    machine.parse("abaa");
    std::cout << "output: " << machine.isSuccessful() << std::endl;
    return 0;
}
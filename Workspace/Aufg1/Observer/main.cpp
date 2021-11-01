/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.2 Beobachter
 * Autor: Nils Helming
 *
 * Beispiel-Ausfuerung eines Beobachter-Modells
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>

#include "Autor.h"
#include "Dozent.h"
#include "Student.h"

/*
 * Funktion: int main()
 *
 * Es sollen jeweils zwei Autoren, Studenten und Dozenten erstellt werden, die dann
 * ihre Funktionalität darstellen.
 *
 * return           : int           - 0, falls erfolgreich ausgeführt
 */
int main(){
    Autor A1 = Autor("A1");
    Autor A2 = Autor("A2");

    Student S1 = Student("S1", "000 001");
    S1.setAutor(&A1);
    Student S2 = Student("S2", "000 002");
    S2.setAutor(&A2);

    Dozent D1 = Dozent("D1", "100 000");
    D1.setAutor(&A1);
    Dozent D2 = Dozent("D2", "200 000");
    D2.setAutor(&A2);

    A1.setTweet("Neues Buch: A1.1!");
    A2.setTweet("Neues Buch: A2.1!");

    return 0;
}
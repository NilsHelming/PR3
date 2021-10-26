/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.1 Zustandsautomat
 * Autor: Nils Helming
 *
 * Implementierung der speziellen States.
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "State.h"


/*
 * Methode: bool StateQ0::isGoal()
 *
 * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
 *
 * return           : bool           - true, falls State ein Endzustand ist.
 */
bool StateQ0::isGoal(){return true;}

/*
 * Methode: State& StateQ0::goA()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * a-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über a-Pfeil.
 */
State& StateQ0::goA(){delete this; return *new StateQ1();}

/*
 * Methode: State& StateQ0::goB()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * b-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über b-Pfeil.
 */
State& StateQ0::goB(){delete this; return *new StateQ4();}

/*
 * Methode: bool StateQ1::isGoal()
 *
 * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
 *
 * return           : bool           - true, falls State ein Endzustand ist.
 */
bool StateQ1::isGoal(){return false;}

/*
 * Methode: bool StateQ1::goA()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * a-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über a-Pfeil.
 */
State& StateQ1::goA(){delete this; return *new StateQ4();}

/*
 * Methode: bool StateQ1::goB()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * b-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über b-Pfeil.
 */
State& StateQ1::goB(){delete this; return *new StateQ2();}

/*
 * Methode: bool StateQ2::isGoal()
 *
 * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
 *
 * return           : bool           - true, falls State ein Endzustand ist.
 */
bool StateQ2::isGoal(){return true;}

/*
 * Methode: bool StateQ2::goA()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * a-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über a-Pfeil.
 */
State& StateQ2::goA(){delete this; return *new StateQ3();}

/*
 * Methode: bool StateQ2::goB()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * b-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über b-Pfeil.
 */
State& StateQ2::goB(){delete this; return *new StateQ4();}

/*
 * Methode: bool StateQ3::isGoal()
 *
 * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
 *
 * return           : bool           - true, falls State ein Endzustand ist.
 */
bool StateQ3::isGoal(){return true;}

/*
 * Methode: bool StateQ3::goA()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * a-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über a-Pfeil.
 */
State& StateQ3::goA(){delete this; return *new StateQ1();};

/*
 * Methode: bool StateQ3::goB()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * b-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über b-Pfeil.
 */
State& StateQ3::goB(){delete this; return *new StateQ2();};

/*
 * Methode: bool StateQ4::isGoal()
 *
 * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
 *
 * return           : bool           - true, falls State ein Endzustand ist.
 */
bool StateQ4::isGoal(){return false;}

/*
 * Methode: bool StateQ4::goA()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * a-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über a-Pfeil.
 */
State& StateQ4::goA(){return *this;}

/*
 * Methode: bool StateQ4::goB()
 *
 * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
 * b-Pfeil folgt.
 * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
 * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
 * States ist der hiermit angesprochene vom Heap entfernt worden.
 *
 * return           : State&           - Folge-State über b-Pfeil.
 */
State& StateQ4::goB(){return *this;}

/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.1 Zustandsautomat
 * Autor: Nils Helming
 *
 * Definition des State Interfaces und Definition der speziellen States
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#pragma once

/*
 * Interface: State
 *
 * Ein State ist ein Zustand, in welchem sich eine Statemachine sich befinden
 * kann. Dieser hat Methoden um Folgezustaende zu erstellen und um Abzufragen,
 * ob der gefragte Zustand ein Endzustand ist.
 */
class State {
public:

    /*
     * Methode: State::State()
     *
     * Konstruktor des State-Interfaces
     */
    State() = default;

    /*
     * Methode: State::~State()
     *
     * Dekonstruktor des State-Interfaces
     */
    virtual ~State() = default;

    /*
     * Methode: bool State::isGoal()
     *
     * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
     *
     * return           : bool           - true, falls State ein Endzustand ist.
     */
    virtual bool isGoal() = 0;

    /*
     * Methode: State& State::goA()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * a-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über a-Pfeil.
     */
    virtual State& goA() = 0;

    /*
     * Methode: State& State::goB()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * b-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über b-Pfeil.
     */
    virtual State& goB() = 0;
};

/*
 * Klasse: StateQ0
 *
 * Eine spezielle Implementation des State-Interfaces.
 */
class StateQ0 : public State{

    /*
     * Methode: bool StateQ0::isGoal()
     *
     * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
     *
     * return           : bool           - true, falls State ein Endzustand ist.
     */
    bool isGoal();

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
    State& goA();

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
    State& goB();
};

/*
 * Klasse: StateQ1
 *
 * Eine spezielle Implementation des State-Interfaces.
 */
class StateQ1 : public State{

    /*
     * Methode: bool StateQ1::isGoal()
     *
     * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
     *
     * return           : bool           - true, falls State ein Endzustand ist.
     */
    bool isGoal();

    /*
     * Methode: State& StateQ1::goA()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * a-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über a-Pfeil.
     */
    State& goA();

    /*
     * Methode: State& StateQ1::goB()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * b-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über b-Pfeil.
     */
    State& goB();
};

/*
 * Klasse: StateQ2
 *
 * Eine spezielle Implementation des State-Interfaces.
 */
class StateQ2 : public State{

    /*
     * Methode: bool StateQ2::isGoal()
     *
     * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
     *
     * return           : bool           - true, falls State ein Endzustand ist.
     */
    bool isGoal();

    /*
     * Methode: State& StateQ2::goA()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * a-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über a-Pfeil.
     */
    State& goA();

    /*
     * Methode: State& StateQ2::goB()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * b-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über b-Pfeil.
     */
    State& goB();
};

/*
 * Klasse: StateQ3
 *
 * Eine spezielle Implementation des State-Interfaces.
 */
class StateQ3 : public State{

    /*
     * Methode: bool StateQ3::isGoal()
     *
     * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
     *
     * return           : bool           - true, falls State ein Endzustand ist.
     */
    bool isGoal();

    /*
     * Methode: State& StateQ3::goA()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * a-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über a-Pfeil.
     */
    State& goA();

    /*
     * Methode: State& StateQ3::goB()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * b-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über b-Pfeil.
     */
    State& goB();
};

/*
 * Klasse: StateQ4
 *
 * Eine spezielle Implementation des State-Interfaces.
 */
class StateQ4 : public State{

    /*
     * Methode: bool StateQ4::isGoal()
     *
     * Es soll zurückgegeben werden, ob der State ein Endzustand ist.
     *
     * return           : bool           - true, falls State ein Endzustand ist.
     */
    bool isGoal();

    /*
     * Methode: State& StateQ4::goA()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * a-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über a-Pfeil.
     */
    State& goA();

    /*
     * Methode: State& StateQ4::goB()
     *
     * Es soll der State zurückgegeben werden, der folgt wenn man von diesem aus dem
     * b-Pfeil folgt.
     * Dieser neue State ist potentiell ein frisch erstellter State und muss daher
     * unbedingt auch weiter referenziert werden! Im Fall eines neu erstellten
     * States ist der hiermit angesprochene vom Heap entfernt worden.
     *
     * return           : State&           - Folge-State über b-Pfeil.
     */
    State& goB();
};
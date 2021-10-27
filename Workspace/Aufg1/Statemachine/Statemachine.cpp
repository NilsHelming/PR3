/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 1.1 Zustandsautomat
 * Autor: Nils Helming
 *
 * Implementation der Statemachine.
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <string>
#include <stdexcept>

#include "Statemachine.h"
#include "State.h"


Statemachine::Statemachine(){this->state = new StateQ0();}
Statemachine::~Statemachine(){delete this->state;}

bool Statemachine::isSuccessful(){return this->state->isGoal();}

void Statemachine::parse(std::string str){
    for(char c : str)
        parse(c);
}
void Statemachine::parse(char c){
    switch(c){
        case 'a':
            this->state = &state->goA();
        break;
        case 'b':
            this->state = &state->goB();
        break;
        default:
            throw new std::invalid_argument("cannot parse characters other than 'a' or 'b'. Was " + c);
    }
}
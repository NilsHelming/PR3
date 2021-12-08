/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.3 Binomische Zahlen
 * Autor: Nils Helming
 *
 * Implementation der Funktionen zur Bestimmung von Binomischen Zahlen.
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "binomi.h"

#include <stdexcept>
using std::logic_error;

#include <stack>
using std::stack;

#include <tuple>
using std::pair;

unsigned int binomi_rekursiv(unsigned int n, unsigned int k){
    if(k>n)
        throw new logic_error("Binomial Coefficients are not defined for this case");

    if(k == 0 || k == n)
        return 0;
    else if(k == 1)
        return n;
    else
        return binomi_rekursiv(n-1, k-1) + binomi_rekursiv(n-1, k);
}


typedef pair<unsigned int, unsigned int> sPair;
stack< sPair > callStack;
unsigned int binomi_stapel(unsigned int n, unsigned int k){
    if(k>n)
        throw new logic_error("Binomial Coefficients are not defined for this case");

    unsigned int sum = 0;
    callStack.push(sPair(n, k));

    while(!callStack.empty()){
        sPair current = callStack.top();
        callStack.pop();

        n = current.first;
        k = current.second;

        if(k == 0 || k == n)
            sum+=1;
        else if(k == 1)
            sum+=n;
        else{
            callStack.push(sPair(n-1, k-1));
            callStack.push(sPair(n-1, k));
        }
    }
    return sum;
}
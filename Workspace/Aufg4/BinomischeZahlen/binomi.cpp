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

#include <algorithm>
using std::min;
using std::max;

#include <vector>
using std::vector;

unsigned int binomi_rekursiv(unsigned int n, unsigned int k){
    if(k>n)
        throw new logic_error("Binomial Coefficients are not defined for this case");

    if(k == 0 || k == n)
        return 1;
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

unsigned int binomi_iterativ(unsigned int n, unsigned int k){
    if(k>n)
        throw new logic_error("Binomial Coefficients are not defined for this case");

    k = min(k, n-k);

    //maximaler wert innerhalb von integer ist binom(33,17)
    if(k>17)
        throw new logic_error("Result too big for int");

    //die momentan betrachtete Zeile.
    //Elemente dieser Zeile werden immer rueckwaerts mit den Elementen der
    //naechsten Zeile ersetzt.
    int arrZeile[18];
    //vector<int> vZeile(k+1, 0);
    for(unsigned int zeile = 0; zeile < n; ++zeile){
        int spaltenMin = max((unsigned int)0, k-(n-(zeile+1)));
        int spaltenMax = min(k, zeile+1);
        for(int spalte = spaltenMax; spalte >= spaltenMin; --spalte){
            if(spalte == 0 || spalte == zeile+1) //seiten des Dreiecks
                arrZeile[spalte] = 1;
            else //binom(n,k) = binom(n-1,k-1) + binom(n-1,k)
                arrZeile[spalte] =
                    arrZeile[spalte-1] + arrZeile[spalte];
        }
    }

    return arrZeile[k];
}
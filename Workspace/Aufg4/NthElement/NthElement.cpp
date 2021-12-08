/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 4.2 n-th Element
 * Autor: Nils Helming
 *
 * Implementation der Funktionen mit welcher das n-t kleinste Element aus einer
 * gegebenen Liste gefunden werden soll. Dies soll nicht ueber Sortierung
 * sondern ueber einen rekursiven Ansatz gemacht werden.
 *
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "NthElement.h"

#include <algorithm>
using std::copy_if;

#include <iterator>
using std::back_inserter;

/**
 * @brief Unaeres Praedikat, welches bestimmt, ob die im Konstruktor angegebene
 * Zahl die uebergebene Zahl ganz Teilt.
 *
 */
class multipleOf {
private:
    C_Elem n;
public:
    multipleOf(C_Elem _n) : n(_n) {}

    bool operator()(C_Elem x) const {
        return (x%n) == 0;
    }
};


C_Elem nthElement(Container c, int n){
    //a few checks first:
    //is there any element in the container?
    //are there more than (or equal) n elements in the container?
    if(n<1 || n>c.size())//failing this check implicates at least one element.
        return C_Elem();

    //get first element
    C_Iter start = c.begin();
    C_Elem first = *(start++); //get the first element, then do a step.

    //starting with second element (start):
    //seperate into two containers:
    //a) all elements smaller (or equal) to the first element
    Container small;
    copy_if(start, c.end(), back_inserter(small),
        [first](C_Elem e){return e <= first;});
    //b) all elements bigger than the first element
    Container big;
    copy_if(start, c.end(), back_inserter(big),
        [first](C_Elem e){return e > first;});


    size_t small_size = small.size();
    //if the small container is exactly of size n-1, then the searched element
    //is first.
    if(small_size == n-1){
        return first;
    }
    //if the small container is bigger than n-1, then our element is within
    //the Container small.
    else if(small_size > n-1){
        return nthElement(small, n);
    }
    //if the small container is smaller than n-1, then our element is within
    //the Container big. This Container has both the Element first (which is
    //smaller than our searched element) and all the Elements within small
    //(which are also smaller than our searched element). Aus such, we no longer
    //need to look for the n-the Element, but need to account for these removed
    //Elements.
    else{
        return nthElement(big, n-small_size-1);
    }
}
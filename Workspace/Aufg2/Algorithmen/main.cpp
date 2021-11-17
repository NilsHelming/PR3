/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 2.2 Algorithmen
 * Autor: Nils Helming
 *
 * Ausfuehrung der Aufgabe 2.2
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>

#include <list>
#include <set>
#include <algorithm>

typedef std::list<int> Container;
typedef Container::iterator C_Iter;
typedef Container::value_type C_Elem;

template<typename Container>
C_Elem findSmallElement(C_Iter begin, C_Iter end, int n){
    std::swap(begin, std::min(begin, end));
    return findSmallElement(++begin, end, n-1);
}

template<typename Container>
Container partialSum(C_Iter begin, C_Iter end){
    Container summed = Container();

    // std::accumulate(begin, begin);
    // std::accumulate(begin, begin++);
    // ...
    // std::accumulate(begin, end);
}

int main(){
    system("pause");
    return 0;
}
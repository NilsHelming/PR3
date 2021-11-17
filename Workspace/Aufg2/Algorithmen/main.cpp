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

/**
 * @brief Gibt den Inhalt einer Iteratorsequenz auf der Konsole aus.
 *
 * @param begin Anfang der Iteratorsequenz
 * @param end Ende der Iteratorsequenz
 */
void print(C_Iter begin, C_Iter end) {
    for (C_Iter it = begin; it != end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

/**
 * @brief Findet das n-t kleinste Element in einer Iteratorsequenz. Die Sequenz
 * wird dabei in ihren Originalzustand zurueck gebracht.
 *
 * @param begin Anfang der Iteratorsequenz
 * @param end Ende der Iteratorsequenz
 * @param n Nummer des kleinesten Elements
 * @return C_Elem Das n-t kleinste Element
 */
C_Elem findSmallElement(C_Iter begin, C_Iter end, int n){
    C_Iter small = std::min_element(begin, end);
    if(n <= 1){
        return *small;
    }else{
        std::swap(*begin, *small); // swap first element with smallest element
        C_Elem small_element = findSmallElement(++C_Iter(begin), end, --n);
        std::swap(*begin, *small); // restore original order.
        return small_element;
    }
}

/**
 * @brief Erstellt einen Container, der in seinen Elementen die Summe aller
 * Elemente einer Iteratorsequenz bis zu dessen Index enthaelt. Der Inhalt der
 * Iteratorsequenz wird dabei nicht veraendert.
 *
 * @param begin Anfang der Iteratorsequenz
 * @param end Ende der Iteratorsequenz
 * @return Der Container mit den Summen der Elementen der Iteratorsequenz
 */
Container partialSum(C_Iter begin, C_Iter end){
    C_Iter last = --C_Iter(end);
    if(begin == end){
        return Container();
    }else if(begin == last){
        return Container(1, *begin);
    }else{
        Container sum = partialSum(begin, last);
        sum.push_back(*last + sum.back());
        return sum;
    }
}

/**
 * @brief Erstellt einen Container, der in seinen Elementen das Produkt aller
 * Elemente einer Iteratorsequenz bis zu dessen Index enthaelt. Der Inhalt der
 * Iteratorsequenz wird dabei nicht veraendert.
 *
 * @param begin Anfang der Iteratorsequenz
 * @param end Ende der Iteratorsequenz
 * @return Der Container mit den Produkten der Elementen der Iteratorsequenz
 */
Container partialProduct(C_Iter begin, C_Iter end){
    C_Iter last = --C_Iter(end);
    if(begin == end){
        return Container();
    }else if(begin == last){
        return Container(1, *begin);
    }else{
        Container prod = partialProduct(begin, last);
        prod.push_back(*last * prod.back());
        return prod;
    }
}

int main(){
    std::list<int> l = {180,857,683,962,15,765,444,896,47,265};
    std::cout<<findSmallElement(l.begin(), l.end(), 2) << std::endl;
    print(l.begin(), l.end());

    std::list<int> l2 = {180,857,683,962,15,765,444,896,47,265};
    Container sum = partialSum(l2.begin(), l2.end());
    print(sum.begin(), sum.end());

    std::list<int> l3 = {1,2,3,4,5,6,7,8,9,10};
    Container mul = partialProduct(l3.begin(), l3.end());
    print(mul.begin(), mul.end());


    system("pause");
    return 0;
}
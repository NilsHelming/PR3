/*
 * -----------------------------------------------------------------------------
 *
 * Aufgabe: 2.1 Textstatistik
 * Autor: Nils Helming
 *
 * Ausfuehrung der Aufgabe 2.1
 *
 * Praktikum Programmierung 3, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include <iostream>
#include <fstream>

#include <map>
#include <string>
#include <ctype.h>
#include <algorithm>

typedef std::map<char, int> Charcounter;

void count_char(Charcounter& counter, std::ifstream& file){
    if(!file.is_open())
        throw new std::logic_error("cannot count from a closed file.");

    char read;
    while(!file.eof())
        if(std::isalpha(read = file.get())){ //isalpha = is alphabetic
            read = std::tolower(read);
            counter[read] = counter[read]+1;
        }
}

std::string& toWord(std::string& str){
    str.erase(
        std::remove_if(
            str.begin(), str.end(), [](char c){ return !std::isalpha(c); }
        ), str.end());
    std::transform(str.begin(), str.end(), str.begin(),
        [](unsigned char c){ return std::tolower(c); });

    return str;
}

bool isWordLength(const std::string& word){
    return (word.length() >= 2 && word.length() <= 20);
}

void stuffs(std::ifstream& file){
    if(!file.is_open())
        throw new std::logic_error("cannot read from a closed file.");

    while(!file.eof()){
        std::string s;
        file >> s;
        if(isWordLength(toWord(s)))
            std::cout << s.length() << "\t" <<  s << std::endl;
    }
}


/*
 * Funktion: int main()
 *
 * Diese
 *
 * return           : int           - 0, falls erfolgreich ausgeführt
 */
int main(){
    std::string filename = "Workspace/Aufg2/Textstatistik/buergschaft";

    #if 0 //Test 1: lese Filename, gebe Anzahl aller vorkommen von Buchstaben aus.
    {
        std::ifstream reader(filename);
        if(!reader.is_open()){
            std::cerr << "Could not open the file - '"
                << filename << "'" << std::endl;
            return EXIT_FAILURE;
        }

        Charcounter counter;
        count_char(counter, reader);

        for(auto it=counter.begin(); it!=counter.end(); it++){
            std::cout << it->first << "\t->\t" << it->second << std::endl;
        }

        reader.close();
    }
    #endif
    #if 1 //Test 2:
    {
        std::ifstream reader(filename);
        stuffs(reader);
    }
    #endif


    return 0;
}
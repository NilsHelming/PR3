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
#include <set>
#include <unordered_set>
#include <string>
#include <ctype.h>
#include <algorithm>

struct lengthHash {
    size_t operator()(std::string key) const {
        return key.length();
    }
};

typedef std::map<char, int> Charcounter;
typedef std::unordered_set<std::string, lengthHash> LengthSet;
typedef std::set<std::string> StringSet;


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
    str.erase( //remove all non-alphabetical characters
        std::remove_if(str.begin(), str.end(),
            [](char c){ return !std::isalpha(c); }
        ), str.end());
    std::transform(str.begin(), str.end(), str.begin(), //tolower(str);
        [](unsigned char c){ return std::tolower(c); }
    );

    return str;
}

bool isWordLength(const std::string& word){
    return (word.length() >= 2 && word.length() <= 20);
}

LengthSet collection_by_length(std::ifstream& file){
    if(!file.is_open())
        throw new std::logic_error("cannot read from a closed file.");

    LengthSet lengthSet;

    while(!file.eof()){
        std::string s;
        file >> s;
        if(isWordLength(toWord(s)))
            lengthSet.insert(s);
    }

    return lengthSet;
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


        LengthSet lengthSet = collection_by_length(reader);

        for(int i=2; i<=20; ++i){
            int bucketSize = lengthSet.bucket_size(
                lengthSet.bucket(std::string(i, 'a'))
            );
            std::cout << "Strings of length " << i << ": " << bucketSize << std::endl;
        }

        int nLength;

        std::cout << "Choose a length, to which you want to know every word:" << std::endl;
        std::cin >> nLength;

        auto bucketId = lengthSet.bucket(std::string(nLength, 'a'));

        for(std::string str : StringSet(lengthSet.begin(bucketId), lengthSet.end(bucketId)))
            std::cout << str << std::endl;
    }
    #endif

    system("pause");
    return 0;
}
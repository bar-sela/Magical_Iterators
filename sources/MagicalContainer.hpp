//
// Created by Nachshon on 6/4/2023.
//
#include <iostream>
#include <vector>

#ifndef CPPEX5_MAGICALCONTAINER_H
#define CPPEX5_MAGICALCONTAINER_H

namespace ariel{

};

using namespace std;
class MagicalContainer {
    vector<int> v;

public:
    void addElement(int);

    int size();

    void removeElement(int) {};

    class AscendingIterator {

    public:
        AscendingIterator(MagicalContainer container) {
        }

        int *begin();
        int operator *(){return  1 ;};
        int* operator ++(int){return nullptr;};
        int *end();
    };

    class SideCrossIterator {
    public:
        SideCrossIterator(MagicalContainer container) {}

        int *begin();
        int* operator ++(int){
            return nullptr;
        }
        int *end();

        int operator*() {
            return  1 ;
        }

        bool operator==(SideCrossIterator iterator) {
            return true;
        };
    };
    class PrimeIterator{ ;
    public:
        PrimeIterator(MagicalContainer container){
        }
        int* operator ++(int){return nullptr;};
        int* begin();
        int* end();
        int operator *(){
            return 1 ;
        };
    };


};
#endif //CPPEX5_MAGICALCONTAINER_H

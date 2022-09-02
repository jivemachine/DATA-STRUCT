#include "lists.h"
#include <iostream>
using namespace std;


lists::lists() {
    ARRAY_SIZE = 0;
}

void lists::ADD(int x) {

    array[ARRAY_SIZE] = x;
    ARRAY_SIZE++;
}

void lists::INSERT(int x, int y)  {
    // x = element, y = index
    array[y] = x;
}

void lists::CLEAR() {
    ARRAY_SIZE = 0;
}

void lists::DELETE(int x) {
    for (int i = 0; i <  10; i++)  {
        
        if (array[i] == x) {
            //  found x
            array[i] = array[ARRAY_SIZE - 1];
            ARRAY_SIZE--;
        }
    }
}

void lists::SHOW() {

    for (int i = 0; i < ARRAY_SIZE;  i++) {
        cout << array[i] << endl;
    }
}

int lists::COUNT() const {
    
    cout << ARRAY_SIZE;
    return 0;
}
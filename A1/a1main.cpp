// Jeremy Cobb
// 09-02-22
// Assignment 1
#include <iostream>
#include "lists.h"
using namespace std;

int main() {

    // initalizing lists functions
    lists O;

    // initalizing input var
    int input, addInput, insertInput, insertIndex, deleteInput;
    

    cout << "Data Entry Menu:" << endl;
    cout << "Would you like to..." << endl;
    cout << "1.) ADD (at the end of array) " << endl;
    cout << "2.) INSERT (element at a given location)" << endl;
    cout << "3.) DELETE (element from a given location)" << endl;
    cout << "4.) SHOW (all array elements)" << endl;
    cout << "5.) COUNT (total number of elements)" << endl;
    cout << "6.) CLEAR (initialize array)" << endl;
    cout << "Please input selection: ";
    cin >> input;

    if (input == 1) {
        cout << "Element to add to array: ";
        cin >> addInput;
        O.ADD(addInput);
    } else if (input == 2) {
        cout << "Element to insert: ";
        cin >> insertInput;
        cout << "At what index: ";
        cin >>  insertIndex;
        O.INSERT(insertInput, insertIndex);
    } else if(input == 3) {
        cout << "What element would you like to delete from array: ";
        cin >> deleteInput;
        O.DELETE(deleteInput);
    } else if (input == 4) {
        O.SHOW();
    } else if (input == 5) {
        O.COUNT();
    } else if (input == 6) {
        O.CLEAR();
    }
  
}
// Jeremy Cobb
// 09-02-22
// Assignment 1
#include <iostream>
using namespace std;

int main() {

    // initalizing array
    int array[100], input, i, n, a, m, l, index, h;

    do {
        cout << "Data Entry Menu:" << endl;
        cout << "Would you like to..." << endl;
        cout << "1.) CREATE DATA "  << endl;
        cout << "2.) SHOW DATA " << endl;
        cout << "3.) ADD (at the end of array) " << endl;
        cout << "4.) INSERT (element at a given location)" << endl;
        cout << "5.) DELETE (element from a given location)" << endl;
        cout << "6.) COUNT (total number of elements)" << endl;
        cout << "7.) CLEAR (initialize array)" << endl;
        cout << "0.) EXIT" << endl;
        cout << "Please input selection: ";
        cin >> input;

        switch(input) {
            case 1: 
                cout << "\n\nHow many data points would you like: ";
                cin >> n;
                for (i = 0; i < n; i++) {
                    cout << "Enter Number: ";
                    cin >> a;
                    array[i] = a;
                }
                cout << "\n\n";
            break;
            case 2:
                cout << "\nYour Data:\n";
                for (i = 0; i < n; i++) {
                    cout << array[i] << " ";
                }
                cout << "\n\n";
            break;
            case 3:
                cout << "\n\nEnter how many more number you want: ";
                cin >> m;

                for (i = n; i < n + m; i++) {
                    cout << "Enter Numbers to ADD: ";
                    cin >> l;
                    array[i] = l;
                }
                n = n + m;
                cout << "\n\n";
            break;
            case 4:
                cout << "\n\nEnter index for insert: ";
                cin >> index;

                if (index > n) {
                    cout << "Index must be less than for equal to " << n << endl;
                } else {
                    cout << "Element at " << index << " index = " << array[index - 1] << endl;
                    cout << "Enter new number: ";
                    cin >> h;
                    array[index-1] = h;
                    cout << "Element  at " << index <<  " index = " <<  array[index-1]  << endl;
                }
                cout << "\n\n";
            break;
            case 5:
                cout << "\n\nEnter position to DELETE: ";
                cin >> index;

                if (index > n) {
                    cout << "Index must be less than or equal to " << n << endl;
                } else {
                    cout << array[index-1] << " is deleted successfully" << endl;
                    for (i = index - 1; i < n - 1; i++) {
                        array[i] = array[i+1];
                    }
                    n--;
                }
                cout << "\n\n";
            break;
            case 6:
                cout <<"\n\n" << n << " data points in array" << endl;
                cout << "\n\n";
            break;
            case 7:
                n = 0;
            break;
        }

    } while (input != 0);
}
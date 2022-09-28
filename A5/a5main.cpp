// Jeremy Cobb
// Assignment 5
// 09-28-22
#include <iostream>
using namespace std;

// prototype
int fibonacci(int n, int level);


// driver code
int main() {
    int n;
    int level = 0;

    cout << "Enter number for fibonacci series to trace: ";
    cin >> n;
    fibonacci(n, level);
    return 0;
}


// function
int fibonacci(int n, int level) {

    int x;
    for (int i = 0; i < level; i++) {
        cout << " ";
    }

    cout << "entering level " << level << endl;

    if (n == 0 || n == 1) {
        for (int i = 0; i < level; i++) {
            cout << " ";
        }
        
        cout << "exiting level " << level << endl;
        return n;
    
    } else {
        x = fibonacci(n - 2, level + 2) + fibonacci(n - 1, level + 1);

        for (int i = 0; i < level; i++) {
            cout << " ";
        }
        cout << "\tExiting level " << level << endl;
        return n;
    }
}
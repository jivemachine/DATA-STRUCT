// Jeremy Cobb
// Assignment 3
// 09-16-22
#include <string>
#include <iostream>
#include <stack>
using namespace std;

// balanced parenthesis function
bool balancedP(string input) {
    stack<char> BP; // declared stack

    for (int i = 0; i < input.length(); i++) {
        if (BP.empty()) {
            // if stack is empty push the current bracket
            BP.push(input[i]);
        }  else if ((BP.top() == '{' && input[i] == '}' 
                    || BP.top() == '[' && input[i] == ']' 
                    || BP.top() == '(' && input[i] == ')')) {
            // pop when we find balanced parenthesis
            BP.pop();
        } else {
            BP.push(input[i]);
        }
    }
    if (BP.empty()) {
        // if stack is empty return true
        return true;
    }
    return false;
}

int len(const char* ch)
{
    int len = 0;
    while (ch[len]) {
        ++len;
    } 
    return len;
}


bool balancedParenthesis(string input) {
    
    for(int i = 0; i < input.length(); i++)
    array[n];
}


// driver code
int main() {
    string input1 = "{[()]}"; // balanced test
    string input2 = "{[(}])"; // unbalanced test

    cout << "balanced test:" << endl;
    // function balanced string
    if(balancedP(input1)) {
        cout << "input 1 is balanced" << endl;
    } else {
        cout << "input 1 is not balanced" << endl;
    }

    // function unbalanced string
    if(balancedP(input2)) {
        cout << "input 2 is balanced" << endl;
    } else {
        cout << "input 2 is unbalanced" << endl;
    }
    return 0;
}

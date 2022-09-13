// Jeremy Cobb
// 09-09-22
// Assignent 2
#include <iostream>
using namespace std;

class queue {
    private:
        int front;
        int rear;
        int array[4];
    public:
        
        queue() {
            front = -1;
            rear = -1;

            for (int i = 0; i < 4; i++) {
                array[i] = 0;
            }
        }

        bool isEmpty() {
            if (front == -1 && rear == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull() {
            if (rear == 4) {
                return true;
            } else {
                return false;
            }
        }

        void ADD(int val) {

            if (isFull()) {
                cout << "Queue is full" << endl;
                return;
            } else if(isEmpty()) {
                rear = 0;
                front = 0;
                array[rear] = val;
            } else {
                rear++;
                array[rear] = val;
            }
        }

        int DELETE() {

            int m;

            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            } else if (front == rear) {
                m = array[front];
                rear = -1;
                front = -1;
                array[front] = 0;
                return m;
            } else {
                m = array[front];
                array[front] = 0;
                front++;
                return m;
            }

        }

        int COUNT() {
            return (rear - front + 1);
        }

        void SHOW() { 
            cout << "Displaying all values in queue..." << endl;
            for (int i = 0; i < 4; i++) {
                cout << array[i] << " ";
            }
        }

        void CLEAR() {
            for (int i = 0; i < 4; i++) {
                array[i] = 0;
            }
        }


};

int main() {

    queue q1;
    int input, value;


    do {
        cout << "Queue Data Entry Menu:" << endl;
        cout << "Would you like to..." << endl;
        cout << "1.) ADD (at the end of array) " << endl;
        cout << "2.) SHOW DATA (all elements, starting at first, ending at last) " << endl;
        cout << "3.) DELETE (and element from the front of queue)" << endl;
        cout << "4.) COUNT (total number of elements)" << endl;
        cout << "5.) CLEAR (initialize queue)" << endl;
        cout << "0.) EXIT" << endl;
        cout << "Please input selection: ";
        cin >> input;

    switch(input) {
        case 0:
        break;
        case 1:
            cout << "ADD element to queue: ";
            cin >> value;
            q1.ADD(value);
            cout << endl;
        break;
        case 2:
            cout << "Showing data...." << endl;
            q1.SHOW();
            cout << endl;
        break;
        case 3:
            cout << "Deleting item from front of queue...";
            q1.DELETE();
            cout << endl;
        break;
        case 4:
            cout << "Number of elements in queue: " << q1.COUNT() << endl;              
        break;
        case 5:
            cout << "Clearing queue...";
            q1.CLEAR();
            cout << endl;
        break;
        default:
            cout << "invalid operation, enter valid option" << endl;
        break;
    } 
    
    } while (input != 0);
        return 0;
}

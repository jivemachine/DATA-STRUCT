#include <iostream>
#include <time.h>
using namespace std;

void num_exchange(int& m, int& n) {
    int temp;
    temp = m;
    m = n;
    n = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        num_exchange(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

}

// main function to do heap sort

void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    
    for (int i = n - 1; i >= 0; i--) {

        num_exchange(arr[0], arr[i]);

        heapify(arr, i, 0);

    }

}

void printArray(int arr[], int n) {

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        cout << "\n";
    }
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                num_exchange(arr[j], arr[j + 1]);
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr2[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    struct timespec start, stop, start2, stop2, start3, start4, stop3, stop4; 

    cout << "UnSorted array: \n";
    printArray(arr, n);
    heapSort(arr, n);
    cout << "Heap Sorted array: \n";
    printArray(arr, n);
    cout << "Bubble Sorted Array: \n";
    bubbleSort(arr2, n);
    printArray(arr2, n);

    cout << "\nNow for larger arrays" << endl;

    int arr3[10000], arr4[50000], arr5[100000], arr6[500000];

    for (int i = 0; i < 10000; i++) {
        arr3[i] = i;
    }

    cout << "heap sort with ";

    int k = sizeof(arr3) / sizeof(arr3[0]);
     
    clock_gettime(CLOCK_REALTIME, &start); // time start
    heapSort(arr3, k);
    clock_gettime(CLOCK_REALTIME, &stop); // time stop

    // format time
    long seconds = stop.tv_sec - start.tv_sec;
    long nanoseconds = stop.tv_nsec - start.tv_nsec;
    
    double duration = seconds + nanoseconds*1e-9;
     
    // display time it takes  to run alg
    cout << k <<" elements: "<< duration <<" sec";

    
    cout << "\n\n";

    cout << "Bubble Sort ";

    clock_gettime(CLOCK_REALTIME, &start2); // time start
    bubbleSort(arr3, k); 
    clock_gettime(CLOCK_REALTIME, &stop2); // time stop


    // formatting time for bubble sort alg
    long seconds2 = stop2.tv_sec - start2.tv_sec;
    long nanoseconds2 = stop2.tv_nsec - start2.tv_nsec;
    double duration2 = seconds2 + nanoseconds2*1e-9;

    // display time it takes to run alg
    cout << k <<" elements: "<< duration2 <<" sec";

    cout << "\n";

    for (int i = 0; i < 50000; i++) {
        arr4[i] = i;
    }

    cout << "heap sort with ";

    k = sizeof(arr4) / sizeof(arr4[0]);
     
    

    clock_gettime(CLOCK_REALTIME, &start); // time start
    heapSort(arr4, k);
    clock_gettime(CLOCK_REALTIME, &stop); // time stop

    // format time
    long seconds3 = stop.tv_sec - start.tv_sec;
    long nanoseconds3 = stop.tv_nsec - start.tv_nsec;
    
    double duration3 = seconds3 + nanoseconds3*1e-9;
     
    // display time it takes  to run alg
    cout << k <<" elements: "<< duration3 <<" sec";

    
    cout << "\n\n";

    cout << "Bubble Sort ";

    clock_gettime(CLOCK_REALTIME, &start2); // time start
    bubbleSort(arr4, k); 
    clock_gettime(CLOCK_REALTIME, &stop2); // time stop


    // formatting time for bubble sort alg
    long seconds4 = stop2.tv_sec - start2.tv_sec;
    long nanoseconds4 = stop2.tv_nsec - start2.tv_nsec;
    double duration4 = seconds4 + nanoseconds4*1e-9;

    // display time it takes to run alg
    cout << k <<" elements: "<< duration4 <<" sec";

    cout << "\n";

    for (int i = 0; i < 100000; i++) {
        arr5[i] = i;
    }

    cout << "heap sort with " << endl;

    k = sizeof(arr5) / sizeof(arr5[0]);
     
    

    clock_gettime(CLOCK_REALTIME, &start); // time start
    heapSort(arr5, k);
    clock_gettime(CLOCK_REALTIME, &stop); // time stop

    // format time
    long seconds5 = stop.tv_sec - start.tv_sec;
    long nanoseconds5 = stop.tv_nsec - start.tv_nsec;
    
    double duration5 = seconds5 + nanoseconds5*1e-9;
     
    // display time it takes  to run alg
    cout << k <<" elements: "<< duration5 <<" sec";

    
    cout << "\n\n";

    cout << "Bubble Sort " << endl;


    clock_gettime(CLOCK_REALTIME, &start2); // time start
    bubbleSort(arr5, k); 
    clock_gettime(CLOCK_REALTIME, &stop2); // time stop


    // formatting time for bubble sort alg
    long seconds6 = stop2.tv_sec - start2.tv_sec;
    long nanoseconds6 = stop2.tv_nsec - start2.tv_nsec;
    double duration6 = seconds6 + nanoseconds6*1e-9;

    // display time it takes to run alg
    cout<< k <<" elements: "<< duration6 <<" sec";

    cout << "\n";

    for (int i = 0; i < 500000; i++) {
        arr6[i] = i;
    }

    cout << "heap sort with " << endl;

    k = sizeof(arr6) / sizeof(arr6[0]);
     
    

    clock_gettime(CLOCK_REALTIME, &start); // time start
    heapSort(arr6, k);
    clock_gettime(CLOCK_REALTIME, &stop); // time stop

    // format time
    seconds5 = stop.tv_sec - start.tv_sec;
    nanoseconds5 = stop.tv_nsec - start.tv_nsec;
    
    duration5 = seconds5 + nanoseconds5*1e-9;
     
    // display time it takes  to run alg
    cout << k << " elements: "<< duration5 <<" sec";

    
    cout << "\n\n";

    cout << "Bubble Sort " << endl;


    clock_gettime(CLOCK_REALTIME, &start2); // time start
    bubbleSort(arr6, k); 
    clock_gettime(CLOCK_REALTIME, &stop2); // time stop


    // formatting time for bubble sort alg
    seconds6 = stop2.tv_sec - start2.tv_sec;
    nanoseconds6 = stop2.tv_nsec - start2.tv_nsec;
    duration6 = seconds6 + nanoseconds6*1e-9;

    // display time it takes to run alg
    cout<< k <<" elements: "<< duration6 <<" sec";

    cout << "\n";
}
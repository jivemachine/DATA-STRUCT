// Jeremy Cobb
// Assignment 6
// 10-11-2022
#include<iostream>
#include <stdio.h>
// #include <ctime>
#include <time.h>
using namespace std;


void num_exchange(int& m, int& n) {
    int temp;
    temp = m;
    m = n;
    n = temp;
}
 
int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    num_exchange(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            num_exchange(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}

void BubbleSort(int arr[],int start,int end) {
    int temp=0; //variable to hold temporary data
    
    for(int i = start; i < end; i++) {
        
        for(int j = start; j < end - i; j++) {
            if (arr[j] > arr[j+1]) {
                num_exchange(arr[j], arr[j+1]);
            }
        }
    }
}


 
int main()
{
 
    int arr[] = { 8, 6, 7, 5, 3, 0 , 9 };
    int arr2[] = { 8, 6, 7, 5, 3, 0, 9 };
    int n = sizeof(arr) / sizeof(int); 
    struct timespec start, stop, start2, stop2, start3, start4, stop3, stop4; 

    cout << "Testing Sorting Algorithmns" << endl;

    cout << "Un-sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    quickSort(arr, 0, n - 1);
    
    cout << "Quick Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    cout << "Bubble Sort: ";
    BubbleSort(arr2, 0, n-1);
     for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    cout << "\n\n";

    cout << "Now With Larger Arrays" << endl << endl;
    
    int arr3[100000], arr4[100000], arr5[100000], arr6[100000];

    for(int i = 0, j = 100000; i < 100000; i++, j--) {
        arr3[i] = j;
    }

    int beginning = 5000;
    int end = 29999;

    cout << "QuickSort with" << endl;
     
    

    clock_gettime(CLOCK_REALTIME, &start); // time start
    quickSort(arr3, beginning, end);
    clock_gettime(CLOCK_REALTIME, &stop); // time stop

    // format time
    long seconds = stop.tv_sec - start.tv_sec;
    long nanoseconds = stop.tv_nsec - start.tv_nsec;
    
    double duration = seconds + nanoseconds*1e-9;
     
     // display time it takes  to run alg
    cout<<"Time taken for quick sort of "<< end - beginning + 1<<" elements: "<< duration <<" sec";

    
    cout << "\n\n";

    cout << "Bubble Sort " << endl;


    clock_gettime(CLOCK_REALTIME, &start2); // time start
    BubbleSort(arr4, beginning , end); 
    clock_gettime(CLOCK_REALTIME, &stop2); // time stop


    // formatting time for bubble sort alg
    long seconds2 = stop2.tv_sec - start2.tv_sec;
    long nanoseconds2 = stop2.tv_nsec - start2.tv_nsec;
    double duration2 = seconds2 + nanoseconds2*1e-9;

    // display time it takes to run alg
    cout<<"Time taken for bubble sort of "<< end - beginning + 1<<" elements: "<< duration2 <<" sec";

    cout << "\n";


    
    beginning = 10000;
    end = 99999;

    cout << "\n\n";

    cout << "QuickSort with even larger array" << endl;
     
    

    clock_gettime(CLOCK_REALTIME, &start3); // time start
    quickSort(arr5, beginning, end);
    clock_gettime(CLOCK_REALTIME, &stop3); // time stop

    // format time
    long seconds3 = stop3.tv_sec - start3.tv_sec;
    long nanoseconds3 = stop3.tv_nsec - start3.tv_nsec;
    
    double duration3 = seconds3 + nanoseconds3*1e-9;
     
     // display time it takes  to run alg
    cout<<"Time taken for quick sort of "<< end - beginning + 1<<" elements: "<< duration3 <<" sec";

    
    cout << "\n\n";

    cout << "Bubble Sort with even larger array" << endl;


    clock_gettime(CLOCK_REALTIME, &start4); // time start
    BubbleSort(arr6, beginning , end); 
    clock_gettime(CLOCK_REALTIME, &stop4); // time stop


    // formatting time for bubble sort alg
    long seconds4 = stop4.tv_sec - start4.tv_sec;
    long nanoseconds4 = stop4.tv_nsec - start4.tv_nsec;
    double duration4 = seconds4 + nanoseconds4*1e-9;

    // display time it takes to run alg
    cout<<"Time taken for bubble sort of "<< end - beginning + 1<<" elements: "<< duration4 <<" sec";

    cout << "\n\n";

    return 0;
}
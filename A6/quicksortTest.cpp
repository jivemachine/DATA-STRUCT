#include <iostream>
using namespace std;


// int main() {

//     int array[8] = { 2, 6, 5, 3, 8, 7, 1, 0 };

//     int pivot, itemFromLeft, ItemFromRight;

//     // move pivot to the end of array & trade places
//     pivot = array[3];
//     cout << pivot << endl;
//     cout << array[3] << endl;

//     // delete 3 (index 3)
//     for (int i = 3; i < 7; ++i) {
//         array[i] = array[i + 1];
//     }

//     int getArrayLength = sizeof(array) / sizeof(int);

//     for (int j = 0; j < getArrayLength; j++) {
//         cout << array[j] << endl;
//     }


// }

// // prototypes
// void quicksort(int a[], int b, int c);
// void partitions(int a[], int b, int c);

// int main()
// {
 
//     int arr[] = { 9, 3, 4, 2, 1, 8 };
//     int n = 6;
 
//     quicksort(arr, 0, n - 1);
 
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
 
//     return 0;
// }

// //functions
// void quicksort(int a[], int b, int c) {
    
//     // sorting is done
//     if (b >= c) {
//         return;
//     }
        
//     int partition_points = partitions(a, b, c);
//     // sort left
//     quicksort(a, partition_points - 1, c);
//     // sort right
//     quicksort(a, b, partition_points + 1);
// }

// void partitions(int a[], int b, int c) {

//     int pivot = a[b];

//     int j = 0;
//     for (int i = b + 1; i <= c; i++) {
//         if (a[i] <= pivot) {
//             j++;
//         }
//     }

//     // moving pivot to end of array
//     int pivotI = b + j;
//     // swap function
//     swap(a[pivotI], a[b]);

//     // sorting left and right of pivots index
//     int i = b, l = c;

//     while(i < pivotI && l > pivotI ) {
//         while (a[i] <= pivot) {
//             i++;
//         }

//         while (a[l] > pivot) {
//             l--;
//         }

//         if (i <= pivotI && l > pivotI) {
//             swap(a[i++], a[l--])
//         }
//     }

//     return pivotI;
// }


// // // C++ Implementation of the Quick Sort Algorithm.
// // #include <iostream>
// // using namespace std;
 
// // int partition(int arr[], int start, int end)
// // {
 
// //     int pivot = arr[start];
 
// //     int count = 0;
// //     for (int i = start + 1; i <= end; i++) {
// //         if (arr[i] <= pivot)
// //             count++;
// //     }
 
// //     // Giving pivot element its correct position
// //     int pivotIndex = start + count;
// //     swap(arr[pivotIndex], arr[start]);
 
// //     // Sorting left and right parts of the pivot element
// //     int i = start, j = end;
 
// //     while (i < pivotIndex && j > pivotIndex) {
 
// //         while (arr[i] <= pivot) {
// //             i++;
// //         }
 
// //         while (arr[j] > pivot) {
// //             j--;
// //         }
 
// //         if (i < pivotIndex && j > pivotIndex) {
// //             swap(arr[i++], arr[j--]);
// //         }
// //     }
 
// //     return pivotIndex;
// // }
 
// // void quickSort(int arr[], int start, int end)
// // {
 
// //     // base case
// //     if (start >= end)
// //         return;
 
// //     // partitioning the array
// //     int p = partition(arr, start, end);
 
// //     // Sorting the left part
// //     quickSort(arr, start, p - 1);
 
// //     // Sorting the right part
// //     quickSort(arr, p + 1, end);
// // }
 
// // int main()
// // {
 
// //     int arr[] = { 9, 3, 4, 2, 1, 8 };
// //     int n = 6;
 
// //     quickSort(arr, 0, n - 1);
 
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
 
// //     return 0;
// // }

#include <iostream>
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


 
int main()
{
 
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
    quickSort(arr, 0, n - 1);
    
    cout << "Quicksorted: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}
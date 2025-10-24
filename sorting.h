#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void display(const vector<int>& arr) {
    for (int num : arr) {
        cout << setw(5) << num; // setw(5) is like %5d
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool sorted;
    for (int j = 1; j <= n - 1; j++) {
        display(arr);
    sorted = true;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
        if (sorted) {
            break;
        }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        display(arr);
     
      }
    }


  void selectionSort(vector<int>& arr) {
    int n = arr.size();
    int i, j, mi;
    
display(arr);
    for (i = 0; i < n - 1; i++) {
        mi = i; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[mi]) {
                mi = j; 
            }
        }
        
        if (mi != i) {
            swap(arr[i], arr[mi]);
        }
        display(arr);
      }
    }


    int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void cocktailShakerSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        display(arr); 

        if (!swapped) {
            break;
        }

        end--;
        swapped = false;
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        display(arr); 
        start++;
    }
}
#endif
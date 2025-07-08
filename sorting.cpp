#include <bits/stdc++.h>
using namespace std;


//======================================= SELECTION SORT ===================================================

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap only if needed
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
//==================================== RECURSIVE SELECTION SORT ========================================

void RECselectionSort(int arr[], int n, int index = 0) {
    if (index == n - 1) return;  // Base case: array sorted

    // Find the minimum element in the remaining unsorted part
    int minIndex = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the found minimum element with the first element
    swap(arr[index], arr[minIndex]);

    // Recursively call selection sort for the remaining part
    RECselectionSort(arr, n, index + 1);
}
//============================================== BUBBLE SORT ===============================================

void bubbleSort(int arr[], int n) {
    bool swapped;  // To optimize unnecessary iterations

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps in the current pass, array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// ======================================= Recursive Bubble Sort ==========================================

void RECbubbleSort(int arr[], int n) {
    // Base case: When size reduces to 1, return
    if (n == 1) return;

    // One pass of bubble sort (pushes largest to end)
    bool swapped = false;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }

    // If no swaps, array is already sorted
    if (!swapped) return;

    // Recursively call for the remaining part
    RECbubbleSort(arr, n - 1);
}
//============================================== INSERTION SORT ==========================================


void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];               // ✅ Store the current element
        int prev = i - 1;

        // Shift elements greater than curr to the right
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        
        arr[prev + 1] = curr;            // ✅ Place curr at the correct position
    }
}
//================================================ MERGE SORT =================================================

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;  
    int i = st, j = mid + 1;  

    // Merge two halves into temp
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    // Add remaining elements 
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= end) temp.push_back(arr[j++]);

    // Copy temp back to the original array
    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }
} 

void mergesort(vector<int> &arr, int st, int end) {
    if (st >= end) return;  // Base case
    int mid = st + (end - st) / 2;

    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, st, mid, end);
}
//============================================= QuickSort ==================================================

// Function to perform partitioning
int partition(vector<int> &arr, int st, int end) {
    int pivot = arr[end];         // Select the last element as pivot
    int idx = st - 1;             // Index for smaller elements

    for (int i = st; i < end; i++) {
        if (arr[i] <= pivot) {    // Place smaller elements before pivot
            idx++;
            swap(arr[i], arr[idx]);
        }
    }

    idx++; // Move idx to the position of the pivot element 
    
    swap(arr[idx], arr[end]); // Place pivot in the correct position
    return idx ;               // Return the pivot index
}

// QuickSort function
void quickSort(vector<int> &arr, int st, int end) {
    if (st >= end) return;        // Base case: single or no element

    int pivIdx = partition(arr, st, end);   // Partition the array

    // Recursive calls for left and right halves
    quickSort(arr, st, pivIdx - 1);         // Sort left half
    quickSort(arr, pivIdx + 1, end);        // Sort right half
}

// ====================================================MAIN FUNCTION =====================================

int main() {
    vector<int> arr= {9, 5, 2, 3, 7, 22, 34, 56, 87, 67, 4};
    

    mergesort(arr,0,arr.size()-1);

    cout << "Sorted array: "<<" ";

    for(int val: arr){
        cout << val << " ";
    }
  
    
    cout << endl;

    return 0;
}





#include <iostream>
#include "Problem2.h"

// Forward declaration matching the displayArray definition below
void displayArr(int arr[], int size);

int main() {
    // create the array in the problem
    int arr[15] = {1, 20, 23, 45, 50, 84, 16, 39,
                   40, 69, 38, 67, 19, 58, 34};

    // get the number of elements
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array:\n";
    displayArr(arr, n);

    // perform quick sort
    quickSort(arr, 0, n - 1);

    std::cout << "\nSorted Array:\n";
    displayArr(arr, n);

    return 0;
}

void displayArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
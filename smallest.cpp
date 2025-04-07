#include <iostream>
using namespace std;

// Function to find the smallest number in the array
int findSmallest(int arr[], int size) {
    // Step 2: Initialize smallest to the first element
    int smallest = arr[0];

    // Step 3: Iterate through the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Step 4: Return the smallest number found
    return smallest;
}

int main() {
    int arr[] = {34, 12, 99, 5, 72};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    // Calling the function and printing the result
    cout << "The smallest number in the array is: " << findSmallest(arr, size) << endl;

    return 0;
}


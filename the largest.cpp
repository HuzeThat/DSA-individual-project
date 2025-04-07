#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;
void findLargestElements(const vector<int>& arr, int&
secondLargest, int& thirdLargest) {
    // Initialize largest, secondLargest, and thirdLargest to the
minimum possible integer value
    int largest = INT_MIN;
    secondLargest = INT_MIN;
    thirdLargest = INT_MIN;
    // Iterate through the array
    for (int element : arr) {
        // Update largest, secondLargest, and thirdLargest accordingly
        if (element > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = element;
        } 
        else if (element > secondLargest && element != largest) {
            thirdLargest = secondLargest;
            secondLargest = element;
        } 
        else if (element > thirdLargest && element != secondLargest) {
            thirdLargest = element;
        }
    }
    // In case no valid second or third largest element is found, we
should return INT_MIN
    if (secondLargest == INT_MIN) {
        cout << "Second largest element does not exist." << endl;
    }
    if (thirdLargest == INT_MIN) {
        cout << "Third largest element does not exist." << endl;
    }
}
int main() {
    // Example array
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    int secondLargest, thirdLargest;
    findLargestElements(arr, secondLargest, thirdLargest);
    // Output the results
    cout << "Second largest element: " << secondLargest << endl;
    cout << "Third largest element
: " << thirdLargest << endl;
    return 0;
}

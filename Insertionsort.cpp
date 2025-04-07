#include <iostream>
#include <vector>
#include <ctime>
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    clock_t start = clock();
    insertionSort(arr);
    clock_t end = clock();
    
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Insertion Sort Time: " << time_taken << " second
s\n";
    
    return 0;
}


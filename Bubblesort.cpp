#include <iostream>
#include <vector>
#include <ctime>
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    clock_t start = clock();
    bubbleSort(arr);
    clock_t end = clock();
    
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Bubble Sort Time: " << time_taken << " seconds\n
";
    
    return 0}

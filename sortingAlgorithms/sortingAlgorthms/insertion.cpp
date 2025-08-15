#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr, int n, int s) {
    if (s == n) return; 

    int key = arr[s];
    int j = s - 1;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;

    insertionSort(arr, n, s + 1);
}

int main() {
    std::vector<int> arr = {29, 10, 37, 14, 4, 1, 23};

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    insertionSort(arr, arr.size(), 1); 
    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}

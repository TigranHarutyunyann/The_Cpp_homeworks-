#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr, int n, int s) { 
    if (s == n - 1) return; 

    int minIndex = s;
    for (int i = s + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int tmp = arr[s];
    arr[s] = arr[minIndex];
    arr[minIndex] = tmp;

    selectionSort(arr, n, s + 1);
}

int main() {
    std::vector<int> arr = {29, 10, 37, 14, 4, 1, 23};

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    selectionSort(arr, arr.size(), 0);

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}


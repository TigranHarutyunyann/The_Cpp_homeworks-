#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low]; 
    int left = low + 1;
    int right = high;

    while (true) {
        while (left <= right && arr[left] <= pivot) {
            left++;
        }
        while (left <= right && arr[right] > pivot) {
            right--;
        }
        if (left > right) break;
        std::swap(arr[left], arr[right]);
    }

    std::swap(arr[low], arr[right]); 
    return right;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low >= high) return; 

    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);  
    quickSort(arr, pi + 1, high); 
}

int main() {
    std::vector<int> arr = {29, 10, 37, 14, 4, 1, 23};

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    quickSort(arr, 0, arr.size() - 1);

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}


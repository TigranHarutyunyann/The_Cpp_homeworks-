#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr, int n) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }

    bubbleSort(arr, n - 1);
}

int main() {
    std::vector<int> arr = {29, 10, 37, 14, 4, 1, 23};

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    bubbleSort(arr, arr.size());

    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}

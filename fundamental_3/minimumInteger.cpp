#include <iostream>
#include <vector>
#include <algorithm>

int minimumInteger(int size, std::vector<int>& arr) {
    int sum = 0;
    for (auto num : arr) {
        sum += num;
    }

    std::sort(arr.begin(), arr.end());

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (size * (*it) >= sum) {
            return *it;
        }
    }

    return arr.back();
}

int main() {
    int size1 = 3;
    std::vector<int> arr1 = {1, 3, 2};
    std::cout << minimumInteger(size1, arr1) << std::endl;  

    int size2 = 1;
    std::vector<int> arr2 = {3};
    std::cout << minimumInteger(size2, arr2) << std::endl;  

    return 0;
}

#include <iostream>
#include <vector>

int divisibleBy4(const std::vector<int>& arr) {
    int count = 0;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        for (auto jt = arr.begin()+1; jt != arr.end(); jt++) {
            if ((*it + *jt) % 4 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    std::vector<int> arr1 = {2, 2, 1, 7, 5};
    std::vector<int> arr2 = {2, 2, 3, 5, 6};

    std::cout << divisibleBy4(arr1) << std::endl; // 3
    std::cout << divisibleBy4(arr2) << std::endl; // 4

    return 0;
}

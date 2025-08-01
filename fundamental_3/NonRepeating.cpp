#include <iostream>
#include <vector>

void checkNonRepeating(std::vector<int>& arr){
    for (auto it = arr.begin(); it < arr.end(); it++) {
        int count = 0;
        for (auto it_sec = arr.begin(); it_sec < arr.end(); it_sec++) {
            if (*it == *it_sec) {
                count++;
            }
        }
        if (count == 1) {
            std::cout << *it << std::endl;
            return; // գտել ենք, կարող ենք դուրս գալ
        }
    }
    // Եթե ոչ մի տարր չգտնվեց
    std::cout << 0 << std::endl;
}

int main() {
    std::vector<int> arr1 = {-1, 2, -1, 3, 2};
    std::vector<int> arr2 = {1, 1, 1, 1, 1};

    checkNonRepeating(arr1); // Output: 3
    checkNonRepeating(arr2); // Output: 0

    return 0;
}


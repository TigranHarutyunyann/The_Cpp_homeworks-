#include <iostream>
#include <vector>
#include <climits>

std::vector<int> findLeastGreater(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result(n, -1); // նախապես բոլոր տարրերը -1

    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        int min_greater = INT_MAX;
        bool found = false;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > curr && arr[j] < min_greater) {
                min_greater = arr[j];
                found = true;
            }
        }

        if (found)
            result[i] = min_greater;
    }

    return result;
}

int main() {
    std::vector<int> arr = {8, 58, 71, 18, 31, 32, 63, 92, 43, 3, 91, 93, 25, 80, 28};
    std::vector<int> res = findLeastGreater(arr);

    for (int val : res) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}

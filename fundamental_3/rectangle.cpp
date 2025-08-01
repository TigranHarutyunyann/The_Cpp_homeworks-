#include <iostream>
#include <vector>

int countTriangles(std::vector<int>& arr) {
    for (auto it1 = arr.begin(); it1 != arr.end(); ++it1) {
        for (auto it2 = it1 + 1; it2 != arr.end(); ++it2) {
            if (*it2 < *it1) {
                std::iter_swap(it1, it2);
            }
        }
    }

    int count = 0;
    for (auto i = arr.begin(); i < arr.end() - 2; ++i) {
        for (auto j = i + 1; j < arr.end() - 1; ++j) {
            for (auto k = j + 1; k < arr.end(); ++k) {
                if (*i + *j > *k) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    std::vector<int> arr = {5, 4, 3, 1, 2};
    std::cout << countTriangles(arr);  // Պետք է տպի 3
    return 0;
}

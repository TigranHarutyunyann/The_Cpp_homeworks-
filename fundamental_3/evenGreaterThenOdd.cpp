#include <iostream>
#include <vector>

std::vector<int> rearrange(std::vector<int>& arr) {
   // int n = arr.size();
    int index=0;
    for (auto it = arr.begin()+1; it != arr.end() ; it++, index++) {
        if ((*(it + 1)) % 2 == 0) { 
            if (*it < *(it-1)) {
                std::swap(*it, *(it-1));
            }
        } else { 
            if (*it > *(it-1)) {
                std::swap(*it,*(it-1));
            }
        }
    }

    return arr;
}

int main() {
    std::vector<int> arr = {1, 2, 2, 1};
    std::vector<int> res = rearrange(arr);

    for (int v : res) {
        std::cout << v << " ";
    }
    return 0;
}

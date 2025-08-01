#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr={-1, 1, 2, 3, 5, 7};
    
    int index = 0;
    bool found = false;
    for (auto it = arr.begin(); it != arr.end(); ++it, ++index) {
        if (*it == index) {
            std::cout << "Output: " << *it << std::endl;
            found = true;
            break;  // Սկզբի համար, դադարեցնել ցիկլը
        }
    }

    if (!found) {
        std::cout << "Output: " << -1 << std::endl;
    }
    return 0;
}

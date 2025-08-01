#include <iostream>
#include <vector>

bool check4Sum(std::vector<int>& arr, int target) {
    for (auto i = arr.begin(); i != arr.end() - 3; ++i)
        for (auto j = i + 1; j != arr.end() - 2; ++j)
            for (auto k = j + 1; k != arr.end() - 1; ++k)
                for (auto l = k + 1; l != arr.end(); ++l)
                    if (*i + *j + *k + *l == target)
                        return true;
    return false;
}

int main() {
    std::vector<int> arr;
    int size, num, target;
    
    std::cout << "Enter the size for arr: ";
    std::cin >> size;
    
    std::cout << "Enter the arguments in vector: ";
    for(int i = 0; i < size; i++){
        std::cin >> num;
        arr.push_back(num);
    }
    
    std::cout << "Enter the target: ";
    std::cin >> target;
    
    std::cout << (check4Sum(arr, target) ? "True" : "False") << std::endl;
    return 0;
}


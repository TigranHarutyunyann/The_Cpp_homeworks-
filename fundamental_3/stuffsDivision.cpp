#include <iostream>
#include <vector>

bool canDistribute(const std::vector<int>& arr) {
    int n = arr.size();
    int allSum = 0;
    for (int val : arr) {
        allSum += val;
    }
    
    int sum = n * (n + 1) / 2;
    bool res= (sum==allSum)? true : false;
    return res;
}

int main() {
    std::vector<int> arr1 = {7, 4, 1, 1, 2};
    std::vector<int> arr2 = {1, 1, 1, 1, 1};

    std::cout << (canDistribute(arr1) ? "true" : "false") << std::endl; 
    std::cout << (canDistribute(arr2) ? "true" : "false") << std::endl; 

    return 0;
:x

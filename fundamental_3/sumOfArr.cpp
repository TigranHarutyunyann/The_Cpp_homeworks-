#include <iostream>
#include <vector>

int arrayToNumber(const std::vector<int>& arr) {
    int num = 0;
    for (int digit : arr) {
        num = num * 10 + digit;
    }
    return num;
}

int main() {

    std::vector<int> arr1 = {9, 5, 4, 9};
    std::vector<int> arr2 = {2, 1, 4, 5};

    int num1 = arrayToNumber(arr1);
    int num2 = arrayToNumber(arr2);

    int sum = num1 + num2;

    std::cout << "Sum: " << sum << std::endl;
    

    return 0;
}


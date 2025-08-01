#include <iostream>
#include <vector>
#include <string>

int destroyedWords(std::vector<std::string>& arr) {
    std::vector<std::string> temp;

    for (const auto& word : arr) {
        if (!temp.empty() && temp.back() == word) {
            // Վիրավորում՝ ջնջում ենք վերջինը
            temp.pop_back();
        } else {
            // Ավելացնում ենք նոր բառը
            temp.push_back(word);
        }
    }

    return temp.size();
}

int main() {
    std::vector<std::string> arr1 = {"ab", "aa", "aa", "bcd", "ab"};
    std::vector<std::string> arr2 = {"tom", "jerry", "jerry", "tom"};

    std::cout << destroyedWords(arr1) << std::endl; 
    std::cout << destroyedWords(arr2) << std::endl;

    return 0;
}

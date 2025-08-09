#include <iostream>
#include <vector>
#include <string>


void palindrome(std::vector<char> letters, std::vector<char>::iterator st, std::vector<char>::iterator fi){
                    
    if(st>=fi) { std::cout << "It's palindrome"; return;}
    
    if(*st!=*fi){
        std::cout << "It's not palindrome";
        return;
    }
    palindrome(letters, st+1, fi-1);
}

int main() {
    std::vector<char> letters;
    std::string let;
    std::cin >> let;

    for (char c : let) {
        letters.push_back(c);
    }
    
    palindrome(letters, letters.begin(), letters.end()-1);
    std::cout << std::endl;
}

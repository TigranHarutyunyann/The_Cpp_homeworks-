#include <iostream>

void toBinary(int num, char binary[], int size) {
    
    if (num == 0)  std::cout << "0" << std::endl;
    
    int i=0;
    while (num > 0) {
        binary[i]= (num & 1) ? '1' : '0';
        num >>= 1;
        i++;
    }

    for (int j = i - 1; j >= 0; --j) {
        std::cout << binary[j];
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    const int size=33;
    char binary[size];

    if (num <= 0) {
        std::cout << "Enter a positive number։" << std::endl;
    } else {
        std::cout << "Convert to binary: ";
        toBinary(num, binary, size);
    }

    return 0;
}

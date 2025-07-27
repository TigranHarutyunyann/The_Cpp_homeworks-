#include <iostream>

void toHex(int num, char hex[], int size) {
    if (num == 0) {
        std::cout << "0" << std::endl;
        return;
    }

    const char hexDigits[] = "0123456789ABCDEF";
    int i = 0;

    while (num > 0 && i < size - 1) {
        int last4bits = num & 0xF;        
        hex[i++] = hexDigits[last4bits]; 
        num >>= 4;                        
    }

    for (int j = i - 1; j >= 0; --j) {
        std::cout << hex[j];
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    const int size = 9; 
    char hex[size];

    if (num <= 0) {
        std::cout << "Enter a positive number։" << std::endl;
    } else {
        std::cout << "Convert to hexadecimal: ";
        toHex(num, hex, size);
    }
    return 0;
}

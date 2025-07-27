#include <iostream>

void swap(int* a, int* b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main()
{
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    
    swap(&a, &b);
    
    std::cout << std::endl;
    std::cout << "The numbers after swap"<< std::endl;
    std::cout << "The first number is: " << a << std::endl;
    std::cout << "The second number is: " << b << std::endl;

    return 0;
}

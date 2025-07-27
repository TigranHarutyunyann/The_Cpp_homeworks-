#include <iostream>

int add(int *x, int *y) {
    return *x + *y;
}

int main()
{
    int a, b;
    std::cout << "Enter two numbers to add:: ";
    std::cin >> a >> b;
    int result = add(&a, &b);
    std::cout<<"Result is: " << result << std::endl;

    return 0;
}

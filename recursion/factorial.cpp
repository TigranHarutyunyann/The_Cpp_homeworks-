#include <iostream>

int factorial(int num) {
    if(num==1) {
		return 1;
	}
	return num*factorial(num-1);
}

int main() {
	std::cout << "Enter a number: " << std::endl;
	int num;
   std::cin >> num;
	std::cout << factorial(num);
	return 0;
}

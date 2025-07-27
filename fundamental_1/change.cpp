#include <iostream>

int change(int number);

int main() {
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
   	int result = change(number);
	std::cout << "Result is: " << result << std::endl;	
	return 0;
}

int change(int number) {
	int numChnage=0;

	while(number!=0) {
	int digit=number%10;
	numChnage=10*numChnage+digit;
	number/=10;
	}
	return numChnage;
}

#include <iostream>

int sum(int num) {
	int sum=0;
	while(num!=0) {
	int digit=num % 10;
	num/=10;
	sum+=digit;
	}
    return sum;
}

int main() {
	std::cout << "Enter a number: ";
	int num;
	std::cin >> num;
       std::cout << "Sum of digits: " << sum(num) << std::endl;
	return 0;
}

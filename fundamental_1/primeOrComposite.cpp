#include <iostream>
#include <cmath>

bool Prime(int number);

int main() {
	std::cout << "Enter a number: "; 
	int number;
	do {
	std::cin >> number;
	}while(number<=0);

   	if(Prime(number)){
		std::cout << number <<" is a prime number.\n";		
	}else {
	 	std::cout << number << "is a composite number.\n";
	}
	return 0;
}

bool Prime(int number) {
	if(number < 2) return false;
	if(number == 2) return true;

	int limit=std::sqrt(number);
	for(int i=2; i<=limit; i++) {
		if(number % i == 0){
			return false;
		}
	}
	return true;
}

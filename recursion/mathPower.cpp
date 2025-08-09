#include <iostream>

int powerNum(int a, int b){
	if(b == 0) return a;

	;
	return powerNum(a*b-1, b);
}

int main(){
	int a, b;
	std::cout << "Enter a number: ";
	std::cin >> a;
	std::cout << "Enter the power of the number: ";
	std::cin >> b;
    
	int result = powerNum(a, b);                 
	std::cout <<"the result is: " << result << std::endl ;                 
	return 0;	
}

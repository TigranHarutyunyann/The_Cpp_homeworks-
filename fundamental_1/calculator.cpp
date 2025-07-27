#include <iostream>
    
int calculation(int a, int b, char op) {
		switch(op) {
			case '+':
   				 return a + b;
				 break;
			case '-':
				 return a - b;
				 break;
			case '*':
				 return a * b;
				 break;
			case '/':
				   return a / b; 
			default:
				   return 0;
	} 
}

int main(){
	int num1, num2;
	char oper;
	std::cout << "Enter two numbers and an operation, (e.g. 5 3 *): \n";
	std::cin >> num1 >> num2 >> oper;
	int result = calculation(num1, num2, oper);
	std::cout << "Result is: "<< result << std::endl; 
	return 0;
}

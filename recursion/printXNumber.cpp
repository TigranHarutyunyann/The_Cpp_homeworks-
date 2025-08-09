#include <iostream>

void printNum(int num){
	if(num == 0)
		return;
	printNum(num-1);
	std::cout << num << " ";
}

int main(){
	int num=0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	printNum(num);
	std::cout << std::endl;
	return 0;	
}

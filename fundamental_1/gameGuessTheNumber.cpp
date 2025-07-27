#include <iostream>
#include <ctime>
#include <cstdlib>

void guessRandomNum(int randNum, int enterNum, int count){
	do{
		std::cout << "Enter a number: ";
		std::cin >> enterNum;
		if(enterNum<randNum){
			std::cout << "Too low. Try again.\n";
		}else if(enterNum>randNum){
			std::cout << "Too high. Try again.\n";
		}
		count++;
	}while(enterNum!=randNum);
	std::cout << std::endl;
	std::cout << "It took "<< count<<" tries to guess you.\n" << randNum << " = " << enterNum << std::endl;
}

int main() {
    srand(time(0));
    int randNum=(rand() % 100)+1;
	int enterNum=0;
	int count=0;
    guessRandomNum(randNum, enterNum, count);
	return 0;
}

#include <iostream>

int main() {
	int size=100;
	char *word1=new char[size];
	char *word2=new char[size];
	
	
	std::cout << "Enter first word: ";
	std::cin >> word1;

	std::cout << "Enter second word: ";
	std::cin >> word2;
	
	char *p1=word1;
	char *p2=word2;
	

	while(*p1!='\0') {
	    *p1++;
	}
	
	while (*p2 != '\0') {
		*p1 = *p2;
	    p1++;
		p2++;
	}
	
	std::cout <<"The result is: "<< word1 << std::endl;
	
    delete[] word1;
    delete[] word2;
	return 0;
}

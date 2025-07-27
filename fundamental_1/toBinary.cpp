#include <iostream>

void convertinToBinary(int number, char binary[], int N) {
		
	int divNum=number, remNum=0;
	int index=N;

    if(number > 0) { 
	    while(divNum!=0){
	        remNum=divNum % 2;
		    binary[--index]= remNum + '0';
		    divNum/=2;
	    }            
    } else if(number == 0) {
        binary[--index] = '0';
    } else {
        std::cout <<"Error. Input positive number.";
    }
	for(int j=index; j<N; j++) {
		std::cout << binary[j];
		}
		std::cout << std::endl;
	}

int main() {
	constexpr int N = 33;
	char binary[N];
	int decNum=0;

	std::cout << "Enter a number: ";
    std::cin >> decNum;

	convertinToBinary(decNum, binary, N); 

	return 0;
}

#include <iostream>

int main() {
	int N;
	std::cout << "Enter a size: ";
	std::cin >> N;
	
	int* arr=new int[N];
	int* ptr=arr;
	
	std::cout << "Enter the elements: ";
	for(int i=0; i<N; i++){
	    std::cin >> *(ptr+i);
	}
	
	int sum=0;
	for(int i=0; i<N; i++){
	    if(*(ptr+i)%3 == 0 || *(ptr+i)%5 == 0 ){
	        sum+=*(ptr+i);
	    }
	}
	std::cout << "The sum is: " << sum << std::endl;
	
	delete[] arr;
	return 0;
}

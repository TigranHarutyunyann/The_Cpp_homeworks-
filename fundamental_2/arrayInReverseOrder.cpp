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
	
	for(int i=N-1; i>=0; i--){
	    std::cout << *(ptr+i) << " ";
	}
	std::cout << std::endl;
       delete[] arr;
	return 0;
}

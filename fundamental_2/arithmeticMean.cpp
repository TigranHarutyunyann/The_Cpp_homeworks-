#include <iostream>

int main() {
	int size=0;
	std::cout << "Enter the size: ";
	std::cin >> size;

	int* arr=new int[size];
	int* p=arr;
	
	std::cout << "Enter the elements: ";
	for(int i=0; i<size; i++){
        std::cin >> *(p+i);
	}
	
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=*(p+i);
    }
    
    std::cout << "The sum is: " << sum << std::endl;
	
    delete[] arr;
	return 0;
}

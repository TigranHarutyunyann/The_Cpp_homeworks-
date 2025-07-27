#include <iostream>

int main() {
	int N;
	std::cout << "Enter a arr size: ";
	std::cin >> N;
	
	int* arr = new int[N];
	int* ptr = arr;
	
    for(int i=0; i<N; i++){
        *ptr=i+1;
        ptr++;
    } 
    
    ptr=arr;
    int sum=0;
	for(int i=0; i<N; i++){
		sum+=*(ptr+i);
	}
	
    ptr=arr;
    for(int i=0; i<N; i++) {
        std::cout << *(ptr+i) << " ";
    }
    std::cout << std::endl;
    
	std::cout<<"Sum is: " << sum << std::endl;
	delete[] arr;
	return 0;
}

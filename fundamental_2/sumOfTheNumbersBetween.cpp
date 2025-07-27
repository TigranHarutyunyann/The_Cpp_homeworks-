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
	
	int a=0, b=0;
	std::cout << "The numbers between [A:B] elements`" << std::endl;
	std::cout << "Enter the number A: ";
    std::cin >> a;
    std::cout << "Enter the number B: ";
    std::cin >> b;
	
	int sum=0;
	for(int i=a; i<=b; i++){
	    sum+=*(ptr+i);
	    if(i==b){
	        std::cout << *(ptr+i) << " = ";
	    }else {
	    std::cout << *(ptr+i) << " + ";
	    }
	}
	std::cout << sum <<std::endl;
	delete[] arr;
	return 0;
}

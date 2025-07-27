#include <iostream>

void negativToleft(int* arr,int* arr_result, int N){
    int j=0;
	for(int i=0; i<N; i++) {
        if(arr[i] < 0) {
	       arr_result[j]=arr[i];
	       j++;
	   }	
	}
	
	for(int i=0; i<N; i++) {
        if(arr[i] >= 0) {
	       arr_result[j]=arr[i];
	       j++;
	   }	
	}
}

int main() {
	int N;
	do{
	std::cout << "Enter a arr size: ";
	std::cin >> N;
	}while(N>=100 || N <=1);
	int* arr = new int[N];
	int* arr_result = new int[N];
	std::cout << "Enter the elements: ";
	for(int i=0; i<N; i++){
		std::cin >> arr[i];
	}

    negativToleft(arr, arr_result, N);
	
	std::cout << "Result is: ";
	for(int i=0; i<N; i++) {
        std::cout << arr_result[i] << " "; 
	}
	std::cout << std::endl;
	
	delete[] arr;
    delete[] arr_result;
	return 0;
}

#include <iostream>

void reverseSegment(int arr[], int start, int end){
    start--;
    end--;

    while(start < end) {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        
        start++;
        end--;
    }
    
}

int main() {
	int size, A, B, C, D;
	std::cout << "Enter the size array: ";
	std::cin >> size;
	std::cout << "Enter the reverse segments: ";
	std::cin >> A >> B >> C >> D;
	
	int* arr= new int[size];
	int* p=arr;
	
	for(int i=0; i<size; i++) {
	    *(p+i)=i+1;
	}
	p=arr;
	
    reverseSegment(arr, A, B);
    reverseSegment(arr, C, D);
		    

    std::cout << "The result: ";
	for(int i=0; i<size; i++) {
	    std::cout << *(p+i) << " ";
	}
    std::cout << std::endl;
	
	delete[] arr;
	return 0;
}

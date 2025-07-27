#include <iostream>

int main() {
	int rows, colums;
	std::cout << "Enter the row: ";
	std::cin >> rows;
    std::cout << "Enter the colum: ";
	std::cin >> colums;	
	
	int** matrix =new int*[rows];
	
	
	for(int i=0; i<rows; i++){
	    matrix[i]=new int[colums];
	}
	
	int count=0;
	for(int i=0; i<rows; i++){
	    for(int j=0; j<colums; j++){
	        
	        matrix[i][j]=(i+1)*(2+j);
	        
	        if(matrix[i][j]%2==0) {
	            count++;
	        }
	    }
	}
	
	for(int i=0; i<rows; i++){
	    for(int j=0; j<colums; j++){
	        std::cout << matrix[i][j] << " ";
	    }
	    std::cout << std::endl;
	}
	std::cout << "Count the even: " << count << std::endl;
	

	return 0;
}

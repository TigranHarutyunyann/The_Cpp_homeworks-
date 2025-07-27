#include <iostream>

void mainDiagonal(int** matrix, int* arr, int* p, int rows, int colums){
    int index=0;
	for(int i=0; i<rows; i++){
	    for(int j=0; j<colums; j++){
	        
	        matrix[i][j]=(j+i);
	        if(i==j){
	            *(p+index)=matrix[i][j];
	            index++;
	        }
	    }
	}
	p=arr;
}

void printMatrix(int** matrix, int rows, int colums){
    for(int i=0; i<rows; i++){
	    for(int j=0; j<colums; j++){
	        std::cout << matrix[i][j] << " ";
	    }
	    std::cout << std::endl;
	}
}

int main() {
	int size=0;
	std::cout << "Enter the matrix 2D size: ";
	std::cin >> size;
    int rows=size, colums=size;
	
	int** matrix =new int*[rows];
	int* arr=new int[size];
	int* p=arr;
	
	for(int i=0; i<rows; i++){
	    matrix[i]=new int[colums];
	}
	
	mainDiagonal(matrix, arr, p, rows, colums);
	
	printMatrix(matrix, rows, colums);


	std::cout << "The main diagonal is: ";
	for(int i=0; i<size; i++){
	    std::cout << *(p+i)<<" ";
	}
	
	
	for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
	return 0;
}


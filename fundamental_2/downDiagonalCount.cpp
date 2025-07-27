#include <iostream>

void diagonal(double** matrix, int* arr, int* p, int rows, double colums){
    int index=0;
	for(int i=0; i<rows; i++){
	    for(int j=0; j<colums; j++){
	        matrix[i][j]=(j+i+j*10.3);
	  
	        if(i>j || i==j){
	            *(p+index)=matrix[i][j];
	            index++;
	        }
	    }
	}
	p=arr;
}

void printMatrix(double** matrix, int rows, int colums){
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
	
	double** matrix =new double*[rows];
	int downSize=size * (size - 1) / 2;
	int dioganalSize=downSize+size;
	int* arr=new int[dioganalSize];
	int* p=arr;
	
	
	for(int i=0; i<rows; i++){
	    matrix[i]=new double[colums];
	}
	
    diagonal(matrix, arr, p, rows, colums);
    printMatrix(matrix, rows, colums);
    
    int count=0;
    for(int i=0; i<dioganalSize; i++){
        if(*(p+i)>=12.3 && *(p+i)<34.1){
            count++;
        }
    }
    
    std::cout << "The count is the numbers beetwen in [12.3;34.1) is: " << count << std::endl;

	for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
	return 0;
}

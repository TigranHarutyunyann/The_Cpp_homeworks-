#include <iostream>
#include <climits>

void mainDiagonal(int** matrix, int* arr, int* p, int rows, int colums){
    int index=0;
	for(int i=0; i<rows; i++){
	    for(int j=0; j<colums; j++){
	        
	        matrix[i][j]=(j+i);
	        if(i<j){
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
	int upperSize=size * (size - 1) / 2;
	int* arr=new int[upperSize];
	int* p=arr;
	
	for(int i=0; i<rows; i++){
	    matrix[i]=new int[colums];
	}
	
	mainDiagonal(matrix, arr, p, rows, colums);
	
	printMatrix(matrix, rows, colums);

    int max=INT_MIN;
	std::cout << "The main diagonal is: ";
	for(int i=0; i<upperSize; i++){
	    std::cout << *(p+i)<<" ";
	    if(max< *(p+i)){
	        max=*(p+i);
	    }
	}
	
	std::cout << std::endl;
	
	std::cout << "The max number is: " << max << std::endl;
	
	for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
	return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>

void initArray(int** ppMatrix,int rows, int cols){
    
    std::cout << "The result is: "<< std::endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            *(*(ppMatrix+i)+j) = 1+rand() % 100;
        std::cout << *(*(ppMatrix+i)+j) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    srand(time(0));
    
    int rows, cols;
    std::cout << "Enter a rows and colums: ";
    std::cin >> rows >> cols;
    
    int** matrix = new int*[rows];
    
    for(int i=0; i < rows; i++){
        matrix[i] = new int[cols];
    }
    
    initArray(matrix, rows, cols);
    
    return 0;
}

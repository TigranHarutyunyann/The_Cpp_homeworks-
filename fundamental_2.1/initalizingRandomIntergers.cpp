#include <iostream>
#include <ctime>
#include <cstdlib>

void initArray(int* pArr,int size){
    
    std::cout << "The result is: ";
    for(int i=0; i<size; i++) {
        *(pArr+i)=(1+rand() % 100);
        std::cout << *(pArr+i) << " ";
    }
}

int main()
{
    srand(time(0));
    
    int size;
    std::cout << "Enter a size: ";
    std::cin >> size;
    
    int* arr = new int[size];
    
    initArray(arr, size);
    
    return 0;
}

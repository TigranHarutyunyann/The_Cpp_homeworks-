#include <iostream>
#include <ctime>
#include <cstdlib>

void MaxElementIndex(int* ptr, const int size){
    int maxElement=0;
    int maxIndex=0;
    
    for(int i=0; i<size; i++){
        if(maxElement<*(ptr+i)){
            maxElement=*(ptr+i);
        }
  std::cout << *(ptr+i) << " "; 
    }
 std::cout << std::endl;
    std::cout << "The value is: " << maxElement << std::endl; 
 
    for(int i=0; i<size; i++){
         if(maxElement==*(ptr+i)){
            maxIndex=i;
         }
    }
 std::cout << "The index is: " << maxIndex << std::endl; 
}

int main()
{
    srand(time(0));
    
    const int size=20;
    int* arr=new int[size];
    int* ptr=arr;
    for(int i=0;i<size;i++){
        *(ptr+i)=((rand() % 100)+1);
    }
 
    MaxElementIndex(ptr, size);

    return 0;
}

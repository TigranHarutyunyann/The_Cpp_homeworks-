#include <iostream>
#include <cmath>

bool PrimeNumberChecking(int& num){
    if(num==2){return 1; }
    if(num<2){return 0; }
    
    int limit=sqrt(num);
    for(int i=2; i<=limit; i++){
        if(num%i==0) {
            return 0; 
        }
    }
    return 1;
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if(PrimeNumberChecking(num)){
        std::cout << "Number is prime:" << std::end; 
    } else {
        std::cout << "Number isn't prime:" << std::end; 
    }
    return 0;
}

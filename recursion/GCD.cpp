#include <iostream>


int gcd(int a, int b){ 
    if(a==b) return a;
    if(a<b){
        int tmp = a;
        a=b;
        b=tmp;
        return gcd(b, a-b);
    }else {
        return gcd(b, a-b);
    }
}

int main(){
        int a, b;
        std::cout << "Enter a and b number: ";
        std::cin >> a >> b;
        std::cout << gcd(a, b);
        std::cout << std::endl;
        return 0;
}

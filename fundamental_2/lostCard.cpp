#include <iostream>

void TheLostCard(int* arr, int N){
    for(int i=0; i<N-1; i++) {
  if(arr[i]!= i + 1) {
   std::cout << "Lost card number is: " << i+1 << std::endl;
   break;
  } 
 }
}

int main() {
 int N;
 do{
 std::cout << "Enter a card size: ";
 std::cin >> N;
 }while(N>=100 || N<=1);
 int* arr = new int[N];
 
 std::cout << "Enter the cards: ";
 for(int i=0; i<N-1; i++){
  std::cin >> arr[i];
 }

    TheLostCard(arr, N);
    
 delete[] arr;
 return 0;
}

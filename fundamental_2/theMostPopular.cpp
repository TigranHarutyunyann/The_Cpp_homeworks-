#include <iostream>
#include <climits>

void everyElementsCount(int* arr, int* arr_count, int N) {
    int index=0;
    for(int i=0; i<N; i++){
        int count=0;
  for(int j=0; j<N; j++){
      if(arr[i]==arr[j]){
          count++;
      }
     }
     if(count>1) {
         arr_count[index]=count;
         index++;
     }
 }
}

void mostPapularElement(int* arr, int* arr_count, int N){
    int max=INT_MIN;
 for(int i=0; i<N; i++){
        if(max<arr_count[i]){
            max=arr_count[i];
        }
 }
 
 for(int i=0; i<N; i++){
        int count=0;
  for(int j=0; j<N; j++){
      if(arr[i]==arr[j]){
          count++;
      }
     }
     if(count==max) {
         std::cout << "The most popular number is: " << arr[i] << std::endl;
         break;
     }
 }
}


int main() {
 int N;
 do{
 std::cout << "Enter a arr size: ";
 std::cin >> N;
 }while(N>=100 || N<=1);
 int* arr = new int[N];
 int* arr_count = new int[N];
 
 std::cout << "Enter the elements: ";
 for(int i=0; i<N; i++){
  std::cin >> arr[i];
 }
    
 everyElementsCount(arr, arr_count, N);
 mostPapularElement(arr, arr_count, N);
    
 delete[] arr;
 delete[] arr_count;
 return 0;
}

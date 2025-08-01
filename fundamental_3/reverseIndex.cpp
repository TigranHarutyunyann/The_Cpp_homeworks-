#include <iostream>
#include <vector>

void reverse(std::vector<int>& vec, int& start, int& end){
    if(start<0 || end >= vec.size() || start > end) {
        std::cout << "Wrong interval is: ["<<start<<";"<<end<<"]"<< std::endl;
        return;
    } else {
        auto it_s = vec.begin() + start;
        auto it_e = vec.begin() + end;
        
        while(it_e > it_s) {
            int tmp=*it_s;
            *it_s=*it_e;
            *it_e=tmp;
            
            it_s++;
            it_e--;
        }
    }
}


int main() {
    std::vector<int> vec={5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    std::vector<int> intervals = {2, 4, 3, 7, 5, 3, 4, 6};
    
    std::cout << "Vector befor is: ";
    for (auto n : vec){
        std::cout << n << " "; 
    }
	std::cout << std::endl;
	
	std::cout << "Intervals is: ";
    for(auto n : intervals){
        std::cout << n << " "; 
	}
	std::cout << std::endl;

	

   for(auto it = intervals.begin(); it < intervals.end(); it+=2){
        int it_start = *it;
        int it_end = *(it+1);
        reverse(vec, it_start, it_end);
   }
    
    std::cout << "Vector after is: ";
    for (auto n : vec){
        std::cout << n << " "; 
    }
	std::cout << std::endl;
	
 return 0;
}

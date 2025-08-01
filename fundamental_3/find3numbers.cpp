#include <iostream>
#include <vector>

std::vector<int> find3Numbers(int N, std::vector<int> arr) {
    std::vector<int> mini(N);
    std::vector<int> maxi(N);
    
    mini[0] = arr[0];
    for (int i = 1; i < N; i++) {
        mini[i] = std::min(mini[i - 1], arr[i]);
    }

    maxi[N - 1] = arr[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        maxi[i] = std::max(maxi[i + 1], arr[i]);
    }
    
    for(int i=1; i<N-1; i++){
        if(mini[i]<arr[i] && arr[i]<maxi[i]){
            return {mini[i], arr[i], maxi[i]};        
        }    
    }
    return {};
}

int main() {
    int N = 5;
    std::vector<int> arr={1, 2, 1, 1, 3};  
    
  auto result = find3Numbers(N, arr);
    if (!result.empty()) {
        std::cout << result[0] << " " << result[1] << " " << result[2] << "\n";
    } else {
        std::cout << "No such triplet found\n";
    }
    return 0;
}

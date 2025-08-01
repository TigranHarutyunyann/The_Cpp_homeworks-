#include <iostream>
#include <vector>

void maxMeetings(int N, std::vector<int> S, std::vector<int> F) {
    std::vector<int> meet;

    int lastFinish = -1;
    for(int i = 0; i < N; ++i) {
        if(S[i] > lastFinish) {
            meet.push_back(i + 1);
            lastFinish = F[i];
        }
    }

    for(int x : meet)
        std::cout << x << " ";
}

int main() {
    int N = 6;
    std::vector<int> S{1, 3, 0, 5, 8, 10};  
    std::vector<int> F{2, 4, 6, 7, 9, 13};

    maxMeetings(N, S, F);
    return 0;
}


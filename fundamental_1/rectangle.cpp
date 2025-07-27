#include <iostream>

void drawRectangle(int len, int wid);

int main() {
    int length, width;
	std::cout << "Enter a rectangle length: ";
	std::cin >> length;
	std::cout << "Enter a rectangle width: ";
	std::cin >> width;

    drawRectangle(length, width);

	return 0;
}

void drawRectangle(int len, int wid) {
	for(int i=1; i<=wid; i++) {
		for(int j=1; j<=len; j++) {
			if(i==1 && j==1) {
				std::cout<<"/";
			}else if( i==wid && j==len) {
				std::cout<<"/\n";
			}else if( i==wid && j==1) {
				std::cout<<"\\";
			}else if(i==1 && j==len){
				std::cout<<"\\\n";
			}else if(i==1 && j>=2 && j<=len-1 || i==wid && j>=2 && j<=len-1) {
				std::cout<<"*";
			}else if(j==1 && i>=2 && i<=wid-1) {
				std::cout<<"*";
			}else if(j==len && i>=2 && i<=wid-1) {
				std::cout<<"*\n";
			}else {
				std::cout<<" ";
			}
		}
	}
}

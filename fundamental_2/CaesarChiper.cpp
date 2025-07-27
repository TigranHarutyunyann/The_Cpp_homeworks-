#include <iostream>

void caesarChiper(char line[], int k){
    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] >= 'A' && line[i] <= 'Z') {
            line[i] = 'A' + (line[i] - 'A' + k) % 26;
        } else if (line[i] >= 'a' && line[i] <= 'z') {
            line[i] = 'a' + (line[i] - 'a' + k) % 26;
        }
    }
}

int main() {
	char line[100];
	std::cout<<"Enter a line: ";
	std::cin.getline(line, 100);
	
	int k=0; 
	do{
	std::cout << "Enter a number (1-26): ";
	std::cin >> k;
	}while(k < 1 || k > 26);
	
	caesarChiper(line, k);
	
    std::cout<<"The result is: "<< line << std::endl;
	return 0;
}

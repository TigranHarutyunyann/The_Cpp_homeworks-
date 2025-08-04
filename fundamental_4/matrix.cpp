#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

struct matrix{
	private:
		int n1,n2;
		int** mtx;
	public:
		matrix(int number1, int number2) : n1(number1), n2(number2) {
        	mtx=new int*[n1];
			for(int i=0; i< n1; i++){
				mtx[i]=new int[n2];
			}
		}

		void enterElements(){	
		srand(time(0));
		for(int i=0; i<n1; i++){
			for(int j=0; j<n2; j++){
				mtx[i][j]= ((rand() % 100)+1);
		   		}
			}               
		}

		void printMatrix(){
			for(int i=0; i<n1; i++){
				for(int j=0; j<n2; j++){
					std::cout << mtx[i][j] << " ";
				}
				std::cout << std::endl;
			}
		}

		~matrix(){
			for(int i=0; i<n1; i++){
				delete[] mtx[i];
			}
			delete[] mtx;
		}
};

bool isOnlyNumber(int argc, char* argv[]);

int main(int argc, char* argv[] ){
		if(argc==1){
			std::cout << "Please run program with arguments\n";
			return 1;
		}else if(argc>3){
	   		std::cout << "Please input 2 arguments\n";
			return 2;
		}else if(!isOnlyNumber(argc, argv)){
			std::cout << "Please enter only numbers(no sinbols, letters, other number type)\n";
			return 3;
		} 

  	int num1, num2;
	if(argc==2){
		num1=atoi(argv[1]);
		num2=num1;
	}else{	
		num1=atoi(argv[1]);
		num2=atoi(argv[2]);
	}
		
		if(num1 > 100 || num2 > 100){
			std::cout << "Please enter the small argments(arg < 100)\n";
			return 4;
		}else if(num1<2 || num2<2){
			std::cout << "Please enter the big arguments (arg > 1)\n";
			return 5;
		}

	matrix bild(num1, num2);
	bild.enterElements();
	bild.printMatrix();

	return 0;
}

bool isOnlyNumber(int argc, char* argv[]){
		for(int i=1; i<argc; ++i){
		std::string ch=argv[i];
		for(char n : ch){
			if(n <'0' || n>'9'){
				return false;
			}
		}
	}
	return true;
}

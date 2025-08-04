#include <iostream>

class calculator{
	private:
		double memory=0;
        double other=0;
	public:         
        int num1, num2;
		bool bMem;

        calculator(int a, int b, bool bMemorize): num1(a), num2(b), bMem(bMemorize) {}

 		int add() {
        	if (bMem) {
            memory += num1 + num2;
        	}
        	other = num1 + num2;
        	return other;
    	}

    	int sub() {
       		if (bMem) {
            	memory += num1 - num2;
        	}
        	other = num1 - num2;
        	return other;
    	}

    	int mul() {
       		if (bMem) {
            	memory += num1 * num2;
        	}
        	other = num1 * num2;
       		return other;
    	}

    	int div() {
        	if (num2 == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        	}
        	if (bMem) {
            	memory += num1 / num2;
        	}
        	other =num1 / num2;
        	return other;
    	}

        void printMemory(){
			std::cout << "The result in memory is: "<< memory << std::endl;
		}

		void printOther(){
			std::cout << "The other result is: "<< other << std::endl;
		}


};                 

int main(){
 	calculator op1(10, 5, true);  
    calculator op2(20, 4, false); 
    calculator op3(15, 3, true);  

    std::cout << "--- op1 ---" << std::endl;
    std::cout << "add: " << op1.add() << std::endl;
    std::cout << "mul: " << op1.mul() << std::endl;
    op1.printMemory();

    std::cout << "\n--- op2 ---" << std::endl;
    std::cout << "sub: " << op2.sub() << std::endl;
    std::cout << "div: " << op2.div() << std::endl;
    op2.printMemory(); 

    std::cout << "\n--- op3 ---" << std::endl;
    std::cout << "add: " << op3.add() << std::endl;
    std::cout << "div: " << op3.div() << std::endl;
    op3.printMemory();
	return 0;
}

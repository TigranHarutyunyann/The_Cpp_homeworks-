#include <iostream>
#include <string>
#include <vector>

struct ResultOrder{
	std::string coffeeName;
	int dram; 	
};

class CoffeeMachine {
    private:
	std::vector<std::string> products;
	std::vector<int> prices;

	public:
    CoffeeMachine(std::vector<std::string> prod, std::vector<int> pric) : products(prod), prices(pric){	}


	void printPriceList(){
		std::cout << "Products: " << " Prices: "<<std::endl;
		for(int i=0; i<products.size(); i++){
			std::cout << products[i] << " " << prices[i] << std::endl;
		}
	}

     ResultOrder order(std::string name, int dram){
		for(int i=0; i<products.size(); i++){
			if(name==products[i]){
				if(dram-prices[i]==0){
					return{products[i], dram-prices[i]};
					
				}else if(dram-prices[i]<0){
					return{"Not enough money", dram};
					
				}else{
					return{products[i], dram-prices[i]};
					
				}
			}
		}
		return{"I don't have this product", dram};
	}
};

int main() {
    std::vector<std::string> products = {"Espresso", "Cappuccino", "Latte", "Americano","Hot Chocolate"};
    std::vector<int> prices = {800,1000,1100,900,950};    
    CoffeeMachine menu(products, prices);
	menu.printPriceList();
	std::cout << std::endl;

	std::cout << "Order 1: \n";
    ResultOrder r1 = menu.order("Espresso", 800);
	std::cout <<"Pruduct is: " << r1.coffeeName << " your change is: " << r1.dram<<std::endl;

	std::cout << "Order 2: \n";
    ResultOrder r2 = menu.order("EspressoPlus", 800);
	std::cout <<"Pruduct is: " << r2.coffeeName << " your change is: " << r2.dram<<std::endl;

	std::cout << "Order 3: \n";
    ResultOrder r3 = menu.order("Latte", 1500);
	std::cout <<"Pruduct is: " << r3.coffeeName << " your change is: " << r3.dram<<std::endl;

	std::cout << "Order 4: \n";
    ResultOrder r4 = menu.order("Latte", 600);
	std::cout <<"Pruduct is: " << r4.coffeeName << " your change is: " << r4.dram<<std::endl;

	std::cout << "Order 5: \n";
    ResultOrder r5 = menu.order("LatteM", 600);
	std::cout <<"Pruduct is: " << r5.coffeeName << " your change is: " << r5.dram<<std::endl;

	std::cout << "Order 6: \n";
    ResultOrder r6 = menu.order("Americano", 2000);
	std::cout <<"Pruduct is: " << r6.coffeeName << " your change is: " << r6.dram<<std::endl;
	return 0;
}

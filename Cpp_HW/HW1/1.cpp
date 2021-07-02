#include<iostream>
using namespace std;

class Item { // class Item
private: // Declare pricate members
	int code, price;
	string name;
	
public:
	// method
	void set_Product(int a, int b, string n) { //set_Product function definition
		code = a; // Put a in the code
		price = b; // Put b in the price
		name = n; // Put n in the name
	}
	void print_product() { // print_product function definition
		cout << code << "\t\t" << name << "\t\t" << price << endl;
	}
	int price_value(int c) { // price_value function definition
		if(c == code) // If c and code match
			return price; //return price value
	}	
};

int main() {
	Item it[4]; // //Create Array object
	int code, quant, value = 0;
	
	//Product data input
	it[0].set_Product(1, 5000, "shampoo");
	it[1].set_Product(2, 1000, "soap");
	it[2].set_Product(3, 2000, "Beer");
	it[3].set_Product(4, 2500, "Milk");
	
	cout << "Home Plus" << endl;
	cout << "Code\t\tItem\t\tRate_Won" << endl;

	//Product list output
	for (int i = 0; i < 4; i++)
		it[i].print_product();

	cout << "Enter the code:";
	cin >> code; //input product code
	
	cout << "Enter the quantity:";
	cin >> quant; //input quantity
	
	value = it->price_value(code); //Put return value in the value

	cout << fixed;
	cout.precision(6); //Output to 6 decimal places

	//Total price output
	cout << "Total price is: " << value * (double)quant << endl;
	
	system("pause");
	return 0;
}
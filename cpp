#include <iostream>
using namespace std;

enum colors {red=1,black,white};
enum color_{reds=1,blacks,whites,greens};

string size_, model_, fabric;

int color, color_b, stock, stock_b;

namespace shirt {

	

	void displayFeatures() 
	{
		

		cout << "size of shirt: " << size_ << endl;
		cout << "color of shirt:" << color << endl;
		cout << "stock: " << stock << endl;
	}
}

namespace  bag { 

	void displayFeatures() 
	{
		

		cout << "model of bag:" << model_ << endl;
		cout << "color of bag :" << color_b << endl;
		cout << "Fabric of bag:" << fabric << endl;
		cout << "stock: " << stock_b << endl;
	}
}


int main() {

	cout << "****************************************Shirts***************************************" << endl;
	cout << "Enter size of shirt (S,M,L) : " << endl;
	cin >> size_;

	cout << "Enter color of shirt(red = 1, black = 2, white = 3) :" << endl;
	cin >> color;

	cout << "Enter Stock of shirt:" << endl;
	cin >> stock;

	cout << "****************************************Bags***************************************" << endl;
	cout << "Enter model of bag (Blackpack,wallet,Handbag): " << endl;
	cin >> model_;

	cout << "Enter color of bag (red=1,black=2,white=3,green=4) :" << endl;
	cin >> color_b;

	cout << "Enter Fabric of bag(cotton,canvas,jute): " << endl;
	cin >> fabric;

	cout << "Enter stock of bag: " << endl;
	cin >> stock_b;
	cout << "**************************************************************************************" << endl;

	cout << "**************************************************************************************" << endl;
	shirt::displayFeatures();
	cout << "**************************************************************************************" << endl;

	cout << "**************************************************************************************" << endl;
	bag::displayFeatures();
	cout << "**************************************************************************************" << endl;
	return 0;
}

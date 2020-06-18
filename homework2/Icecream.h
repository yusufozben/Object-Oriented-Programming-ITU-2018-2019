#include <string>

class Icecream:public ShopItem
{
	public:
		Icecream():ShopItem(){};
		Icecream(string,float,float); //constructor of icecream
		
		bool hasFlavor(){
		}
		
		friend ostream& operator<<(ostream &output,Icecream &D){  //this overloading provide to print icecream elements
			output << "**********************" << endl;
			D.print();
			cout << " " << D.getCost() << endl;
			return output;
		}
};


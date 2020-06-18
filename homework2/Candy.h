#include <string>

class Candy:public ShopItem
{
	public:
		Candy():ShopItem(){};
		Candy(string a,float b,float c): ShopItem(a,b,c) //constructor of candy
		{
		}
		
		bool hasSugar(){
		}	
		
		friend ostream& operator<<(ostream &output,Candy &D){ //this overloading provide to print candy elements
			output << "**********************" << endl;
			D.print();
			cout << " " << D.getCost() << endl;
			return output;
		}

};

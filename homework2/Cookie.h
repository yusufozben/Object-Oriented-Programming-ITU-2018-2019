#include <string>


class Cookie:public ShopItem{
	public:
		Cookie():ShopItem(){};
		Cookie(string a,float b,float c): ShopItem(a,b,c/12)  //constructor of cookie 
		{
		}
		
		bool hasNut(){
		};


		
		friend ostream& operator<<(ostream &output,Cookie &D){  //this overloading provide to print cookie elements
			output << "**********************" << endl;
			D.print();
			cout << " " << D.getCost() << endl;
			return output;
		}
};


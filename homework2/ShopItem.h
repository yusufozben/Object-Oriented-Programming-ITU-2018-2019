#include <string>
using namespace std;

class ShopItem
{
	private:
		string name;
		float number;
		float price;
	public:
		void print() const;	//print variables of shopItem
		float getCost();	//calculate cost of item
		ShopItem(){}; 		//default constructor
		ShopItem(string,float,float);	//constructor of shopItem
	
};

#include <iostream>
#include <cstdlib>
#include <string>
#include "shopItem.h"
using namespace std;
	
	
ShopItem::ShopItem(string a,float b,float c){
	name = a;
	number = b;
	price = c;
}
	
void ShopItem::print() const{
	cout << name << " #" << number;	
}
	
float ShopItem::getCost(){
	return number*price;		
}

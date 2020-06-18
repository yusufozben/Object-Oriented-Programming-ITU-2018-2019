#include <iostream>
#include <cstdlib>
#include <string>
#include "box.cpp"
#include "shopItem.cpp"
#include "candy.cpp"
#include "cookie.cpp"
#include "icecream.cpp"

using namespace std;

int main() {
Cookie cookie1("Chocolate Chip Cookies",10, 180); //(name, pieces, priceperdozen)
Cookie cookie2("Cake Mix Cookies", 16, 210);
Box<Cookie> cookieBox(cookie1);
cookieBox.add(cookie2);
cout<<cookieBox<<endl;
try{
cout << cookieBox[2] << endl;
}catch(const char * itemCountLimit){
	cout << "**********************" << endl << itemCountLimit << endl;
}

Icecream icecream1("Chocolate ice cream",1.5, 170); //(name, litre, priceperlitre)
Box<Icecream> icecreamBox(icecream1);
cout<<icecreamBox<<endl;
try{
icecreamBox.setDiscount(50);
}catch(const char * DiscountError){
	cout << "**********************" << endl << DiscountError << endl;
}
Candy candy2("Gummi bears",12,89); //(name, weight, priceperkg)
Candy candy3("Hanukkah gelt",8,110);
Box<Candy> candyBox(candy2);
candyBox.add(candy3);
candyBox.setDiscount(15);
cout<<candyBox<<endl;
return 0;
} 

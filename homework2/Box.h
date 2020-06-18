#include <iostream>

using namespace std;

template <class T>
class Box
{
	private:
		enum {DiscountError, itemCountLimit};
		T * items;
		float discount;
		float totalCost;
		int itemCount;
	public:
		Box(T); //constructor of Box Class
		~Box(); //Destructor of Box Class
		void add(T); //it is add a element(candy, icecream, cookie) to dynamic array
		T& operator[] (int ); //it is provide us to access certain element of array
		void setDiscount(int); //it is set the discount
		
		
		friend ostream& operator<<(ostream &output,Box<T> &D){
			
			output << "**********************" << endl;
			output << "Number of items:" << D.itemCount << endl;
			
			for(int i=0;i<D.itemCount;i++){		//in that loop program print all arrays element's variables(name,number price) 
				cout << i+1 << ":" ;
				D.items[i].print();
				cout << " " << D.items[i].getCost() << endl;
			}
			D.totalCost=D.totalCost*1.08;    //adding tax to total cost
			output << "**********************" << endl;
			if(D.discount==0){		//it is run when do not enter discount
				cout << "Total cost:" << D.totalCost << endl;
			}else{    				//it is run when enter discount
				cout << "Total cost:" << D.totalCost << endl;
				cout << "Discount:"<< D.discount << "%" << endl;
				cout << "Discount amount:-" << D.totalCost*D.discount/100 << endl;
				D.totalCost = D.totalCost - D.totalCost*D.discount/100;
				cout << "Discounted cost:" << D.totalCost << endl;
			}
			return output;
		}
		
	
	protected:
};

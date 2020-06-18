#include <iostream>
#include <cstdlib>
#include <string>
#include "box.h"

using namespace std;

template <class T>
Box<T>::Box(T item){
	discount = 0;	
	totalCost = item.getCost();	//add cost of item to total cost
	itemCount = 1;
	items = new T[itemCount];//create new dynamic array
	items[0] = item;
}

template <class T>
void Box<T>::add(T new_item){
	totalCost += new_item.getCost(); //add cost of new item to total cost
	itemCount++;	//increase the number of item
	T * tmp = new T[itemCount]; //create tmp array
	for(int i=0;i<itemCount-1;i++){
		tmp[i] = items[i];	//transfer items array to tmp array
	}
	tmp[itemCount-1]=new_item; //add new item to tmp array
	
	delete[] items; //delete items arrays elements
	
	items=tmp; //transfer tmp array to items array
	
}

template <class T>
T& Box<T>::operator[](int x){
	if(x<0 || x>itemCount-1) throw "We don't have enough cookies!"; //it is the error that when main try to access empty element of items array
	return items[x];
}


template <class T>
void Box<T>::setDiscount(int a){
	if (a<0 || a>30) throw "Discount rate is out of range!"; //it is the error that when main try to set discount upper than 30 or less than 0
	discount = a;
}

template <class T>
Box<T>::~Box(){
	delete[] items;			//deallocate items arrays
	
}

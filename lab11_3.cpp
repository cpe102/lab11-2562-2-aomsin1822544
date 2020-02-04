#include<iostream>

using namespace std;

void mySwap (int &,int &,int &); //Pass variables by references

int main(){
	int x = 6, y = 9,z;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y,z);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}


void mySwap (int &x,int &y,int &z){
	
	
	z=x;
	x=y;
	y=z;


	
}
//Write function definition here
/*
??? mySwap (???){

}
*/

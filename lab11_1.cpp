#include<iostream>
#include<cmath>

using namespace std;

//Write prototype of function fibonacci() hereint
unsigned long long int fibonacci(int x);


int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}
 unsigned long long int fibonacci(int x)
{
	if (x==0)
	{
		return 0;
	}
	else if (x==1)
	{
		return 1;
	}
	else 
	{
		return fibonacci(x-1) + fibonacci(x-2);
	}
	
}

//Write definition of function fibonacci() here
/*
??? fibonacci(???){
  
}
*/

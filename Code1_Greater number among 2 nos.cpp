#include<iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Please enter the Two Different Number  = ";
	cin >> a >> b;
	
	if(a > b)
	{
    	cout << a << " is Greater Than " << b;  
	}         
	else if(b > a)
	{
		cout << b << " is Greater Than " << a;  
  	}
  	else
  	{
  		cout << "Both are Equal";
	}
 	return 0;
}

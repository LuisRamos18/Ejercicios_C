//programa para intercambiar valores entre dos variables

#include<iostream>

using namespace std;

int main (){
	
	int x, y, a = 0, b = 0;
	
	cout<<"ingresa el valor de x:";
	cin>>x;
	
	cout<<"ingresa el valor de y:";
	cin>>y;
		
	a = x;
	b = y;
	
	x = b;
	y = a;
	
	cout<<"\nahora el valor de x es:"<<x<<"\n";
	cout<<"ahora el valor de y es:"<<y<<"\n";
	
	return 0;
}

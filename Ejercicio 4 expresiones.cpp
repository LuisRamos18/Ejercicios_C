//programa de la siguiente expresion matematica  a+b/c+d

#include <iostream>

using namespace std;

int main () {
	float a, b, c, d, resultado = 0;
	
	cout<<"ingresa el valor de a: ";
	cin>>a;
	
	cout<<"ingresa el valor de b: ";
	cin>>b;
	
	cout<<"ingresa el valor de c: ";
	cin>>c;
	
	cout<<"ingresa el valor de d: ";
	cin>>d;
	resultado = (a +b) / (c + d);
	
	cout<<"el resultado es:"<<resultado;
	
	
	return 0;
}

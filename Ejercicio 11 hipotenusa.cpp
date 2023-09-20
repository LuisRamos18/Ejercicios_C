//programa para calcular la hipotenusa de un triangulo rectangulo

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float catetoa, catetob, hipo, rest;
	
	cout<<"ingresa el valor del cateto a: ";
	cin>>catetoa;
	
	cout<<"ingresa el valor del cateto b: ";
	cin>>catetob;	
	
	catetoa*=catetoa;
	catetob*=catetob;	
	hipo = catetoa + catetob;
	rest = (sqrt(hipo));
	
	cout<<"\n la hipotenusa del triangulo es:"<<rest;
	
	
	
	return 0;
}

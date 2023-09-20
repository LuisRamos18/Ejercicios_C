#include<iostream>
#include<math.h>

using namespace std;


int main (){
	float a, b, hipo;
	
	cout<<"ingresa el valor del primer cateto: ";
	cin>>a;

	cout<<"ingresa el valor del segundo cateto: ";
	cin>>b;	
	
	hipo = sqrt(pow(a,2)+pow(b,2));
	
	cout.precision(2);
	cout<<"\nel valor de la hipotenusa es:"<<hipo;
		
	return 0;
}

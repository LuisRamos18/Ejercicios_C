#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, c, x1, x2;
	
	cout<<"ingresa el valor de a: ";
	cin>>a;
	
	cout<<"ingresa el valor de b: ";
	cin>>b;	
	
	cout<<"ingresa el valor de c: ";
	cin>>c;
	
	x1 = (-1*b+(sqrt(pow(b,2)- 4*a*c)));
	x1 = x1/(2*a);

	x2 = (-1*b-(sqrt(pow(b,2)- 4*a*c)));
	x2 = x2/(2*a);
	
	cout<<"\nla solucion es: "<<x1;
	cout<<"\nla solucion es: "<<x2;	
	
	return 0;
}

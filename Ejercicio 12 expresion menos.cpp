#include<iostream>

using namespace std;


int main(){
	float a, b, c, d, res;
	
	cout<<"ingresa el valor de a: ";
	cin>>a;
	
	cout<<"ingresa el valor de b: ";
	cin>>b;

	cout<<"ingresa el valor de c: ";
	cin>>c;
		
	cout<<"ingresa el valor de d: ";
	cin>>d;	

	
	res = a+b/(c- d);
	
	cout<<"\nel resultado es: "<<res<<endl;
	
	
	return 0;
}

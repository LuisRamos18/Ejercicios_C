#include<iostream>

using namespace std;


int main(){
	float a, b, c, d, e, f, res;
	
	cout<<"ingresa el valor de a: ";
	cin>>a;
	
	cout<<"ingresa el valor de b: ";
	cin>>b;

	cout<<"ingresa el valor de c: ";
	cin>>c;
		
	cout<<"ingresa el valor de d: ";
	cin>>d;	
	
	cout<<"ingresa el valor de e: ";
	cin>>e;
	
	cout<<"ingresa el valor de f: ";
	cin>>f;
	
	res = (a+(b/c))/(d+(e/f));
	
	cout<<"\nel resultado es: "<<res<<endl;
	
	
	return 0;
}

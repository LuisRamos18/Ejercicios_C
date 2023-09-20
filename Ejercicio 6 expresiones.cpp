#include<iostream>


using namespace std;

int main(){
	float a, b, res;
	
	cout<<"ingresa el valor de a: ";
	cin>>a;
	
	cout<<"ingresa el valor de b: ";
	cin>>b;	
	
	res = a/b + 1;
	
	cout.precision(2);
	cout<<"\n el resultado es: "<<res;

	
	return 0;
}

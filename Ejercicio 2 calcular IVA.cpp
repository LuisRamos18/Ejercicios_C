#include<iostream>

using namespace std;


int main (){
	int n1;
	float iva, res;
	
	cout<<"ingresa el precio del producto por favor: "<<endl;
	cin>>n1;
	
	iva = n1 * 0.16;
	res = n1 + iva;
	
	cout<<"el precio del producto con IVA es:\n"<<res;
	
	return 0;
}

#include<iostream>

using namespace std;


int main(){
	int n1, n2, n3, n4;
	
	cout<<"ingresa el primer numero: ";
	cin>>n1;
	
	cout<<"ingresa el segundo numero: ";
	cin>>n2;	

	cout<<"ingresa el tercer numero: ";
	cin>>n3;
	
	cout<<"ingresa un cuarto y ultimo numero: ";
	cin>>n4;
	
if ((n4==n1)||(n4==n2)||(n4==n3)){
	cout<<"el numero coincide";
}else cout<<"el numero no coincide";
	
	return 0;
}

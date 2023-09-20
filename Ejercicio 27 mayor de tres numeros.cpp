#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"ingresa el primer numero: ";
	cin>>n1;
		
	cout<<"ingresa el segundo numero: ";
	cin>>n2;	
	
	cout<<"ingresa el tercer numero: ";
	cin>>n3;
	
	if(n1==n2&&n1==n3){
		cout<<"los tres numeros son iguales";
	}else if(n1>n2&&n1>n3){
		cout<<"el primero es el mayor: "<<n1;
	}else if(n2>n1&&n2>n3){
		cout<<"el segundo es el mayor: "<<n2;
	}else if (n3>n1&&n3>n2){
		cout<<"el tercero es el mayor: "<<n3;
	}

		
	return 0;
}

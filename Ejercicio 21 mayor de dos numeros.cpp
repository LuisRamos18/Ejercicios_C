#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"digita el primer numero: ";
	cin>>n1;
	
	cout<<"digita el segundo numero: ";
	cin>>n2;
	
	if(n1==n2){
		cout<<"ambos numeros son iguales: ";
	}
	else{
		if(n1>n2){
		cout<<"el primero es el mayor: "<<n1;
    }else{
    	cout<<"el segundo es el mayor: "<<n2;
	}
	}

	return 0;
}

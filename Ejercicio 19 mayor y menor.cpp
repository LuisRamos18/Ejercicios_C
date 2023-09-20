//ejercicio para determinar el mayor de dos numeros

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"ingresa el primer valor:";
	cin>>n1;
	
	cout<<"ingresa el segundo valor:";
	cin>>n2;
	
	if(n1 == n2){
		cout<<"\nambos son iguales";
	}
	else{ if (n1 > n2){
		cout<<"el primero es el mayor: "<<n1;
	}
	else{
		cout<<"el segundo es el mayor: "<<n2;
	}
	}
	
	
	return 0;
}

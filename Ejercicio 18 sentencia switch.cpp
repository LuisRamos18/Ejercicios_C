//uso de la sentencia switch

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"menu principal";
	cout<<"\n1.ingresar productos";
	cout<<"\n2.dar de baja productos";
	cout<<"\n3.configuraciones\n";
	
	cout<<"\ningresa la opcion deseada:";
	cin>>numero;
	
	switch(numero){
	
	case 1: cout<<"ingresar productos"; break;
	case 2: cout<<"dar de baja productos"; break;
	case 3: cout<<"configuraciones"; break;
	default: cout<<"opcion no valida"; break;
	}
	

	return 0;
}

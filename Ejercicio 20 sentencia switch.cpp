#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"digita un numero entre el 1 al 5: ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"el numero es 1";
		break;
		case 2: cout<<"el numero es 2";
		break;
		case 3: cout<<"el numero es 3";
		break;		
		case 4: cout<<"el numero es 4";
		break;
		case 5: cout<<"el numero es 5";
		break;
		default: cout<<"el numero no esta entre el rango de 1 a 5";
		break;			
	}
	
	
	return 0;
}

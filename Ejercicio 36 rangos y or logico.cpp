#include<iostream>

using namespace std;

int main(){
	int numero, sum = 0;
	
	do{
	cout<<"ingresa un valor";
	cin>>numero;
	sum = sum + numero;
		
	}
	while(((numero <=19)||(numero>=31))&&(numero !=0));{
	cout<<"la suma de los valores es:"<<sum;	
	}
	
	
	return 0;
}

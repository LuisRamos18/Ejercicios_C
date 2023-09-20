#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"ingresa tu edad: ";
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"estas entre el rango de 18 y 25 años de edad";
	}else cout<<"no estas dentro del rango de edad";
	
	
	
	return 0;
}

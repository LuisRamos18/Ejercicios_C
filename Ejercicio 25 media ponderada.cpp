#include<iostream>

using namespace std;

int main(){
	float prac, teo, part, final;
	
	cout<<"ingresa la calificacion de practicas: ";
	cin>>prac;

	cout<<"ingresa la calificacion de teoria: ";
	cin>>teo;	
	
	cout<<"ingresa la calificacion de participacion: ";
	cin>>part;	
	
	prac *= 0.30;
	teo *= 0.60;
	part *= 0.10;
	
	final = prac + teo + part;
	
	cout<<"\nla calificacion final es: "<<final;
	
	return 0;
}

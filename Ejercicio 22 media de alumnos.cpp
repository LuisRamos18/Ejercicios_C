#include<iostream>

using namespace std;

int main (){
	float a, b, c, d, total;
	
	cout<<"ingresa la calificacion del primer alumno: ";
	cin>>a;
	
	cout<<"ingresa la calificacion del segundo alumno: ";
	cin>>b;	
	
	cout<<"ingresa la calificacion del tercer alumno: ";
	cin>>c;	
	
	cout<<"ingresa la calificacion del cuarto alumno: ";
	cin>>d;	
	
	total = a + b + c + d;
	
	total = total / 4;
	
	cout<<"\nla nota final media es: "<<total;

	
	return 0;
}

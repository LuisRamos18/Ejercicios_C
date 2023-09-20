#include<iostream>
#include<conio.h>


using namespace std;

struct persona{
	char nombre[40];
	int edad;
}persona1, persona2;

int main(){
	cout<<"nombre: ";
	cin.getline(persona1.nombre,20, '\n');
	cout<<"edad: ";
	cin>>persona1.edad;
	
	
	cout<<"tu nombre es: "<<persona1.nombre<<endl;
	cout<<"tu edad es: "<<persona1.edad<<endl;

	
	
	getch();
	return 0;
}

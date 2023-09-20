//pedir una cadena de caractes una entera y otra flotante y por ultimo sumarlas

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char entero[20], flot[20];
	int ent;
	float flo, suma = 0;
	
	cout<<"ingresa una cadena de numeros enteros: ";
	cin.getline(entero,20,'\n');
	ent = atoi(entero);
	
	cout<<"ingresa una cadena de numeros reales: ";
	cin.getline(flot,20,'\n');
	flo = atof(flot);
	
	suma = ent + flo;
	cout<<"la suma de ambas cadenas es: "<<suma;
	
	getch();
	return 0;
}

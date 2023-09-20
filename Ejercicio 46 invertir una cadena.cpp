//hacer un programa que determine si una palabra es palindroma o no//

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[50], pal[50];
	
	cout<<"ingresa una palabra: ";
	cin.getline(palabra, 50, '\n');
	strrev(palabra);
	
	if(palabra == strrev(palabra) ){
		cout<<"la palabra es un palindromo: "<<palabra;
	}else cout<<"la palabra no es un palindromo"<<pal<<" "<<palabra;
	
	getch();
	return 0;
}


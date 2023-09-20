//cadenas de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[50];
	int tamano=0;
	
	cout<<"ingresa tu nombre:";
	cin.getline(palabra,50,'\n');
	tamano = strlen(palabra);
	
	if(tamano > 10)	{
		cout<<"tu nombre supera los 10 elementos";
	}else cout<<"tu nombre no supera los 10 elementos";
	
	getch();
	return 0;
}

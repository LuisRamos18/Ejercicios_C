//crea uan cadeda que digz hola que tal y la concatene al nombre del usuario

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	char cade1[] = "\nhola que tal ";
	char cade2[50];
	
	cout<<"ingresa tu nombre por favor: ";
	cin.getline(cade2, 50, '\n');
	
	strcat(cade1, cade2);
	cout<<cade1<<endl;
	
	
	
	getch();
	return 0;
}

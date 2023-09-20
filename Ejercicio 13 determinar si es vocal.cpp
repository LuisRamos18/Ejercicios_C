//programa para determinar si una letra es vocal minuscula, mayuscula o no es vocal

#include<iostream>

using namespace std;

int main(){
	
	char letra;
	
	cout<<"ingresa una letra:";
	cin>>letra;
	
	switch(letra){
		case 'A':
		case 'E':	
		case 'I':
		case 'O':	
		case 'U': cout<<"es una vocal mayuscula";break;
		case 'a':
		case 'e':	
		case 'i':
		case 'o':	
		case 'u': cout<<"es una vocal minuscula";break;
		default : cout<<"la lestra no es vocal"	;break;	
		
	}

	
	return 0;
}

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"ingresa un caracter: ";
	cin>>letra;
	
	switch(letra){
		case 'a': cout<<"el caracter es una vocal minuscula";
		break;
		case 'e': cout<<"el caracter es una vocal minuscula";
		break;
		case 'i': cout<<"el caracter es una vocal minuscula";
		break;
		case 'o': cout<<"el caracter es una vocal minuscula";
		break;
		case 'u': cout<<"el caracter es una vocal minuscula";
		break;
		case 'A': cout<<"el caracter es una vocal Mayuscula";
		break;
		case 'E': cout<<"el caracter es una vocal Mayuscula";
		break;
		case 'I': cout<<"el caracter es una vocal Mayuscula";
		break;
		case 'O': cout<<"el caracter es una vocal Mayuscula";
		break;
		case 'U': cout<<"el caracter es una vocal Mayuscula";
		break;
		default: cout<<"el caracter No es una vocal";
		break;	
	}
	
	
	
	return 0;
}

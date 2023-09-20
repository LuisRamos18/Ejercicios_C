#include<iostream>

using namespace std;

int main (){
	char letra;
	
	cout<<"escoge una vocal miniscula a, e, i, o, u";
	cout<<"ingresa una vocal minuscula: ";
	cin>>letra;
	
	switch(letra){
		case 'a': cout<<"la letra es vocal minuscula";
		break;
		case 'e': cout<<"la letra es vocal minuscula";
		break;
		case 'i': cout<<"la letra es vocal minuscula";
		break;
		case 'o': cout<<"la letra es vocal minuscula";
		break;
		case 'u': cout<<"la letra es vocal minuscula";
		break;
		default: cout<<"la letras no es vocal minuscula";
		break;	}
	
	
	return 0;
}

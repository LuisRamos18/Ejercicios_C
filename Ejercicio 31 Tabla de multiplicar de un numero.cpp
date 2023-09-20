//tabla de multiplicar de un numero

#include<iostream>

using namespace std;

int main(){
	int numero, rest, i;
	
	cout<<"ingresa un numero del 1 al 10:";
	cin>>numero;
	
	if((numero >=1)&&(numero <=10)){
		cout<<"su tabla de multiplicar es:\n";
		for (i= 1; i<=10; i++){
			rest = numero * i;
			cout<<rest<<endl;
		}
	}else cout<<"el numero no esta entre el rango";
	
	return 0;
}

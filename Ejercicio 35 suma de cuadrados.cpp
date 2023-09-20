//programa para calcular el cuadrado de los 10 primeros numeros

#include<iostream>

using namespace std;

int main(){
	int numero, res = 0, i;
	
	for(i=1; i<=10; i++){
		numero = i*i;
		res = numero + res;		
	}cout<<"la suma de los cudrados es\n"<<res;
	
	
	
	return 0;
}

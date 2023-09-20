//program de un arreglo de 5 numeros los copie a otro pero multiplicado por 2

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int array1[5], arrayb[5],n;
	
for (int i=0; i<5; i++){
	cout<<i+1<<" ingresa el valor: ";
	cin>>array1[i];
}
for (int i=0; i<5; i++){
	arrayb[i] = array1[i]*2;
	cout<<"\nel vector multiplicado por dos es: "<<arrayb[i];
}

	
	
	getch();
	return 0;
}

//program de un arreglo de 5 numeros los copie a ogtro pero multiplicado por 2

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arraya[5], arrayb[5],n;
	
for (int i=0; i<5; i++){
	cout<<i+1<<" ingresa el valor: ";
	
	cin>>n;
	
	if(n>0)
	{
		arraya[i]=n;
		for (int i=0; i<5; i++){
		arrayb[i] = arraya[i];
		cout<<"\nlos valores del array son: "<<arrayb[i];
		
	}
}	else
	{
		cout<<"\nlos valores del array son: "<<arrayb[i];
	}

}

	
	
	getch();
	return 0;
}

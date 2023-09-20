#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int array[100], n, i, aux, pos;
	
	cout<<"ingresa el tamaño del array: ";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<"ingresa el numero: ";
		cin>>array[i];
		pos = i;
		aux = array[i];
		
		while((pos>0) && (array[pos-1]>aux)){
			array[pos] = array[pos-1];
			pos--;
		}
		array[pos]=aux;
	}
	
	cout<<"orden asendente: ";
	for(i=0; i<n; i++){
		cout<<array[i]<<" ";
	}
	
	
	getch();
	return 0;
}

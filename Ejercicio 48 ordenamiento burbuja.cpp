#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i, j, n, aux;
	int array[100];
	
	cout<<"ingresa el tamaño del arreglo: ";
	cin>>n;
	for(i=0; i<n; i++){
	cout<<"ingresa los numeros del arreglo: ";
	cin>>array[i];
	}
	
	for(i=0; i<n; i++){	
	for(j=0; j<n; j++){
		
	if(array[j]> array[j+1]){
		aux =array[j];
		array[j]=array[j+1];
		array[j+1]=aux;
	}}}
	
	
	
	 cout<<"0rden asendente: ";
	 for(i=0; i<n; i++){
	 	cout<<array[i]<<" ";
	 }
	
	
	
	
	getch();
	return 0;
}

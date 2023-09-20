//hacer una matriz de 2 x2 y copiar sus elementos a otra matriz

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int array1[2][2], array2[2][2];
	
	for(int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<i<<j<<"ingresa los valores: ";
			cin>>array1[i][j];
		}
	}
	for(int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			array2[i][j] = array1[i][j];
			cout<<array2[i][j];
			
		}
	}
	
	
	
	getch();
	return 0;
}

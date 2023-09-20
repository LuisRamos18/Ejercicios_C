//matriz 3 x3 transpuesta

#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int array1[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<i<<" "<<j<<"ingresa el valor: ";
			cin>>array1[i][j];
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<i<<" "<<j<<" "<<array1[j][i];
		}
	}
	
	
	
	
	
	
	getch();
	return 0;
}

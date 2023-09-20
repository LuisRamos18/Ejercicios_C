//crear una matriz de 3x3 que imprima la diagonal principal

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[3][3], n;
	
	for(int i= 0; i<3; i++){
		for (int j= 0; j<3; j++){
			cout<<"ingresa un numero["<<i<<","<<j<<"]";
			cin>>matriz[i][j];
		}

	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<"\n"<<matriz[i][j]<<endl;
			}
		}
	}
	
	
	
	getch();
	return 0;
	}

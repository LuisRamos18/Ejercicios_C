//vectores o arrays

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int vector []={2,4,6,8,10};
	int mul = 1, i;
	
	for (i=0; i<5; i++){
		mul*= vector[i];
	}
	cout<<"la multiplicacion de los elementos del vector es:"<<mul;

	
	getch();
	return 0;
}

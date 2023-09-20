#include<iostream>


using namespace std;

int main(){
	int n;
	
	cout<<"ingresa un numero: ";
	cin>>n;
	
	if(n==0){
		cout<<"el numero es cero";
	}else if(n<0){
		cout<<"el numero es negativo: "<<n;
	}else{
		cout<<"el numero es positivo: "<<n;
	}
	
	
	return 0;
}

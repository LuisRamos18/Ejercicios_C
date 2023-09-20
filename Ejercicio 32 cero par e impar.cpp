#include<iostream>

using namespace std;


int main(){
	int n;
	
	cout<<"ingresa un valor para evaluar: ";
	cin>>n;
	
	if(n==0){
		cout<<"el valor es cero";
		
	}else if (n%2==0){
		cout<<"el valor es par";
	}else{
		cout<<"el valor es impar";
	}
	
	return 0;
}

//leer 3 numeros y un cuarto y que compare si coinciden

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"ingresa el primer numero";
	cin>>n1;
	
	cout<<"ingresa el primer segundo";
	cin>>n2;
	
	cout<<"ingresa el primer tercer";
	cin>>n3;
	
	cout<<"ingresa el numero a comparar";
	cin>>n4;
	
	if(n1 == n4){
		cout<<"coincide con el primer numero"<<n1;
	}
	else{if(n2 == n4){
		cout<<"coincide con el segundo numero"<<n2;
	}
	else{if(n3 == n4){
		cout<<"coincide con el tercer numero"<<n3;
	}
	else cout<<"el numero no coincide con ninguno";
	}
	}
	
	return 0;
}

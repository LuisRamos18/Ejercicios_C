#include<iostream>

using namespace std;

int main(){
	float n1, n2, sum, res, mult, div;
	
	cout<<"ingresa el primer numero: \n";
	cin>>n1;
	
	cout<<"ingresa el segundo numero: \n";
	cin>>n2;
	
	sum = n1 + n2;
	res = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	cout<<"los resultados son:\n";
	cout<<"suma:"<<sum<<endl;
	cout<<"resta:"<<res<<endl;
	cout<<"multiplicacion:"<<mult<<endl;
	cout<<"division:"<<div<<endl;
	
	return 0;
}

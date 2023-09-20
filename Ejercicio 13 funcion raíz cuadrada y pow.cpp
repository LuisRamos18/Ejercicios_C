#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x, y, f;
	
	cout<<"ingresa el valor de x: ";
	cin>>x;
	
	cout<<"ingresa el valor de y: ";
	cin>>y;
	
	f = sqrt(x)/(pow(y,2)-1);
	
	cout<<"\nel resultado es: "<<f;
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
int n=60,i,c=0; // Variables: n es el numero correcto, i es el numero a introducir y c la cantidad de intentos
do{
	cout<<"Intento";
	cin>>i;
	c++;
	if(i<n){
		cout<<"Mayor";
	}else if (i>n){
		cout<<"Menor";
		}
	}while(i!=n);
	cout<<"!Correcto¡ Lo lograste en"
	<<c<<"Intentos";
}

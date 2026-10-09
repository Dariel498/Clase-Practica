#include<iostream>
using namespace std;
int main(){
	long n,i;
	cin>>n;
	if(n>=2){  // uso esta condicion por no haber numeros menores de 2 que sean primos
	
	for(i=2;i < n;i++) {
		if(n%i==0){
			cout<<"No primo";
			break;
		}
		if(i==n-1){cout<<"Primo";}
			}
			}
	else{cout<<"No es Primo";}

	}

#include<iostream>
using namespace std;
int main(){
	long long n,p=0; // Variables: n es el numero a introducir y p es la cantidad de pasos
	cin>>n;
	while(n!=1){
		p++;
		if(n%2==0){
			n=n/2;
		} else{
		n=n*3+1;
	}
	}
cout<<p<<"pasos";
}
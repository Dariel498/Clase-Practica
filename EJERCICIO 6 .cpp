#include<iostream>
using namespace std;
int main () {
	long long n;
	cin>>n;
	int suma=0;
	while(n>0){
		int digito=n%10;
		suma+=digito; // sume el ultimo digito
		n/=10; // me deshice del ultimo dijito ya sumado
	}
	cout<<suma;
	
	}
			
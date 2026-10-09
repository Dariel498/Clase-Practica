#include<iostream>
using namespace std;
int main(){
	int n,m=0 ,suma=0;
	cin>>n;
	m=n;
		while(m>0){
		int digito=n%10;
		suma+=(m%10)*(m%10)*(m%10); // eleve al cubo el ultimo digito y lo sume
		cout<<suma;
		m=m/10; //me deshice del ultimo digito ya sumado
			}
			if (n==suma){
				cout<< "Es de Armstrong";
					}
					else{
						cout<<"No es de Armstrong";
						
					}
	
}
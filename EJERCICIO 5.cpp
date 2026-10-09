#include<iostream>
using namespace std;
int main() {
	long n,num,inv=0,udigit; // definino las variables,siendo n el numero original, num es un numero temporal, inv es el numero invertido y udigit es el ultimo digito
    do 	{
        cout<< "introduzca numero:";cin>>n;
   }while (n<0);
   num=n;
   while(num>0){
   udigit=num%10;
   	if(num==n) {
	   inv=udigit;
    }
   	else{
   			inv=inv*10+udigit;
   			 }
   			 num=num/10;
   		}
   	    if(n==inv) {
		   cout<<"Es Capicua";
		   } else {
		   cout<<"No Es Capicua";
	}
		   
		          }
	   
   	
   	
   
   
   

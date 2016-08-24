#include<iostream>
#include<conio.h>
using namespace std;
int fib1(int);

int main()
{
  cout<<"root@~AshSharma:2015<Dev>\n\n";
 
   
  int n;char in='y';
 while(in=='Y'||in=='y')
 {
  cout<<" n = ";
  cin>>n;
  int f=fib1(n);
  cout<<"Fibbonaci for "<<n<<" is "<<f;
  cout<<endl<<"duh.. again?? ";cin>>in;
}
  cout<<"\n\nCheers by AshX~~@rootDev`ROG`:20k5\n";
  getch();
  return 0;
}

int fib1(int x)     //poor algo takes very long duh and showed till 46 ...
{
	if(x==0)return 0;
	if(x==1)return 1;
	else return fib1(x-1) + fib1(x-2) ;
}



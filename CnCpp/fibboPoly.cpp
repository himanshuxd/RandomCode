#include<iostream>
#include<conio.h>
using namespace std;
int fib2(int);

int main()
{
  cout<<"root@~AshSharma:2015<Dev>\n\n";
 
   
 int n;
 char in='y';
 while(in=='Y'||in=='y')
 {
  cout<<" n = ";
  cin>>n;
  int f=fib2(n);
  cout<<"Fibbonaci for "<<n<<" is "<<f;
  cout<<endl<<"duh.. again?? ";cin>>in;
 }
  cout<<"\n\nCheers by AshX~~@rootDev`ROG`:20k5\n";
  getch();
  return 0;
}

int fib2(int x)      //dis algo showed till 46 !!
{
  int f[100];f[0]=0;f[1]=1; //use rasonable array values dude 100 max
  int i;
  for(i=2;i<=x;i++)
   {
 	f[i]=f[i-1]+f[i-2];
   }
 return f[x] ;
}



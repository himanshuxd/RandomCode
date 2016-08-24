#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  cout<<"root@~AshSharma:2015<Dev>\n\n";
  int i=1,j=2;
  int* p=&i;
  char x;
  do{
  
  cout<<"i is : "<<i<<"\np is : "<<p<<"\nj is : "<<j;
  p=&j;p=&i;p=&j;
  cout<<"\ni is : "<<i<<"\np is : "<<p<<"\nj is : "<<j;
  cout<<"\ndo again : y/n : ";
  cin>>x;cout<<endl;
  
}while(x=='Y'||x=='y');

  cout<<"\n\nCheers by AshX~~@rootDev`ROG`:20k5";
  getch();
  return 0;
}



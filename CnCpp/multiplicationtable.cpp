#include<iostream>
#include<stdio.h>
#include<conio.h>

int main()
{
  std::cout<<"root@~AshSharma:2015<Dev>\n";
  int a,b,c;
  char x;
do
  {  
  std::cout<<"\n";
  std::cout<<"Enter the number (-vertical limit): ";
  std::cin>>a;
  std::cout<<"\nTill where (-horizontal limit): ";
  std::cin>>b;
  std::cout<<"\n";
  for(int i=1;i<=b;i++)
  {
  	for(int j=1;j<=a;j++)
  	{
  		std::cout<<j<<" x "<<i<<" = "<<i*j<<"\t\t";
	  };
	  std::cout<<"\n";
  }
  std::cout<<"Enter it :(y/n) ";
  std::cin>>x;
  std::cout<<"\n";
}while(x=='Y'||x=='y');
std::cout<<"Cheers by AshX~~@rootDev`ROG`:20k5";
  getch();
  return 0;
}




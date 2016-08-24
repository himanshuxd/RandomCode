#include<iostream>
#include<stdio.h>
#include<conio.h>

int Ash(int x,int y,char a,char b)
{
	return(x*y);
}

int main()
{
	 std::cout<<"root@~AshSharma:2015<Dev>\n";
	
	int a,b,c;
	char x,y,z;
	std::cout<<"Enter The Numberz : ";
	std::cin>>a>>b;
	int s = Ash(a,b,x,y);
	std::cout<<"\nThis is Ash : "<<s;
	getch();
	return(0);
}

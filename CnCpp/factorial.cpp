#include<iostream>
#include<stdio.h>
#include<conio.h>
int main()
{
	 std::cout<<"root@~AshSharma:2015<Dev>\n";
	int x,y=1;
	std::cout<<"Enter a number : ";
	std::cin>>x;
	std::cout<<"\n";
	for(int i=1;i<=x;i++)
	{y*=i;
	}
	std::cout<<y;
	getch();
return 0;
}

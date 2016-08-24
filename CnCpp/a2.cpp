#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>

int ash(char x,int a)
{
  return (int(x)*a);
}

int main()
 {
  int a,b,c;
  char x,z,v;
  std::cin>>a>>b>>c>>x>>z>>v;
  int s = ash(x,c);
   std::cout<<s;
  return 0;
}

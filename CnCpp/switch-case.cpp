#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  cout<<"root@~AshSharma:2015<Dev>\n\n";
  
  bool signal=true;
  int i=2;
  char x='n';
  cout<<"change yourself ?? (y/n): ";
  cin>>x;
  switch(x){
  	case 'n':signal=false;break;
  }
  switch(signal){
  	case true:cout<<"Hah!! You've got heads up you won !! ";break;
  	case false:cout<<"you suck you've lost :p ";break;
  }


  cout<<"\n\nCheers by AshX~~@rootDev`ROG`:20k5";
  getch();
  return 0;
}



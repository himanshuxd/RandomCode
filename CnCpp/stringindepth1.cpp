#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  cout<<"root@~AshSharma:2015<Dev>\n\n";
  
  string guess;
  string name;
  int x=1;
  
  cout<<"What's your name ? ";
  getline(cin,name);
  cout<<endl<<"Hello "<<name;
  
 do{
 
  cout<<endl<<"Enter a guess 1-10 : ";
  getline(cin,guess);
  x=stoi(guess);
  
  }while(x!=5);

  cout<<endl<<"you guessed me right !! i'm 5ive :=) ";
  
  cout<<"\nsize of name "<<name.size()<<endl;
  cout<<"Empty huh ?";switch(int x=name.empty()){case 0:cout<<" No It ain't empty duh !! @yay ";break;default : cout<<" It's Empty !!";};
  
  cout<<endl<<endl<<guess.append(" was your guess");
  
  cout<<"\n\nCheers by AshX~~@rootDev`ROG`:20k5\n";
  getch();
  return 0;
}



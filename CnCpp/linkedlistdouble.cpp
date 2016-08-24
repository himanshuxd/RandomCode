#include<stdlib.h>
#include<iostream>
#include<stdio.h>

using namespace std;

struct node{
	int data;
	struct node *rlink,*llink;
};
struct node *datemp,*zeus,*node1,*temp,*start=NULL,*nodex,*curr;
void insert();
void display();
int inpos(int,int,int,int);
int main(){
	int p,q,x,y,c; char t;
	printf("enter the number of values : ");
	scanf("%d",&p);
	for ( q = 0; q < p; q++)
	{
		insert();
		display();
	}
	do
	{
	printf("enter the position : ");
	scanf("%d",&x);
	if(x>p){cout<<"\nFuck you i'm exiting !! "; exit(0);}
	printf("enter the value at that ll pos :  ");
	scanf("%d",&y);
	if(x==0)c=1;
	else if(x==p)c=2;
	else c=3; 
		
	int n = inpos(c,x,y,p);
	display();cout<<"\ncount = "<<n;
	printf("\n\n:lol: @ Do again ? (y or Y) : ");
	cin>>t;cout<<endl;
	p=n;
	
}while( t == 'y' || t == 'Y' );
}
void insert(){
	node1=(struct node*)malloc(sizeof(struct node));
	printf("enter the value : ");
	scanf("%d",&node1->data);
	node1->rlink=NULL;
	if (start==NULL)
	{
		start=node1;
		curr=node1;

	}else{
		curr->rlink=node1;
		curr=node1;
	}
}
void display(){
	temp=start;
	while(temp!=NULL){
               printf("%d\n",temp->data );
               temp=temp->rlink;
	} 

}
int inpos(int u,int a,int b,int o)
   {
	nodex=(struct node*)malloc(sizeof(struct node));
	zeus=(struct node*)malloc(sizeof(struct node));
	datemp=(struct node*)malloc(sizeof(struct node));
	nodex->data=b;
	if(u==1){ nodex->rlink=start;start=nodex;}
	else if(u==2){	curr->rlink=nodex;nodex->rlink=NULL;curr=nodex; }
	else if(u==3){ zeus=start;
	
	for(int z=1;z<=a-1;++z)
	{
		datemp=zeus->rlink;
		zeus=datemp;
	}
	
	if(zeus!=NULL)
	 {  nodex->rlink=zeus->rlink;
	    zeus->rlink=nodex;
	 }
	}
	
	return ++o;
}

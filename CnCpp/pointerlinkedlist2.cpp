#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};
struct node *now,*node1,*temp,*start=NULL,*node2,*curr;
void insert();
void display();
void insertpos(int,int);
int main(){
	int p,q,pos,val;
	printf("enter the number of values");
	scanf("%d",&p);
	for ( q = 0; q < p; q++)
	{
		insert();
		display();
	}
	cout<<"\nEnter at which position ? enter valid position between 0 and "<<p-1<<endl;
	cin>>pos;
	cout<<"\nWhat value : ";
	cin>>val;
	insertpos(pos,val);
}
void insert(){
	node1=(struct node*)malloc(sizeof(struct node));
	printf("enter the value");
	scanf("%d",&node1->data);
	node1->next=NULL;
	if (start==NULL)
	{
		start=node1;
		curr=node1;

	}else{
		curr->next=node1;
		curr=node1;
	}
}
void insertpos(int a,int b){
	node1=(struct node*)malloc(sizeof(struct node));
	for(int u = 0 ; u <= a ; u++ ){
	if(u==0)node1=start;
	else{
	node1->next=node1;	
	}}
	now=(struct node*)malloc(sizeof(struct node));
	if(node1==curr){
	curr->next=node1;curr=node1;}
	else{ now=node1;node1->data=b;node1->next=now;}
	node1->next=NULL;
	display();
}
void display(){
	temp=start;
	while(temp!=NULL){
               printf("%d\n",temp->data );
               temp=temp->next;
	} 

}


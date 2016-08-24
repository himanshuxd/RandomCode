#include<stdlib.h>
#include<stdio.h>

struct node{
	int data;
	struct node *next;
};
struct node *node1,*temp,*start=NULL,*node2,*curr;
void insert();
void display();
int main(){
	int p,q;
	printf("enter the number of values");
	scanf("%d",&p);
	for ( q = 0; q < p; q++)
	{
		insert();
		display();
	}
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
void display(){
	temp=start;
	while(temp!=NULL){
               printf("%d\n",temp->data );
               temp=temp->next;
	} 

}


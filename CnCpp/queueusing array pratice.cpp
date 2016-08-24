#include<stdio.h>
#include<conio.h>
#define MAX 5

int queue[MAX],front=-1,rear=-1;

void insert_element(){
	int i;
	printf("\nenter the element\n");
	scanf("%d",&i);
	if(front==0 && rear==MAX-1)
	printf("\n queue overflow occurs");
	else if(front==-1 && rear==-1){
		rear=front=0;
		queue[rear]=i;
	}
	else if(rear==MAX-1 && front!=0){
		rear=0;
		queue[rear]=i;
	}
	else{
		rear++;
		queue[rear]=i;
	}
}

void delete_element(){
	int q;
	if(front==-1)
	printf("queue underflow occurs");
	q=queue[front];
    if(front==rear){
		front=rear=-1;
	}
	else{
		if(front==MAX-1){
			front=0;
			printf("\ndeleted element is :%d",q);
			}
			else{
			front++;
			printf("\ndeleted element is :%d",q);
			}
	}
	
}

void display_element(){
	int i;
	if(front==-1){
		printf("\nno elements to display\n");
	}
	else{
		printf("\nthe elements in queue are:\n");
		for(i=front;i<=rear;i++){
			printf("\t %d",queue[i]);
		}
	}
}

void insert_element();
void delete_element();
void display_element();

int main(){
	int ch;
	while(1){
		printf("\n***the implementation of queue***\n");
		printf("\n1.press 1 for insertion of element\n2.press 2 for deletion of element\n3/press 3 for display of queue\n4.press 4 for exit\n");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert_element();
			break;
			case 2: delete_element();
			break;
			case 3: display_element();
			break;
			case 4: return 0;
			break;
			default: printf("wrong input");
		}
	}
}

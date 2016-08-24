#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node{
	  int data;
	  struct node *next;
};
struct node *node1,*start=NULL,*start1=NULL,*node2,*temp,*temp1,*ptr,*ptr1,*ptr2,*ptr3;

void insert_end(){
	node1=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data\n");
	scanf("%d",&node1->data);
	node1->next=NULL;
	if(start==NULL){
		start=node1;
	}else{
		ptr=start;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}ptr->next=node1;
	}
}
void insert_end1(){
	node2=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data\n");
	scanf("%d",&node2->data);
	node2->next=NULL;
	if(start1==NULL){
		start1=node2;
	}else{
		ptr1=start1;
		while(ptr1->next!=NULL){
			ptr1=ptr1->next;
		}ptr1->next=node2;
	}
}
void display(){
	temp=start;
	while(temp!=NULL){
		printf("\t%d\t",temp->data);
		temp=temp->next;
	}
}
void display1(){
	temp1=start1;
	while(temp1!=NULL){
		printf("\t%d\t",temp1->data);
		temp1=temp1->next;
	}
}
void delete_duplicate(){
	ptr=start;
	while(ptr->next!=NULL){
		ptr2=ptr->next;
		if(ptr->data==ptr2->data){
			ptr->next=ptr2->next;
		}ptr=ptr->next;
	}
}
void delete_duplicate1(){
	ptr1=start1;
	while(ptr1->next!=NULL){
		ptr3=ptr1->next;
		if(ptr1->data==ptr3->data){
			ptr1->next=ptr3->next;
		}ptr1=ptr1->next;
	}
}

void merge_list(){
	printf("\n for first list\n ");
	int p,q;
	printf("how many number of values you want to enter:");
	scanf("%d",&p);
	for(q=0;q<p;q++){
		insert_end();
		display();}
printf("\n for second list\n ");
	int w,e;
	printf("how many number of values you want to enter:");
	scanf("%d",&w);
	for(e=0;e<w;e++){
		insert_end1();
		display1();}
		printf("\nbefore merging\n");
		printf("\nlist1-> \t");
		display();
		printf("\n");
		printf("\nlist2-> \t");
		display1();
        delete_duplicate();
        delete_duplicate1();
        ptr=start;
        while(ptr->next!=NULL){
        	ptr=ptr->next;
		}ptr->next=start1;
		printf("\nafter mrging:\n");
		display();
}
void insert_end();
void insert_end1();
void display();
void display1();
void delete_duplicate();
void delete_duplicate1();
void merge_list();
int main(){
	merge_list();
}


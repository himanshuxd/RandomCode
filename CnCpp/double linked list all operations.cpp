#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node{
	  int data;
	  struct node *prev;
	  struct node *next;
};
struct node *node1,*node2,*start=NULL,*temp,*ptr,*node3,*ptr1;

void insert_end(){
	node1=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data\n");
	scanf("%d",&node1->data);
	node1->next=NULL;
	node1->prev=NULL;
	if(start==NULL){
		start=node1;
		node1->prev=start;
	}else{
		ptr=start;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}ptr->next=node1;
		node1->prev=ptr;
	}
}

void display(){
	temp=start;
	while(temp!=NULL){
		printf("\t%d\t",temp->data);
		temp=temp->next;
	}
}

void insert_beginning(){
	node2=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the value\n");
	scanf("%d",&node2->data);
	node2->next=NULL;
	node2->prev=NULL;
	if(start==NULL){
		start=node2;
		node2->prev=start;
	}else{
		node2->next=start;
		node2->prev=start;
		start->prev=node2;
		start=node2;
	}
}

void insert_afterposition(){
	node3=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the new value you want to insert\n");
	scanf("%d",&node3->data);
	node3->next=NULL;
	node3->prev=NULL;
	int count=1,pos,val;
	printf("\nenter the value for which after new value is inserted\n");
	scanf("%d",&val);

	printf("\nenter the position for which after new value is inserted\n");
	scanf("%d",&pos);
	ptr=start;
	while(ptr!=NULL && ptr->data!=val || count!=pos){
		
			ptr=ptr->next;
			count++;
		}if(ptr->data==val && count==pos){
			node3->next=ptr->next;
			node3->prev=ptr;
			ptr->next->prev=node3;
			ptr->next=node3;
		}

	
}

void insert_beforeposition(){
	node3=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the new value you want to insert\n");
	scanf("%d",&node3->data);
	node3->next=NULL;
	node3->prev=NULL;
	int count=1,pos,val;
	printf("\nenter the value for which before new value is inserted\n");
	scanf("%d",&val);

	printf("\nenter the position for which before new value is inserted\n");
	scanf("%d",&pos);
	ptr=start;
	while(ptr!=NULL && ptr->data!=val || count!=pos){
		    ptr1=ptr;
			ptr=ptr->next;
			count++;
		}if(ptr->data==val && count==pos){
			node3->next=ptr1->next;
			node3->prev=ptr1;
			ptr1->next=node3;
			ptr->prev=node3;
		}

	
}

void search(){
	int p,count=1,n=0;
    printf("\nenter the value you want to search for\n");
    scanf("%d",&p);
    ptr=start;
    while(ptr!=NULL){
    if(ptr->data!=p){
    	ptr=ptr->next;
	}
	else{
		printf("\n%d is found at position %d\n",p,count);
		ptr=ptr->next;
	    n=1;
    	}
    count++;
    }
	if(n==0){
    		printf("\nentered value did not found in list\n");
		}
		}
    		
void delete_beginning(){
	ptr=start;
	if(ptr==NULL)
	printf("list empty.deletion not possible");
	else{
		if(ptr->next==NULL){
		start=NULL;
		free(ptr);
	    }
		else{
			start=ptr->next;
			ptr->next->prev=start;
			free(ptr);
		}
	}
}

void delete_end(){
	ptr=start;
	while(ptr->next!=NULL){
		ptr1=ptr;
		ptr=ptr->next;
	}ptr1->next=NULL;
	free(ptr);
}

void delete_position(){
	int count=1,val,pos;
	printf("\nenter the value you want to delete\n");
	scanf("%d",&val);

	printf("\nenter the position of value you want to delete\n");
	scanf("%d",&pos);
	ptr=start;
	if(ptr->next==NULL && pos==1){
		start=NULL;
		free(ptr);
	}
	while(ptr!=NULL && ptr->data!=val || count!=pos){
		ptr1=ptr;
		ptr=ptr->next;
		count++;
	}if(ptr->data==val && count==pos){
		ptr1->next=ptr->next;
		ptr->next->prev=ptr1;
		free(ptr);
	}
}

void delete_beforeposition(){
	int count=1,val,pos;
	printf("\nenter the value in whch before value you want to delete\n");
	scanf("%d",&val);

	printf("\nenter the position of value in whch before value you want to delete\n");
	scanf("%d",&pos);
	ptr=start;
	if(ptr==start && pos==1){
		printf("\nno precedding value found deletion not possible\n");}else{
		
	while(ptr!=NULL && ptr->data!=val || count!=pos){
		ptr1=ptr;
		ptr=ptr->next;
		count++;
	}if(ptr->data==val && count==pos){
		ptr->prev=ptr1->prev;
		ptr1->prev->next=ptr1->next;
		free(ptr1);
	}
	}
	
}

void delete_afterposition(){
	int count=1,val,pos,n=0;
	printf("\nenter the value in whch suceeding value you want to delete\n");
	scanf("%d",&val);

	printf("\nenter the position of value in whch suceeding value you want to delete\n");
	scanf("%d",&pos);
	ptr=start;
		while(ptr!=NULL && ptr->data!=val || count!=pos){
		ptr=ptr->next;
	     count++;
	}if(ptr->next==NULL)
	printf("\nno suceeding element found,deletion not possible\n");
	else{
	
	if(ptr->data==val && count==pos){
		ptr1=ptr->next;
		ptr->next=ptr1->prev;
		ptr1->prev=ptr;
		free(ptr1);
		n=1;
	}
	
    }
    if(n==0){
    	printf("value not found");
	}
	}

void insert_end();
void insert_beginning();
void insert_afterposition();
void insert_beforeposition();
void display();
void search();
void delete_beginning();
void delete_end();
void delete_position();
void delete_beforeposition();
void deletion_aftervalue();
int main(){
	int p,q;
	printf("how many number of values you want to enter");
	scanf("%d",&p);
	for(q=0;q<p;q++){
		insert_end();
		display();
	}
	int ch;
	while(1){
		printf("\n1.press 1 for inserting value at end\n2.press 2 for inserting value at beginning\n3.press 3 for inserting value after a given value\n4.press 4 for inserting value before a given value\n5.press 5 for search an value\n6.press 6 for deletion of first element\n7.press 7 for deletion of last element\n8.press 8 for delete a value at any position\n9.press 9 for delete a precedding value at any position\n10.press 10 for delete a sucedding value at any position\n11.press 11 for exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert_end();
			display();
			break;
			case 2: insert_beginning();
			display();
			break;
			case 3: insert_afterposition();
			display();
			break;
			case 4: insert_beforeposition();
			display();
			break;
			case 5: search();
			display();
			break;
            case 6: delete_beginning();
            display();
			break;
            case 7: delete_end();
            display();
			break;
            case 8: delete_position();
            display();
			break;
            case 9: delete_beforeposition();
            display();
			break;
            case 10: delete_afterposition();
            display();
			break;
            case 11: exit(0);
			break;
			default: printf("invalid output");
		}
	}
	getch();
}

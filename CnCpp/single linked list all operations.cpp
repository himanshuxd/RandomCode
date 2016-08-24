#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node{
	  int data;
	  struct node *next;
};
struct node *node1,*node2,*start=NULL,*temp,*ptr,*node3,*node4,*ptr1,*ptr2,*ptr3,*ptr4;

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
	if(start==NULL){
		start=node2;
	}else{
		node2->next=start;
		start=node2;
	}
}



void insert_afterposition(){
	node3=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the new value you want to insert\n");
	scanf("%d",&node3->data);
	node3->next=NULL;
	int count=1,pos,val,n=0,m=0;
	printf("\nenter the value for which after new value is inserted\n");
	scanf("%d",&val);

	printf("\nenter the position for which after new value is inserted\n");
	scanf("%d",&pos);
	ptr=start;
	while(ptr!=NULL && ptr->data!=val || count!=pos){
		
			ptr=ptr->next;
		    count++;
							
		}		if(ptr->data==val && count==pos){
			node3->next=ptr->next;
			ptr->next=node3;
			
		}
		if(ptr==NULL && ptr->data!=val || count!=pos){
	
				printf("value not found");
				
				}/*else{
			printf("value not found");
		}/*
		if(ptr==NULL && ptr->data==val || count!=pos){
			printf("position you have entered for value not match");
			n=1;m=0;
		}
		if(ptr==NULL && ptr->data!=val || count==pos){
			printf("value not found at position");
			
		}
		if(ptr==NULL && ptr->data!=val || count!=pos){
			printf("entered value and position not found");
		}*/
		
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
		free(ptr);}
		else{
			start=ptr->next;
			free(ptr);
		}
	}
}


void delete_end(){
	ptr=start;if(ptr==NULL)
	printf("deletion not possible.list empty");
    if(ptr->next==NULL){
	start=NULL;
	free(ptr);
}
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
	if(ptr==NULL)
	printf("deletion not possible");
	if(ptr->next==NULL && pos==1){
		start=NULL;
		free(ptr);
	}
	if(ptr->next==NULL && pos==1){
		start=NULL;
		free(ptr);
	}
	while(ptr->next!=NULL && ptr->data!=val || count!=pos){
		ptr1=ptr;
		ptr=ptr->next;
		count++;
	}if(ptr->data==val && count==pos){
		ptr1->next=ptr->next;
		free(ptr);
	}
}


void reverse(){
	ptr=start;
	ptr1=start;
	ptr2=start;
	ptr=ptr->next->next;
	ptr1=ptr1->next;
	ptr2->next=NULL;
	ptr1->next=ptr2;
    while(ptr!=NULL){
    	ptr2=ptr1;
    	ptr1=ptr;
    	ptr=ptr->next;
    	ptr1->next=ptr2;
	}
	start=ptr1;
}
void maximum(){
	int p;
	ptr=start;
	p=ptr->data;
	if(ptr==NULL)
	printf("list empty.no maximum value exists");
	while(ptr!=NULL){
		if(ptr->data>p)
		{
			p=ptr->data;
		}
		ptr=ptr->next;
	}printf("maximum value in the list is %d",p);
}

void minimum(){
	int p;
	ptr=start;
	p=ptr->data;
	if(ptr==NULL)
	printf("list empty.no maximum value exists");
	while(ptr!=NULL){
		if(ptr->data<p)
		{
			p=ptr->data;
		}
		ptr=ptr->next;
	}printf("minimum value in the list is %d",p);
}

void sort(){
	int temp;
	ptr=start;
	while(ptr->next!=NULL){
	ptr1=ptr->next;
	while(ptr1!=NULL){
		if(ptr1->data<ptr->data){
			temp=ptr->data;
			ptr->data=ptr1->data;
			ptr1->data=temp;
		}
		ptr1=ptr1->next;
	}
	ptr=ptr->next;
}
}

void nodes(){
	int count=0;
	ptr=start;
	while(ptr!=NULL){
		ptr=ptr->next;
		count++;
	}printf("\nno of nodes in the linked list is %d\n",count);
}
void insertsort(){
	sort();int count=0;
	node4=(struct node*)malloc(sizeof(struct node));
	printf("enter the value:");
	scanf("%d",&node4->data);
	node4->next=NULL;
	ptr=start;
	if(ptr->data>node4->data){
		node4->next=ptr;
		start=node4;
		count=1;
	}
	while(ptr->next!=NULL && count==0){
		if(ptr->next->data>node4->data){
			node4->next=ptr->next;
			ptr->next=node4;
			count=1;
		}
	ptr=ptr->next;		
	}if(ptr->next==NULL)
		ptr->next=node4;
}
void delete_duplicate(){
	sort();
	ptr=start;
	while(ptr->next!=NULL){
		ptr2=ptr->next;
		if(ptr2->data>ptr->data){
			ptr=ptr->next;
		}else if(ptr2->data==ptr->data){
			
		while(ptr2->next!=NULL && ptr2->data!=ptr->data) {
				ptr3=ptr2;
				ptr2=ptr2->next;
					}if(ptr2->next==NULL && ptr2->data==ptr->data){
						ptr->next=NULL;
					}ptr->next=ptr3->next;
					ptr=ptr2;
				
}
}
}
void move(){
	int value,position,position1,count=1,c,n;
	printf("\nenter the value you want to move and its position\n");
	scanf("%d%d",&value,&position);
	ptr=start;
	if(ptr==NULL)
	printf("no elementsexists");
	if(ptr->data==value){
		ptr2=ptr;
		ptr4=ptr->next;
	printf("enter how many positions you want to move");
	scanf("%d",&n);
	for(c=0;c<=n;c++){
		ptr3=ptr2;
		ptr2=ptr2->next;
	}	ptr->next=ptr3->next;
	ptr3->next=ptr;
	start=ptr4;
	
	}else{
	while(ptr!=NULL && ptr->data!=value || count!=position){
		ptr1=ptr;
		ptr=ptr->next;
		count++;
	}ptr2=ptr;
	ptr4=ptr->next;
	if(ptr==NULL)
	printf("\nentered value doesnot exists\n");
	printf("enter how many positions you want to move");
	scanf("%d",&n);
	for(c=0;c<=n;c++){
		ptr3=ptr2;
		ptr2=ptr2->next;
	}
	ptr->next=ptr3->next;
	ptr3->next=ptr;
	ptr1->next=ptr4;
		
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
}

void insert_end();
void insert_beginning();
void insert_afterposition();
void display();
void search();
void delete_beginning();
void delete_end();
void delete_position();
void reverse();
void maximum();
void minimum();
void sort();
void nodes();
void insertsort();
void delete_duplicate();

int main(){
	int p,q;
	printf("how many number of values you want to enter:");
	scanf("%d",&p);
	for(q=0;q<p;q++){
		insert_end();
		display();
	}
	int ch;
	while(1){
		printf("\n1.press 1 for inserting value at end\n2.press 2 for inserting value at beginning\n3.press 3 for inserting value after a given value\n4.press 4 for search an value\n5.press 5 for deletion of first element\n6.press 6 for deletion of last element\n7.press 7 for delete a value at any position\n8.press 8 for reversing a linked list\n9.press 9 for finding maximum value\n10.press 10 for finding minimum value\n11.press 11 for sorting of values\n12.press 12 for counting number of nodes\n13.press 13 for insertion of element in sorted list\n14.press 14 for delete of duplicate of duplicate elements\n15.press 15 for exit");
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
			case 4: /*printf("\t\t\tnote: sorry,this operation is under construction\n");*/search();
			display();
			break;
            case 5: delete_beginning();
            display();
			break;
            case 6: delete_end();
            display();
			break;
            case 7: delete_position();
            display();
			break;
            case 8: reverse();
            display();
			break;
			case 9: maximum();
			break;
            case 10: minimum();
			break;
			case 11: sort();
			display();
			break;
			case 12: nodes();
			break;
			case 13: insertsort();
			display();
			break;
			case 14: delete_duplicate();
			display();
			break;
            case 15: move();
			display();
			break;
			case 16: exit(0);
			break;

			default: printf("invalid output");
		}
	}
	getch();
}

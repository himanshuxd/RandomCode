#include<stdio.h>
#include<conio.h>
void lowest(int [],int);
void highest(int [],int);
int main(){
	int i,j,a[20];
	while(1){
	printf("\nhow many numbers you want to enter in array\n");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("\nenter %d element:",(i+1));
		scanf("%d",&a[i]);
	}
	lowest(a,j);
	highest(a,j);
}
}
void lowest(int b[20],int j){
	int q,i,k=1;
	q=b[0];
	for(i=0;i<j;i++){
		if(b[i]<q){
		q=b[i];
		k=i+1;
	}
}
	printf("\nlowest number in array is %d and at location %d\n",q,k);
}
void highest(int b[20],int j){
	int q,i,k=1;
	q=b[0];
	for(i=0;i<j;i++){
		if(b[i]>q){
		q=b[i];
		k=i+1;
	}
}
	printf("\nhighest number in array is %d and at location %d\n",q,k);
}	


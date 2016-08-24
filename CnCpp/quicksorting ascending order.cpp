#include<stdio.h>
#include<conio.h>
void quicksort(int [],int ,int);
int main(){
	int i,j,temp,list[20],k;
	printf("enter the number of elements:");
		scanf("%d",&k);
	for(i=0;i<k;i++){
		printf("\nenter %d element:",i+1);
		scanf("%d",&list[i]);
	}printf("\nbefore sorting:\n");
	for(i=0;i<k;i++){
		printf("%d\t",list[i]);
	}
	quicksort(list,0,k-1);
		printf("\nafter sorting:\n");
	for(i=0;i<k;i++){
	printf("%d\t",list[i]);
}
return 0;
}
void quicksort(int list[],int low,int high){
	int pivot,i,j,temp;
	if(low<high){
		pivot=low;
		i=low;
		j=high;
		while(i<j){
			while(list[i]<=list[pivot] && i<=high)
			i++;
			while(list[j]>list[pivot] && j>=low)
			j--;
			if(i<j){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
		temp=list[j];
		list[j]=list[pivot];
		list[pivot]=temp;
		quicksort(list,low,j-1);
		quicksort(list,j+1,high);
	}
}


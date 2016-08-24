#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,temp,arr[20],k;
	printf("enter the number of elements:");
		scanf("%d",&k);
	for(i=0;i<k;i++){
		printf("\nenter %d element:",i+1);
		scanf("%d",&arr[i]);
	}printf("\nbefore sorting:\n");
	for(i=0;i<k;i++){
		printf("%d\t",arr[i]);
	}
	for(i=1;i<k;i++){
		temp=arr[i];
		j=i-1;
		while((temp>arr[j]) && (j>=0)){
			arr[j+1]=arr[j];
			j=j-1;
		}arr[j+1]=temp;
	}
	printf("\nafter sorting:\n");
	for(i=0;i<k;i++){
	printf("%d\t",arr[i]);
}
return 0;
}

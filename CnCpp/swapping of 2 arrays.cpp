#include<stdio.h>
#include<conio.h>
int main(){
	int a[20],b[20],j,k,i,c[20];
	while(1){
		printf("\nhow many values you want to enter in 1st array:");
		scanf("%d",&j);
		for(i=0;i<j;i++){
			printf("\nenter %d element",i+1);
			scanf("%d",&a[i]);
		}
		printf("how many values you want to enter in 2nd array:");
		scanf("%d",&k);
		for(i=0;i<k;i++){
			printf("\nenter %d element",i+1);
			scanf("%d",&b[i]);
		}
		printf("\nthe numbers you have entered in 1st array is:\n");
	for(i=0;i<j;i++){
		printf("%d\t",a[i]);
	}
	printf("\nthe numbers you have entered in 2nd array is:\n");
	for(i=0;i<k;i++){
		printf("%d\t",b[i]);
	}
	for(i=0;i<20;i++){
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nafter swapping two arrays");
	printf("\nthe numbers in 1st array is:\n");
	for(i=0;i<k;i++){
		printf("%d\t",a[i]);
	}
	printf("\nthe numbers in 2nd array is:\n");
	for(i=0;i<j;i++){
		printf("%d\t",b[i]);
	}
	}
}

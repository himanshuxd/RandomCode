#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,a[20];
	while(1){
	printf("\nhow many numbers you want to enter in array\n");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("\nenter %d element:",(i+1));
		scanf("%d",&a[i]);
	}
	printf("\nthe numbers you have entered in array is:\n");
	for(i=0;i<j;i++){
		printf("%d\t",a[i]);
	}
	printf("\nthe numbers after reversing:\n");
	for(i=j-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
}
}

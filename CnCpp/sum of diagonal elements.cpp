#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3],i,j,k=0;
	while(1){
	printf("\nenter the elements of 3x3 matrix in row wise fashion");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nenter %d row %d column element",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}printf("\nthe elements in the array is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			if(i==j)
			k=k+a[i][j];
		}
		printf("\n");
	}
	printf("\nthe sum of diagonal elements is %d",k);
}
	return 0;
}


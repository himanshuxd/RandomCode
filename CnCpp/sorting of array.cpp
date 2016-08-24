#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sorting(int *a,int n,int m){
	int l,i,j,min,temp;
	l=n*m;
	for(i=0;i<l;i++){
		min=*(a+i);
		for(j=0;j<l;j++){
			if(min<*(a+j)){
				min=*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=min;
			}
		}
	}
}
int main(){
	int a[3][3],i,j;
	while(1){
	printf("\nenter the elements of 3x3 matrix in row wise fashion");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nenter %d row %d column element",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}printf("\nthe elements in the array before sorting:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	sorting(*a,3,3);
	printf("\nthe array after sorting is :\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
	return 0;
}


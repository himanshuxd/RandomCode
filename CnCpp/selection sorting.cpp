#include<stdio.h>
#include<conio.h>
int findmax(int b[20], int q);
void exchange(int b[20], int q);

int main(){
	int i,j,k,arr[20],temp;
	while(1){
	printf("\nenter the number of elements:");
		scanf("%d",&k);
		if(k>20)
		printf("only 20 elements are possible");
		else{
	for(i=0;i<k;i++){
		printf("\nenter %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nbefore sorting:\n");
	for(i=0;i<k;i++)
		printf("%d\t",arr[i]);
		exchange(arr,k);
		printf("\nafter sorting:\n");
	for(i=0;i<k;i++){
	printf("%d\t",arr[i]);
}
	}
}
}
int findmax(int b[20], int q){
	int i,max=0;
	for(i=1;i<=q;i++){
		if(b[i]>b[max])
		max=i;
	}
	return(max);
}

void exchange(int b[20], int q){
	int temp,big,j;
	for(j=q-1;j>=1;j--){
		big=findmax(b,j);
		temp=b[big];
		b[big]=b[j];
		b[j]=temp;
	}
	return;
}
	
	


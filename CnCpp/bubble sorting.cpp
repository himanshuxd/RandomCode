#include<stdio.h>
#include<conio.h>


int main(){
	int i,j,k,arr[20],temp;
	while(1){
	printf("\nenter the number of elements:");
		scanf("%d",&k);if(k>20)
		printf("only 20 elements are possible");else{
	for(i=0;i<k;i++){
		printf("\nenter %d element:",i+1);
		scanf("%d",&arr[i]);
	}printf("\nbefore sorting:\n");
	for(i=0;i<k;i++){
		printf("%d\t",arr[i]);
	}
    for(i=0;i<k;i++){
    	for(j=0;j<(k-i-1);j++){
    		if(arr[j]>arr[j+1]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
printf("\nafter sorting:\n");
	for(i=0;i<k;i++){
	printf("%d\t",arr[i]);
}
}
}
}


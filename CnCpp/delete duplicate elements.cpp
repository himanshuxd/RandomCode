#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,a[20],k,q;
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
for(i=0;i<j;i++){
	for(k=i+1;k<j;){
		if(a[k]==a[i]){
			for(q=k;q<j-1;q++){
				a[q]=a[q+1];
			}
			j--;
			k=i+1;
		}else{
			k++;
		}
	}
}
printf("\n array with unique list is:\n");
for(i=0;i<j;i++){
		printf("%d\t",a[i]);
}
}
return 0;
}

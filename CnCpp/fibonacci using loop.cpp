#include<stdio.h>
#include<conio.h>
int main(){
	int c,first=0,second=1,next,n;
	while(1){
	printf("\nenter the number of terms:");
	scanf("%d",&n);
	for(c=0;c<n;c++){
		if(c<=1)
		next=c;
		else{
			next=first+second;
			first=second;
			second=next;
		}
	printf("%d\n",next);	
	}
	}
	return 0;
}

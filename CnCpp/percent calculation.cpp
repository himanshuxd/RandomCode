#include<stdio.h>
#include<conio.h>
void percent_cal();
void value();
main(){
		int ch;
	printf("\n1.press 1 for percent calculation\n2.press 2 for value calculation\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: percent_cal();
		break;
		case 2: value();
		break;
		default: printf("wrong input");
		break;
	}
	
}
	
	
	
	void percent_cal(){
	
	while(1){
		float x,y,percent;
		printf("enter resulting value");
		scanf("%f",&y);
		printf("enter old value");
		scanf("%f",&x);
		percent=y-x;
		percent=((percent/x)*100);
		printf("\nthe %f percent has increased\n",percent);
		percent=(y/x)*100;
		printf("\nthe %f is %f of %f value\n",y,percent,x);
		
	}
}



void value(){
	float x,y,percent;
	while(1){
	printf("enter the old value");
	scanf("%f",&x);
	printf("enter the percent");
	scanf("%f",&percent);
	y=(x*percent)/100;
	printf("\nthe resulting value of given percentage is %f\n",y);
	y=x+y;
	printf("\nafter adding percent the resulting value is %f\n",y);
    }
}


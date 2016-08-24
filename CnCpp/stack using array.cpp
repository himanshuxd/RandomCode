#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
#define size 5
struct stack {
   int s[size];
   int top;
} st;
 
int stfull() {
   if (st.top >= size - 1)
      return 1;
   else
      return 0;
}
 
void push(int item) {
   st.top++;
   st.s[st.top] = item;
}
 
int stempty() {
   if (st.top == -1)
      return 1;
   else
      return 0;
}
 
int pop() {
   int item;
   item = st.s[st.top];
   st.top--;
   return (item);
}
 
void display() {
   int i;
   if (stempty())
      printf("\nStack Is Empty!");
   else {
      for (i = st.top; i >= 0; i--)
         printf("\n%d", st.s[i]);
   }
}
 void dulpicate(){
 	int i,q,k;
 	if(stempty()){
 		printf("stack empty");
	 }else{
 	for(i=0;i<=st.top;i++){
	for(k=i+1;k<=st.top;){
		if(st.s[k]==st.s[i]){
			for(q=k;q<st.top-1;q++){
				st.s[q]=st.s[q+1];
			}
			st.top--;
			k=i+1;
		}else{
			k++;
		}
	}
}
printf("\n stack with unique list is:\n");
for(i=st.top;i<=0;i--){
		printf("%d\t",st.s[i]);
}

}
 }
int main() {
   int item, choice;
   char ans;
   st.top = -1;
 
   printf("\n\tImplementation Of Stack");
   while(1) {
      printf("\nMain Menu");
      printf("\n1.Push \n2.Pop \n3.Display \n4.exit");
      printf("\nEnter Your Choice");
      scanf("%d", &choice);
      switch (choice) {
      case 1:
         printf("\nEnter The item to be pushed");
         scanf("%d", &item);
         if (stfull())
            printf("\nStack is Full!");
         else
            push(item);
         break;
      case 2:
         if (stempty())
            printf("\nEmpty stack!Underflow !!");
         else {
            item = pop();
            printf("\nThe popped element is %d", item);
         }
         break;
      case 3:
         display();
         break;
       case 4: dulpicate();
         break;

      case 5:
         exit(0);
         break;
      }
      /*printf("\nDo You want To Continue?");
      ans = getche();*/
   } 
 
return 0;
}

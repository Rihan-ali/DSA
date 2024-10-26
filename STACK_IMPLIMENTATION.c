#include<stdio.h>
void pushh(int * stak,int *top,int d){
    *top=*top+1;
    stak[*top]=d;
}
void popp(int *stak,int *top){
    *top=*top-1;
}
void display(int *stak,int top){
    while(top!=-1){
        printf("%d ",stak[top]);
        top=top-1;
    }
}
int  main()
{
int stak[4],size=4,top=-1;
printf("Enter 1 for push :\n");
printf("Enter 2 for pop :\n");
printf("Enter 3 for display :\n");
int ch;
while (1){
printf("Enter your choice :");
scanf("%d",&ch);
switch (ch)
{
case 1:
if(top==size-1){
  printf("Stack is full{OVERFLOW}\n");

}
else {
int data;
printf("Enter element which you want to push into your stack :");
scanf("%d",&data);
pushh(stak,&top,data);
   }
    break;
case 2:
if(top==-1){
    printf("stak is empty {Underflow}");

}
else {
    popp(stak,&top);
}
break;
case 3:
display(stak,top);
    break;
default:printf("Wrong input :");
}
}
return 0;
}

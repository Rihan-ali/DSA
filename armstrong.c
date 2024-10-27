//program to check the given number is armstrong or not
#include<stdio.h>
int main()
{
    int n,rem,i,num,arm=0,number;
    printf("enter number n=");
    scanf("%d",&n);
    num=n;
 while(n!=0){
    rem=n%10;
   arm =arm+rem*rem*rem;
  n=n/10;
 
 } 
 if(num==arm){
 printf("number is armstrong\n");
 }
 else
 {
 printf("number is not armstrong\n");
 }
    
    return 0;
}
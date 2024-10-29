#include<stdio.h>
#include<limits.h>
int main()
{
    int c,r,i,j;
   int maxsum=INT_MIN;
   int idx;
//    int sum=0;
   
    printf("enter the number of of row=");
    scanf("%d",&r);
    printf("Enter the number of column=");
    scanf("%d",&c);
    printf("enter the element of matrix=");
     int ar[r][c];
   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
   for(i=0;i<r;i++)
   {
    int sum=0;
    for(j=0;j<c;j++)
    {
     sum=sum+ar[i][j];
    }
    if(maxsum<sum)
    {
        maxsum=sum;
        idx=i;
    }
   }
   printf("%d is maximum sum at the row of %d",maxsum,idx);
    return 0;
}
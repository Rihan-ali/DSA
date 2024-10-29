#include<stdio.h>
int main()
{
    int ar[]={10,20,30};
    int sum=ar[0]+ar[1]+ar[2];
    printf("sum=%d\n",sum);
    if(ar[0]>ar[1])
    {
        if(ar[1]>ar[2])
        {
        printf("%d is the greatest number\n",ar[0]);
        }
        else{
            printf("%d is the largest number\n",ar[2]);
        }
    }
        if(ar[1]>ar[2])
        {
            printf("%d is the gretest number",ar[1]);
            
        }
        else{
            printf("%d is the gretest number ",ar[2]);
        }
    return 0;
}
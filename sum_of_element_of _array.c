#include<stdio.h>
int main()
{
    int marks[5],sum=0;
    for(int i=0;i<5;i++)
    {
        printf("eEnter the marks of student=");
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    printf("sum of amarks=%d",sum);
    return 0;
}
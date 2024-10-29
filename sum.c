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
    int percentage=sum/5;
    printf("sum of amarks=%d\n",sum);
    printf("percentage =%d\n",percentage);
    if(percentage>=33)
    {
        printf("student passed\n");
    }
    else
    {
        printf("student is fail\n");
    }
    return 0;
}
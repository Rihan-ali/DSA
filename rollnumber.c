#include<stdio.h>
int main()
{
    int marks[10];
    for(int i=0;i<10;i++)
    {
        printf("eneter the number of  roll number %d student=",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
            printf("%d roll number student marks is lesss then 35 and marks is %d\n",i,marks[i]);
        }
    }
    return 0;
}
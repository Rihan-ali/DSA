#include<stdio.h>
int main()
{
     arr[3][3]={1,7,8,2,9,2,9,1,2,11,4,7,3,6,3,3};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%ld ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;

}
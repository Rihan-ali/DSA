#include<stdio.h>
int main()
{
    int ar[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    //transpose the code
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int temp=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=temp;
        }
    }
    printf("Transpose matrix\n");
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    printf("\nrotated matrix\n");
    for(int i=0;i<n;i++)
    {
        int k=n-1;
        int j=0;
        while(j<k)
        {
            int temp=ar[i][j];
            ar[i][j]=ar[i][k];
            ar[i][k]=temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
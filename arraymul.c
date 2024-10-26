#include<stdio.h>
int main()
{
    int arr[2][2]={2,4,3,2};
    int br[2][2]={7,1,3,2};
    int res[2][2];
    int k;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            res[i][j]=0;
            for(k=0;k<2;k++){
                res[i][j] +=arr[i][k]*br[k][j];
            }
        }
    }





    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
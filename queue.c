// Online C compiler to run C program online
#include<stdio.h>
#include <cstdlib>
void insert(int queue[],int size,int *front,int *rear,int data)
{
    if(*rear==size-1) {
        printf("Queue is full :");
    }
    else {
        if(*rear==-1 && *front==-1){
            *rear=*rear+1;
            *front=*front+1;
            queue[*rear]=data;
        }
        else{
            *rear=*rear+1;
              queue[*rear]=data;
        }
    }
}
void display(int queue[],int *front,int *rear)

{
    if(*front==-1 || *rear==*front){
        printf("There no any elemnt to display :\n");
    }
    else {
    for(int i=*front;i<=*rear;i++) {
        printf("%d ",queue[i]);
    }
    }
}
void deletee(int queue[],int *rear,int *front) {
    if(*rear==-1) {
        printf("Queue is Empty :");
    }
    else {
        if(*rear==*front) {
            printf("Queue is empty :");
            *rear=*front=-1;
        }
        else {
            *front=*front+1;
            printf("Element is deleted :\n");
        }
    }
}
int main() {
    int size;
    printf("Enter size of queue :");
    scanf("%d",&size);
    
    int queue[size],front=-1,rear=-1;
    int ch;
    printf("Enter 1 for insert :\n");
    printf("Enter 2 for delete :\n");
    printf("Enter 3 for display \n:");
    printf("Enter 4 for exit :\n");
    while(1) {
        printf("\nEnter Your Choice :");
        scanf("%d",&ch);
    switch(ch){
        case 1:
        {
        int d;
        printf("Enter number whuch you want to insert into queue :");
        scanf("%d",&d);
          insert(queue,size,&front,&rear,d);
        break;
        }
        case 2:
        {
        deletee(queue,&rear,&front);
        break;
        }
        case 3:
        {
        display(queue,&front,&rear);
        break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        printf("\n Wrong Input :\n");
    }
    }
    return 0;

}
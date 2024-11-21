#include<stdio.h>
#include<stdlib.h>
//Function for insert a element into the queue
void insertion(int queue[],int *rear,int *front,int size){
    int d;
    printf("Enter element which you want to insert :");
    scanf("%d",&d);
    if(*rear==size-1){
        printf("QUEUE IS FULL \n");
        
    }
    else {
        if(*rear==-1 && *front==-1){
            *rear=*rear+1;
            *front=*front+1;
            queue[*rear]=d;
        }
        else{
            *rear=*rear+1;
             queue[*rear]=d;
        }
    }
    
}

//Function for delete element from the queue
void deletion(int queue[],int *rear,int *front){
    if(*front==-1 && *rear==-1){
        printf("QUEUE IS FULL :");
    }
    else{
        if(*front==*rear){
            printf("Empty :");
            *rear=*front=-1;
        }
        else{
            *front=*front+1;
            
        }
    }
}
//Function for traverse the tree and display alll element
void display(int queue[],int rear,int front){
    if(rear==-1 && front==-1){
        printf("THERE NO ANY ELEMENT TO DISPLAY:\n");
        
    }
    else
    while(front!=rear){
        printf("%d ",queue[front]);
        front=front+1;
    }
}
int main() {
    int queue[5];
    int size=5,rear=-1,front=-1;
    printf("Enter 1 for insertion :\n");
    printf("Enter 2 for deletion :\n");
    printf("Enter 3 for traversal :\n");
    printf("Enter 4 for Exit :\n");
    int ch;
    while(1) {
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch) {
            case 1:{
                insertion(queue,&rear,&front,size);
                break;
            }
            case 2:{
                deletion(queue,&rear,&front);
                break;
            }
            case 3:{
                display(queue,rear,front);
                break;
            }
            case 4:{
                exit(0);
            }
            default: printf("Wring Input :\n");
        }
    }
    return 0;
}

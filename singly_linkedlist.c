
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node * createnode() {
            struct node *add;
            add=(struct node*)malloc(sizeof(struct node));
            int d;
            printf("Enter element :");
            scanf("%d",&add->data);
            add->next=NULL;
}
void insert_start() {
    struct node *rec;
    rec=createnode();
        if(start==NULL){
            start=rec;
        }
        else {
            rec->next=start;
            start=rec;
        }
}
void insert_end() {
    struct node *rec;
    rec=createnode();
    if(start==NULL) {
        start=rec;
    }
    else
    {
        struct node *temp;
        temp=start;
        while(temp->next!=NULL) {
            temp=temp->next;
        }   
            temp->next=rec;
    }
}
void insert_mid() {
        int d;
        printf("ENTER PLACE AFTER WHICH ELEMENT YOU WANT TO INSERT :");
        scanf("%d",&d);
       /* struct node *trav;
        trav=start;
        int count=0;
        while(trav!=NULL) {
            count++;
            trav=trav->next;
        }
        */
            struct node *rec=createnode();
        if(start==NULL) {
            start=rec;
        }
        else {
            struct node *temp;
            temp=start;
            while(temp->next->data!=d) {
                temp=temp->next;
            }
            struct node *j;
            j=temp->next;
            temp->next=rec;
            rec->next=j;
        }
}
void delete_start() 
{
   if(start==NULL) {
       printf("There is no any element for Delete :");
       
   }
   else {
       struct node *j;
       j=start;
       start=start->next;
       j->next=NULL;
       free(j);
   }
   

}
void delete_end() {
   if(start==NULL) {
       printf("List is Empty :");
       
   }
   else {
       struct node *temp;
       temp=start;
       while(temp->next->next!=NULL)
       {
           temp=temp->next;
       }
       struct node *y;
       y=temp->next;
       temp->next=NULL;
       free(y);
   }
}
void delete_mid() {
    int data;
    printf("Enter element which you want to delete :");
    scanf("%d",&data);
        if(start==NULL) {
            printf("THERE IS NO ANY ELEMENT TO DELETE :");
        }
    else
    {
        struct node *temp;
        temp=start;
        while(temp->next->data!=data)
        {
            temp=temp->next;
        }
        struct node *j;
        j=temp->next;
        temp->next=temp->next->next;
        j->next=NULL;
        free(j);
    }
}
void display() {
   if(start==NULL) {
    printf("LSIT IS EMPTY :\n");
   }
   else {
    struct node *temp;
    temp=start;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
   }

}
void search(int d){
    int pos=0,flag=0;
    if(start==NULL){
        printf("UNDERFLOW");
    }
    else{
        struct node *temp=start;
        while(temp!=NULL){
            
            if(temp->data==d){
                flag=1;
                break;
            }
            pos++;
            temp=temp->next;
        }
    }
    if(flag==0){
        printf("NOT PRESENT :");
    }
    else{
        printf("PRESENT %d",pos);
    }
}

int main() {
    int ch;
    printf("Enter 1 for insert start :\n");
    printf("Enter 2 for insert at end :\n");
    printf("Enter 3 for insert middle :\n");
    printf("Enter 4 for delete start :\n");
    printf("Enter 5 for delete from end :\n");
    printf("Enter 6 for delete middle :\n");
    printf("Enter 7 for display :\n");
    printf("Enter 8 for Exit :\n");
    while(1) {
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert_start();
            break;
        case 2:
           insert_end();
           break;
        case 3:
            insert_mid();
            break;
        case 4:
            delete_start();        
            break;;
        case 5:
            delete_end();
            break;
        case 6:
            delete_mid();
            break;
        case 7:
            display();
            break; 
        case 8:
            exit(0);
            break;
        case 9:
        int d;
        printf("ENTER DATA TO SEARCH :");
        scanf("%d",&d);
            search(d);
            break;
        default:
            printf("\nWrong Input :\n");
        }
    }
    return 0;

}

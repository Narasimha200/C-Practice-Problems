#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*start=NULL,*t,*q;
   void insertAtBegin();
   void deleteAtBeg();
   void display();

int main(){
    int ch;
    while(1){
        scanf("%d",&ch);
        switch(ch){
            case 1:insertAtBegin();
            break;
            case 2:deleteAtBeg();
            break;
            default:printf("Wrong input\n");
            break;
        }
    }
}
void insertAtBegin(){
    int num;
    t = (struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&num);
    t->data=num;
    if(start==NULL){
        t->next=NULL;
        start=t;
    }
    else{
        t->next=start;
        start=t;
    }
}
void deleteAtBeg(){
    if(start==NULL){
        printf("Noelement ");
        return;
    }
    q=start;
    start=start->next;
    printf("Deleted element is %d",q->data);
    free(q);
}


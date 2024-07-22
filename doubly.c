#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
}*head=NULL;
void create(int n){
    struct node *temp,*last;
    head=(struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    int k;
    scanf("%d",&k);
    head->data=k;
    head->next=NULL;
    head->prev=NULL;
    last=head;
    for(int i=1;i<n;i++){
        printf("enter data\n");
        int m;
        scanf("%d",&m);
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=m;
        temp->next=NULL;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}

void display(struct node *p){
   
   for(int i=0; i<5;i++)
   p=p->next;
    while(p!=NULL){
        printf("%d ",p->data);
    p=p->prev;
    }
}
void insert(struct node *p,int x,int y){
   for(int i=0; i<x-1;i++)
    p=p->next;

struct node *t;
t=(struct node *)malloc(sizeof(struct node));
t->data=y;
t->prev=p;
t->next=p->next;
p->next->prev=t;
p->next=t;


}


int main(){
    printf("enter number of nodes\n");
    int n;
    scanf("%d",&n);
    create(n);
  //  display(head);
    insert(head,2,10);
     display(head);
    return 0;

}
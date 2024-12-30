#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*first = NULL,*second = NULL,*third=NULL;

void Create(int a[],int n){
    struct node *t,*last;
    int i;
    first = (struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t= (struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

void Create2(int a[],int n){
    struct node *t,*last;
    int i;
    second = (struct node*)malloc(sizeof(struct node));
    second->data=a[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++){
        t= (struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}


void display(struct node *p){

    printf("\n");
    while(p){
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n\n");
}

void concading(struct node *p,struct node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}

void merge(struct node *p,struct node *q){
    struct node *last=NULL;

}

int main(){
    int a[]={1,7,34,38,89};
    int b[]={8,12,23,34,45};
   
    Create(a,5);
    Create2(b,5);
     display(first);
    display(second);
concading(first,second);

   
   // display(third);
   

    return 0;
}

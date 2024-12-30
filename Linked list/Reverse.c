#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*first = NULL;

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

void display(struct node *p){
    printf("\n");
    while(p){
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n\n");
}

void r1(struct node *p){        //lec 28
    int i=0;
    int a[10];
    p=first;
    while(p!=NULL){
        a[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p!=NULL){
        p->data=a[i--];
        p=p->next;
    }
}

void r2(struct node *p){
    struct node *q,*r;
    p=first;
    q=NULL;
    r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
first=q;
}

void rr(struct node *q,struct node *p){
    if(p!=NULL){
        rr(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}


int main(){
    int a[]={1,2,3,4,5};
   
    Create(a,5);
    display(first);
    //r1(first);
   // r2(first);
rr(NULL,first);
    display(first);

    return 0;
}

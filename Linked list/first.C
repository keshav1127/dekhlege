#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next; 
}*first = NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
   
for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}

}

void display(struct Node *p){
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;
    }
}

void displayR(struct Node *p){
    if(p!=NULL){
        
        displayR(p->next);
        printf("%d\t",p->data);
    }
}

void count(struct Node *p){
    int count = 0;
    while (p!=NULL){
        count++;
        p=p->next;
    }
    printf("\nCount is %d\n",count);
}

int countR(struct Node *p){
   if(p){
    return countR(p->next) + 1;
   }
   else 
   return 0;
}

int add(struct Node *p){
    int sum =0;
    while (p!=NULL)
    {
        sum= sum + p->data;
        p=p->next;
    }
   
    
    return sum;
}

int addR(struct Node *p){
   if(p){
    return addR(p->next) + p->data;
   }
   else 
   return 0;
}

int max(struct Node *p){
    int max=0;
    while(p){
        if(p->data>max)
        max=p->data;
        p=p->next;
    }
    return max;
}
 
int maxR(struct Node *p){
    int x=0;
    if(p==0)
    return 0;
    x=maxR(p->next);
    return x>p->data?x:p->data;
}

struct Node* search(struct Node *p,int key){
    struct Node *q;
    while(p!=NULL){
        if (key == p->data)
        {
            q->next=p->next;
            p->next=first;
            first = p;
            return p;
        }
        q=p;
      p=p->next;  
    }
    return NULL;
}

struct Node* rSEARCH(struct Node *p , int key){
    if(p==NULL)
    return 0;
    if(p->data==key)
    return p ;
    return rSEARCH(p->next , key);
}

int main(int argc, char const *argv[])
{
    int A[]={1,2,67,6,7};
struct Node *temp ;
    create(A,5);
   // display(first);
//    printf("%d", countR(first));
//    printf("\n%d", addR(first));
//    printf("\n%d", add(first));
 //  printf("\n%d", max(first));   //shift + alt + down
  // printf("\n%d", maxR(first));   
    temp = search(first,6);   
    //temp = rSEARCH(first,99);   
if (temp == NULL)
{
    printf("item not found");
}
else 
printf("\n found\n");

display(first);
    return 0;

}

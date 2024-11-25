#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void show(int a[])
{
    int i;
    for (i=0;i<5;i++)
    printf("%d \t",a[i]);
}
void lshift(int a[])
{
    int i,t;
    t=a[0];
    for(i=1;i<5;i++)
   a[i-1]=a[i];
    //for(i=0;i<5;i++) method 2
     //a[i]=a[i+1]
    a[4]=t;
}
int main()
{
    int a[5]={1,2,3,4,5};
    show(a);
    lshift(a);
    printf("\n");
    show(a);

    return 0;
}

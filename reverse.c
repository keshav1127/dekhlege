#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct array
{
int a[10];
};
void show(struct array arr )
{ 
  int i;
  for(i=0;i<10;i++)
  {
    printf("%d \t",arr.a[i]);
  }
}

void m(struct array *arr)
{int i,j;
   int *b;
   b=(int* )malloc(sizeof(struct array));
for (i=9,j=0;i>=0;i--,j++)
{
    b[j]=arr->a[i];
}
for (i=0;i<10;i++)
{
    arr->a[i]=b[i];
}

}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void m2(struct array *arr)
{int i,j;
    for(i=0,j=9;i<j;i++,j--)
    {
        swap(&arr->a[i],&arr->a[j]);
    }
}

int main()
{
    struct array ab = {1,2,3,4,5,6,7,8,9,10};
    show(ab);
    // printf("\n after rev m1\n");
    // m(&ab);
    // show (ab);
     printf("\n after rev m2\n");
     m2(&ab);

     show (ab);
    return 0;
}

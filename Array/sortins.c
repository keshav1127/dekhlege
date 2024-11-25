#include <stdio.h>
int i;
struct array
{
    int a[10];
    int length;
};
void display(struct array arr)
{
    for (i=0;i<arr.length;i++)
    {
        printf("%d \t",arr.a[i]);
    }
    printf("\n");
}
void input(struct array *arr,int n)
{
    // int n;
    // printf("\nenter n:");
    // scanf("%d\n",&n);
    printf("Enter elements:\n");
    arr->length=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr->a[i]);
        arr->length=arr->length+1;
    }
}
void insert (struct array *arr , int x)
{
    int i=arr->length-1;
    while(arr->a[i]>x)
    {
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}
void main()
{
   struct array a1;
   input(&a1,3);
   display(a1);
insert(&a1,4);
display(a1);
}
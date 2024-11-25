#include<stdio.h>
void main()
{
    int i,j;
    int a[10]={-6,3,-8,10,4,-7,-9,12,-4,2};
    i=0;
    j=9;
     int k;
    for(k=0;k<10;k++)
    {printf("%d \t",a[k]);}
    printf("\n");
    while(i<j)
    {
        while(a[i]<0 && i<j)
        {i++;}
        while(a[j]>=0 && i<j){j--;}
        if(i<j)
        {
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }

    for(k=0;k<10;k++)
    {printf("%d \t",a[k]);}
}
#include <stdio.h>
void show(int s[],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",s[i]);
    }
}
void main()
{
    int i=0,j=0,k,c[10];
    int a[5]={3,8,16,20,25};
    int b[5]={4,10,12,22,23};
    show(a,5);
    show(b,5);
    for(k=0;k<10;k++)
    {
        if(i>=5)
        {
            c[k]=b[j];
            j++;
        }
        else if(j>=5)
        {
            c[k]=a[i];
            i++;
        }
        else if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    show(c,10);
} 
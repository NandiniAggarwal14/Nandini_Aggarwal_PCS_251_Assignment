#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p,min,max;
    printf("\nEnter size : ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    min=*p;
    max=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max)
        max=*(p+i);
        if(*(p+i)<min)
        min=*(p+i);
    }
    printf("\nMax is %d and min is %d",max,min);
    return 0;
}
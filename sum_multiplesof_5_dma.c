#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p,sum=0;
    printf("\nEnter size : ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)%5==0)
        sum=sum+*(p+i);
    }
    printf("\nSum of multiples of 5 is: %d",sum);
    return 0;
}
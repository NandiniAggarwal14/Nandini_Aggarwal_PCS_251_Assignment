#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,i,j,tmp;
    printf("\nEnter number of array elements: ");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        tmp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=tmp;
    }
    printf("\nThe new array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}
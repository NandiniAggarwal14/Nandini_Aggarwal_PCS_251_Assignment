#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ce=0,co=0,*p,n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",(p+i));
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        ce++;
        else
        co++;
    }
    free(p);
    printf("number of odd elements are %d\n",co);
    printf("number of even elements are %d\n",ce);
    return 0;
}
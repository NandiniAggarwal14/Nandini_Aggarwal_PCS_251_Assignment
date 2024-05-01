#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,*a,new,*tmp;
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d",(a+i));
    }
    new = 2 * n;
    tmp = realloc(a,new * sizeof(int));
    a = tmp; 
    printf("Enter additional %d elements:\n", new - n);
    for (i = n; i < new; i++) 
    {
        scanf("%d", (a+i));
    }
    printf("Array elements are:\n");
    for (i = 0; i < new; i++)
    {
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}

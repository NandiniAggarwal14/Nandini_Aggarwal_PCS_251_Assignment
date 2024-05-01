#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, new,i,*a;
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i<n; i++) 
    {
        scanf("%d", (a+i));
    }
    printf("Enter the new size of the array: ");
    scanf("%d", &new);
    a = (int *)realloc(a, new * sizeof(int));
    printf("Enter additional %d elements:\n", new-n);
    for (i = n; i < new ; i++) 
    {
        scanf("%d",(a+i));
    }
    printf("Array elements:\n");
    for (i = 0; i < new; i++) 
    {
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}

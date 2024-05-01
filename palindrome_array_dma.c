#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *a,n,i,num,rev,original,rem;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", (a+i));
    }
    printf("Palindrome numbers in the array:\n");
    for (i = 0; i < n; i++) 
    {
        num =*(a+i);
        rev = 0, original = num;
        while (num != 0) 
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if (original == rev) 
        {
            printf("%d\n", original);
        }
    }
    free(a);
    return 0;
}

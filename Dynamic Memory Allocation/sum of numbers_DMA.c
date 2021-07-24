Program to input n integer numbers and find the sum of the numbers using DMA

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,counter,*arr,sum=0;
    printf("Enter the total number of elements you want to enter:- \n");
    scanf("%d", &counter);
    arr = (int *)malloc(counter * sizeof(int));
    for (i = 0; i < counter; i++)
    {
        printf("Enter element %d:- \n", (i+1));
        scanf("%d", arr+i);
        sum += *(arr + i);
    }
    printf("sum is %d \n", sum);
    free(arr);
    return 0;
}

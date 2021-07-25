#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,*p,*q;
    printf("Enter the total number of elements you want to enter:- \n");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    q = (int*)malloc(n*sizeof(int));
    if(p==NULL || q==NULL)
{
    printf("Insufficient Memory Existing");
    return 0;
}
    for (i = 0; i < n; i++)
    {
        printf("Enter the Integers:- \n");
        scanf("%d",p+i);
        *(q+((n-1)-i))=*(p+i);
    }
        for(i=0; i<n; i++)
    	printf("%d %d\n",*(p+i),*(q+i));
    free(p);
    free(q);
}

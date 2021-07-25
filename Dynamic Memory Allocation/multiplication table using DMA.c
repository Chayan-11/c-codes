Input n integers and print the multiplication table of each integer using DMA

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,*p;
    printf("Enter the total number of elements you want to enter:- \n");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL){
    printf("Insufficient Memory Existing");
    return 0;
}
    for (i = 0; i < n; i++)
    {
        printf("Enter the Integers:- \n");
        scanf("%d", p+i);
    }
    for(i=0; i<n; i++)
    {
    	for(j=1; j<=10; j++)
    	printf("%dx%d=%d\t\n",*(p+i),j,*(p+i)*j);
	}
    free(p);
}

// OR 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,m,*p;
    printf("Enter the total number of elements you want to enter:- \n");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL)
{
    printf("Insufficient Memory Existing");
    return 0;
}
    for (i = 0; i < n; i++)
    {
        printf("Table of %d is:- \n",*(p+i));
        for(j=1; j<=10; j++)
        {
        	m=*(p+i)*j;
    	printf("%dx%d=%d\t\n",*(p+i),j,m);
	}
}
    free(p);
}

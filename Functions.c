Question:- Simple program to show structure of function

#include <stdio.h>

    int sum (int a, int b);
    int main (void)
    {
        int total;
		printf("\n Function : a simple structure of function\n");
        total = sum (5, 6);
        printf ("The total is :  %d\n", total);
        return 0;
    }

    int sum (int a, int b)
    {
	    int s;
		s=a+b;
        return s;
    }

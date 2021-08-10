// Output to the following snippet:- 

#include<stdio.h>
int main()
{
	printf("C to it that C survives\n");
	main();
	return 0;
}

// Output:- Prints C to it that C survives Infinite times in the screen with return value 3221225725
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Output to the following snippet:- 

#include<stdio.h>
int main()
{
	int i=0;
	i++;
	if(i<=5)
	{
		printf("C adds wings to your thoughts\n");
		exit(0);
		main();
	}
	return 0;
}

// Output:- C adds wings to your thoughts
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number using recursive function

#include<stdio.h>
int binary(int); //function prototype declaration
int main()
{
	int n;
	printf("Enter any integer:- \n");
	scanf("%d",&n);
	binary(n);  //function call
	return 0;
}
int binary(int n)
{
	int r;
	r=n%2;
	n=n/2;
	if(n==0)
	{
		printf("The Binary equivalent of the decimal integer is :- %d",r);
		return(r);
	}
		else
		binary(n); //recursive call
		printf("%d",r);
}

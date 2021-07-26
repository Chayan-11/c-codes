//Output of the following snippet:-

#include<stdio.h>
void display();
int main()
{
	printf("Learn C\n");
	display();
	return 0;
}
void display()
{
	printf("Followed by cpp,c#,java and python!\n");
}

Output:-
  
Learn C
Followed by cpp,c#,java and python!  
  
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
// output of the following snippet:-
  
#include<stdio.h>
void display();
int main()
{
	printf("Learn C\n");
	display();
	return 0;
}
void display()
{
	printf("Followed by cpp,c#,java and python!\n");
	main();
}
    
Output:- 
 
Learn C
Followed by cpp,c#,java and python!
.
.
.
The statement runs for a approx infinite times before stopping. 

Process exited after 23.63 seconds with return value 3221225725    

// Program to demonstrate nesting of structures

#include<stdio.h>
struct employee
{
	char fn[10],ln[10];
};

struct empsal
{
	struct employee ee;
	int b, d, t, h, tot;
};

struct empsal e;
void in()
{
	printf("Enter the first name of the employee :- \n");
	gets(e.ee.fn);
	printf("Enter the last name of the employee :- \n");
	gets(e.ee.ln);
	printf("Enter the salary of the employee :- \n");
	scanf("%d",&e.b);
	e.d = e.b * .3;
	e.t = e.b * .4;
	e.h = e.b * .5;
	e.tot = e.b + e.d + e.t + e.h;
}
void out()
{
	printf("First name = %s\n Last name = %s\n Basic Pay = %d\n DA = %d\n TA = %d\n HRA = %d\n Total Salary = %d\n", e.ee.fn, e.ee.ln, e.b, e.d, e.t, e.h, e.tot);
}

int main()
{
	in();
	out();	
}

/* Output :- 

Enter the first name of the employee :-
Chayan
Enter the last name of the employee :-
Debbarma
Enter the salary of the employee :-
98000
First name = Chayan
Last name = Debbarma
Basic Pay = 98000
DA = 29400
TA = 39200
HRA = 49000
Total Salary = 215600

*/

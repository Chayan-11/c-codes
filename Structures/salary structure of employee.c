/* Program to display the salary structure of an employee. Enter the name and basic salary, DA, TA, HRA would be calculated as 60, 50, 40% of basic salary respectively.
Calculate the total salary and display the same.*/

#include<stdio.h>
struct employee
{
	char n[20];
	int b,d,t,h,total;
};
struct employee emp;
void add()
{
	printf("Enter the name:- \n");
	gets(emp.n);
	printf("Enter the salary:- \n");
	scanf("%d",&emp.b);
	emp.d = emp.b * .6;
	emp.t = emp.b * .5;
	emp.h = emp.b * .4;
	emp.total = emp.b + emp.d + emp.t + emp.h; 
}

void disp()
{
	printf("%s %d %d %d %d %d",emp.n, emp.b, emp.d, emp.t, emp.h, emp.total);
}
int main()
{
	add();
	disp();
	return 0;
}

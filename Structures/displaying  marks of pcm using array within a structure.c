/* Enter the name, marks of P,C,M for 10 students. Calculate the total and average and display all of the above with individual grades using array with a structure*/

#include<stdio.h>
struct student
{
	char n[10][30];
	int p[10], c[10], m[10];
	int total[10], avg[10];
};

struct student stu;
in()
{
	int i;
	for(i=0; i<10; i++)
	{
		printf("Enter the name:- \n");
		gets(stu.n[i]);
		fflush(stdin);
		printf("Enter the marks:- \n");
		scanf("%d %d %d", &stu.p[i],&stu.c[i],&stu.m[i]);
		stu.total[i] = stu.p[i] + stu.c[i] + stu.m[i];
		stu.avg[i] = stu.total[i]/3;
		fflush(stdin);
	}
}

out()
{
	int i;
	for(i=0; i<10; i++)
	{
		printf("%s %d %d %d %d %d\n",stu.n[i],stu.p[i],stu.c[i],stu.m[i],stu.total[i],stu.avg[i]);
		if(stu.avg[i]>=60 && stu.avg[i]<=100)
		printf("A");
		else
		if(stu.avg[i]>=45 && stu.avg[i]<=59)
		printf("B");
		else
		if(stu.avg[i]>=33 && stu.avg[i]<=44)
		printf("C");
		else
		printf("Failed");
	}
}
int main()
{
	in();
	out();
}

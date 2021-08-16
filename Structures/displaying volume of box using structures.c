//Program to display the volume of box using structures

#include<stdio.h>
struct box
{
	int w, h, d, vol;
};
struct box bb;
int in()
{
	printf("Enter the dimensions:- \n");
	scanf("%d %d %d", &bb.w, &bb.h, &bb.d);
	bb.vol = bb.w * bb.h * bb.d;
	return 0;
}
int out()
{
	printf("%d * %d * %d = %d", bb.w, bb.h, bb.d, bb.vol);
	return 0;
}
int main()
{
	in();
	out();
}

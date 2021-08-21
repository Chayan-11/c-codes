/* Enter the product name, product code, per unit price, total price, date of manufacture, date of expiry for 10 different products. 
Also, create a function "Search" to display the status of a particular product. */


#include <stdio.h>
struct product 
{
 char pn[10][10], pc[10][10], doM[10][10], doE[10][10];
 int pup[10], qty[10], tot_price[10];
};

struct product pro;
void in()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("Enter the Product name:- \n");
		gets(pro.pn[i]);
		fflush(stdin);
		printf("Enter the product code, date of manufacturing, date of expiry :- \n");
		gets(pro.pc[i]);
		fflush(stdin);
		gets(pro.doM[i]);
		fflush(stdin);
		gets(pro.doE[i]);
		fflush(stdin);
		printf("Enter the product quantity, per unit price:- \n");
		scanf("%d %d",&pro.qty[i], &pro.pup[i]);
		pro.tot_price[i] = pro.qty[i] * pro.pup[i];
		fflush(stdin);
	}
}

void out()
{
	int n;
	for(int i = 0; i < 10; i++)
	printf("%s %s %s %s %d %d %d\n", pro.pn[i], pro.pc[i], pro.doM[i], pro.doE[i], pro.qty[i], pro.pup[i], pro.tot_price[i]);
}

void search()
{
	char code[10];
	int i, a=0;
	printf("Enter the code you want to search:- \n");
	gets(code);
	for(i = 0; i < 10; i++)
	if(strcmp (code, pro.pc[i]) == 0)
	{
		printf("%s %s %s %s %d %d %d\n", pro.pc[i], pro.pn[i], pro.doM[i], pro.doE[i], pro.qty[i], pro.pup[i], pro.tot_price[i]);
		a++;
	}
	if(a == 0)
	printf("%s is not found\n", code);
}

int main()
{
	in();
	out();
	search();
}

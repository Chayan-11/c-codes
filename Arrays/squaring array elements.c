#include<stdio.h>
int main(){

	int i,n, a[1000];
	printf("Enter array size :- ");
	scanf("%d",&n);
	printf("Enter the array :- ");
	for (i = 0; i < n; i++)
	scanf("%d", &a[i++]);
	for (i = 0; i < n; printf("%d ", a[i]*a[i++]));
}

Program to input any number and check which of them is greater

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	printf("Enter two numbers :- \n");
	scanf("%d %d",&a,&b);
	if (a>b)
		printf("%d is greater than %d",a,b);
	else
		printf("%d is greater than %d",b,a);
	}

Program to input any number and print its multiplication table

#include<iostream>
using namespace std;

int main()
{
     int n,i;
     i=scanf("%d",&n)-1;
     while(++i<11)
     printf("%dx%d=%d\n",n,i,n*i);
     return 0;
}

Program to swap numbers without using temporary variable

#include <iostream>
using namespace std;

int main()
{
    
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

Program to check whether given number is prime or not
	
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	isPrime(11) ? cout << " true\n" : cout << " false\n";
	isPrime(15) ? cout << " true\n" : cout << " false\n";
	return 0;
}

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

Program Given Number is equal to its Reverse or Not

#include<iostream>
using namespace std;
int main()
{
    int num, orig, rev=0, rem;
    cout<<"Enter the Number: ";
    cin>>num;
    orig = num;
    while(num>0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    if(orig==rev)
        cout<<"\nThis Number is equal to its Reverse";
    else
        cout<<"\nThis Number is not equal to its Reverse";
    cout<<endl;
    return 0;
}

Program to check number is Even or Odd

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:- ";
    cin>>n;
    if(n%2==0)
        cout<<"\nIt is an Even Number.";
    else
        cout<<"\nIt is an Odd Number.";
    cout<<endl;
    return 0;
}

Program to check whether given character is an Alphabet or Not

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        cout<<endl<<ch<<" is an Alphabet";
    else
        cout<<endl<<ch<<" isn't an Alphabet";
    cout<<endl;
    return 0;
}

Program to check whether given year is leap year or not
	
#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter the Year: ";
    cin>>yr;
    if((yr%4==0) && (yr%100!=0))
        cout<<"\nIt is a Leap Year";
    else if(yr%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
    cout<<endl;
    return 0;
}

Program to find sum of digits of a number using While loop
#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum=0;
    cout<<"Enter the Number: ";
    cin>>num;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    cout<<"\nSum of Digits = "<<sum;
    cout<<endl;
    return 0;
}

Program to find the arithmetic mean of user input numbers

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float arr[50],s=0,mean;
    cout<<"How many numbers you want to enter:- ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number:- ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        s=s+arr[i];
    }
    mean = s/n;
    cout<<"\nArithmetic Mean = "<<mean;
    cout<<endl;
    return 0;
}

Program to find the factorial of a number

#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1;
    cout<<"Enter the number:- \n";
    cin>>n;
    for(i=n; i>=1; i--)
        f=f*i;
    cout<<"\nFactorial = "<<f;
    cout<<endl;
    return 0;
}

Program to find the perimeter of a square using functions

#include<iostream>
using namespace std;
float perOfSquare(float);
int main()
{
    float l;
    cout<<"Enter the Length of Square:- \n";
    cin>>l;
    cout<<"\nPerimeter = "<<perOfSquare(l);
    cout<<endl;
    return 0;
}
float perOfSquare(float l)
{
    return (4*l);
}

Program to find the area of a square using functions

#include<iostream>
using namespace std;
float areaOfSquare(float);
int main()
{
    float l,area;
    cout<<"Enter the Length of Square:- \n";
    cin>>l;
    area = areaOfSquare(l);
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
float areaOfSquare(float l)
{
    return (l*l);
}

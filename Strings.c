#Program to input any string and find the length of the string without using library functions

#include <stdio.h>
int main()
{
    char n[100];
    int i,l=0;
    printf("Enter the string:- \n");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
        l++;
    printf("Length of the string %s is %d",n,l);
    return 0;
}

#Program to input any string and find the length of the string without blank spaces in case of alpha numeric and special characters

#include <stdio.h>
int main()
{
   char n[100];
   int i,l=0,b=0;
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++){
    if((n[i]>=65 && n[i]<=90) || (n[i]>=97 && n[i]<=122))
   l++;
   else
    if(n[i]==' ')
    b++;
}
   printf("%d %d",l,b);
    return 0;
}

#Program to input any string and print all the characters of the string in reverse 

#include <stdio.h>
int main()
{
    int i,l=0;
    char n[1000];
    printf("Enter the string:- \n");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
        l++;
    for(i=l-1;i>=0;i--)
        printf("%c",n[i]);
    return 0;
}

#Program to input any string and find the length of the string without blank spaces

#include <stdio.h>
int main()
{
   char n[100];
   int i,lwb=0,b=0;
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
    if(n[i]==' ')
   b++;
   else
    lwb++;

   printf("%d %d",lwb,b);
    return 0;
}

#Program to input any string and count the number of vowels, consonants and blank space in it

#include <stdio.h>
int main()
{
   char n[100];
   int i,v=0,c=0,w,b=0;
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
   {
       if((n[i]>=65 && n[i]<=90) || (n[i]>=97 && n[i]<=122))
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
        v++;
        else
        c++;
       if(n[i]==' ')
        b++;
   }
   printf("\nThe number of words are:- %d\n The number of vowels are:- %d\n The number of consonants are:- %d",b+1,v,c);
    return 0;
}

#Program to input any string and print each word in different line

#include <stdio.h>
int main()
{
   int i;
   char n[1000];
   printf("Enter the string:- \n");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
   {
       printf("%c\n",n[i]);
       if(n[i]==' ')
       {
           printf("\n");
       }
   }
    return 0;
}

#Program to input any string and count how many upper case characters, lower case characters and digits are present in the string

#include <stdio.h>
int main()
{
   int i,u=0,l=0,d=0;
   char n[1000];
   printf("Enter the string:- \n");
   scanf("%s",&n);
   for(i=0;n[i]!='\0';i++)
   if(n[i]>=65 && n[i]<=90)
    u++;
   else
    if(n[i]>=97 && n[i]<=122)
    l++;
   else
    if(n[i]>=48 && n[i]<=57)
    d++;
   printf("The number of upper case characters are:- %d\n The number of lower case characters are:- %d\n The number of digits are:- %d",u,l,d);
}

#Program to input any string and if it's in lower case then convert it into upper case and vice-versa

#include <stdio.h>
int main()
{
  int i;
  char n[1000];
  printf("Enter the string:- \n");
  scanf("%s",n);
  for(i=0;n[i]!='\0';i++)
    if(n[i]>=65 && n[i]<=90)
    n[i]+=32;
  else
    if(n[i]>=97 && n[i]<=122)
    n[i]-=32;
  printf("%s",n);
    return 0;
}

#Program to input any string and replace all the vowels by the character 'x'

#include <stdio.h>
int main()
{
 int i;
 char n[1000];
 printf("Enter the string:- \n");
 scanf("%s",n);
 for(i=0;n[i]!='\0';i++)
 {
    if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U')
    {
     n[i]='x';
    }
 }
 printf("\nNew String is:- %s\n",n);
  return 0;
}

#Program to input any string and print the output as per given format:-

If input is INDIA then print

I
IN
IND
INDI
INDIA

#include <stdio.h>
int main()
{
    char n[1000];
    int i,j;
    printf("Enter any string:- \n");
    gets(n);
    for(i=0;n[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",n[j]);
        printf("\n");
    }
}

#Program to input any string and print the output as per given format:-
If input is INDIA then print

A
AI
AID
AIDN
AIDNI

#include <stdio.h>
int main()
{
    char n[100];
    int i,j,l=0;
    printf("Enter any string:- \n");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
        l++;
        for(i=l-1;i>=0;i--)
    {
        for(j=l-1;j>=i;j--)
        printf("%c",n[j]);
        printf("\n");
    }
}

#Program to input any string and print the output in the given format as given below:-
If input is INDIA then print:-
    
A
II
DDD
NNNN
IIIII

#include <stdio.h>
int main()
{
    char n[100];
    int i,j,l=0;
    printf("Enter any string:- \n");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
        l++;
        for(i=l-1;i>=0;i--)
    {
        for(j=l-1;j>=i;j--)
        printf("%c",n[i]);
        printf("\n");
    }
}

#Program to input any string and search the frequency of a particular character

#include <stdio.h>
int main()
 {
    char n[1000],ch;
    int l=0;
    printf("Enter a string:- \n");
    fgets(n,sizeof(n),stdin);
    printf("Enter a character to find its frequency:- \n");
    scanf("%c", &ch);
    for(int i=0;n[i]!='\0';++i)
        {
        if (ch==n[i])
            ++l;
        }
    printf("Frequency of %c = %d", ch,l);
    return 0;
}

#Program to input any string and check whether it is palindrome or not

#include <string.h>
int main()
{
    char s[1000];
    int i,n,c=0;
    printf("Enter  the string:- \n");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
      if(s[i]==s[n-i-1])
    	c++;
 	}
 	  if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
    return 0;
}

#Program to print the following pattern:-

    1
   232
  34543
 4567654
567898765
        
#include<stdio.h>
int main()
{
    int n,s,x,y=0,c=0,c1=0;
    printf("Enter the number of rows to show the number pattern:- \n");
    scanf("%d",&n);
    for(x=1;x<=n;++x)
    {
        for(s=1;s<=n-x;s++)
        {
            printf(" ");
            ++c;
        }
        while(y!=2*x-1)
        {
            if(c<=n-1)
            {
                printf("%d",x+y);
                ++c;
            }
            else
            {
                ++c1;
            printf("%d",(x+y-2*c1));
            }
            ++y;
        }
        c1=c=y=0;
        printf("\n");
    }
    return 0;
}        

#Program to create one hollow diamond

        *
      *   *
     *     *
    *       *
   *         *
  *           *
 *             *
  *           *
   *         *
    *       *
     *     *
      *   *
        *

#include <stdio.h>
int main()
{
    printf("Enter how many lines to be printed:- \n");
    int n,x,y,s=1,k;
    scanf("%d",&n);
    for(x=0;x<=n;x++)
    {
        for(y=n;y>x;y--)
            printf(" ");
        printf(" * ");
        if(x>0)
        {
            for(k=1;k<=s;k++)
                printf(" ");
            s+=2;
            printf(" * ");
        }
        printf("\n");
    }
    s-=4;
    for(x=0;x<=n-1;x++)
    {
        for(y=0;y<=x;y++)
            printf(" ");
        printf(" * ");
        for(k=1;k<=s;k++)
            printf(" ");
        s-=2;
        if(x!=n-1)
            printf(" * ");
        printf("\n");
    }
    return 0;
}

#Program to print the following pattern:-

1        1
12      21
123    321
1234  4321
1234554321
    
#include<stdio.h>
int main()
{
    int n,x,y,k;
    printf("Enter the number of rows to show the number pattern:- \n");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n;y++)
        {
           if(y<=x)
            printf("%d",y);
           else
            printf(" ");
        }
        for(y=x;y>=1;y--)
        {
            if(y<=x)
                printf("%d",y);
            else
                printf(" ");
        }
        printf("\n");
    }
       return 0;
}    

#Program to concatanate two different strings

#include<stdio.h>
#include<string.h>
int main()
{
	char n[]={"Chayan"};
	char m[100];
	printf("Enter any string:- ");
	scanf("%s",m);
	strcat(n,m);
	strcat(n,"Debbarma");
	printf("%s",n);
}

Program to copy one string from source to destination

#include<stdio.h>
int main()
{
 char n[]={"Ram"};
 char m[100],s[100],p[100],q[100];
 printf("Enter the string:- \n");
 gets(m);
 strcpy(s,n);
 strcpy(p,m);
 strcpy(q,"Chayan");
 printf("%s %s %s %s %s",n,m,s,p,q);
 return 0;
}

Using library functions, Input any string and find the length of the string

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100];
	int l;
	printf("Enter string:- \n");
	gets(n);
	l=strlen(n);
	printf("length of %s is %d",n,l);
}

Program to count the number of upper case, lower case and digits by entering any string using macro function

#include<stdio.h>
#define up if (n[i]>=65 && n[i]<=90)
#define lw if (n[i]>=97 && n[i]<=122)
#define dig if (n[i]>=47 && n[i]<=58)
main()
{
	char n[' '];
	int i,u=0,l=0,d=0;
	printf("Enter any string:- \n");
	gets(n);
	for(i=0;n[i]!='\0';i++)
	{
		up u++;
		else
		lw l++;
		else
		dig d++;
	}
	printf("%d %d %d\n",u,l,d);
	return 0;
}

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


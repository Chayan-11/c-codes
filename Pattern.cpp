Print the half-pyramid pattern using stars

*
* *
* * *
* * * *
* * * * *
* * * * * *

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

Print the inverted half-pyramid pattern using stars

* * * * * *
* * * * *
* * * *
* * *
* *
*

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=i;j<6;j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

Print the Full Pyramid pattern using stars

          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int i,s,k=0;
    for(i=1;i<=6;i++)
    {
        for(s=1;s<=(6-i);s++)
            cout<<"  ";
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
                                 // OR 
                        //use the following code

#include<iostream>
using namespace std;
int main()
{
    int i,s,j;
    for(i=1;i<=6;i++)
    {
        for(s=6;s>i;s--)
            cout<<" ";
        for(j=0;j<i;j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

Print the inverted full pyramid pattern using stars

* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
     
#include<iostream>
using namespace std;
int main()
{
    int i,s,j;
    for(i=1;i<=6;i++)
    {
        for(s=1;s<i;s++)
            cout<<" ";
        for(j=i;j<=6;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}    

Print star pattern that looks like triangle or half-pyramid

          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *

#include<iostream>
using namespace std;
int main()
{
    int i,j,s=10;
    for(i=0;i<6;i++)
    {
        for(j=0;j<s;j++)
            cout<<" ";
        s=s-2;
        for(j=0;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

Print Pyramid Pattern of Stars in given size

#include<iostream>
using namespace std;
int main()
{
    int i,s,r_s,k=0;
    cout<<"Enter the Number of Rows:- \n";
    cin>>r_s;
    cout<<"\nPyramid of "<<r_s<<" Rows or Lines:\n";
    for(i=1;i<=r_s;i++)
    {
        for(s=1;s<=(r_s-i);s++)
            cout<<"  ";
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

Print the following pattern of numbers

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
    
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=0;i<6;i++)
    {
        n=1;
        for(j=0;j<=i;j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}    

Print the following pattern of numbers

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
    
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}    

Print the following diamond pattern of stars

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

#include<iostream>
using namespace std;
int main()
{
    int i,j,r,s;
    cout<<"Enter the Number of Rows:- \n";
    cin>>r;
    s=r-1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=s;j++)
            cout<<" ";
            s--;
        for(j=1;j<=(2*i-1);j++)
            cout<<"*";
        cout<<endl;
    }
        s=1;
    for(i=1;i<=(r-1);i++)
    {
        for(j=1;j<=s;j++)
            cout<<" ";
            s++;
        for(j=1;j<=(2*(r-i)-1);j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

Print the following diamond pattern using numbers

    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
    
#include<iostream>
using namespace std;
int main()
{
    int i,j,r,s,n=1;
    cout<<"Enter the Number of Rows:- \n";
    cin>>r;
    s=r-1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=s;j++)
            cout<<" ";
        s--;
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<n;
            n++;
        }
        cout<<endl;
        n=1;
    }
    s=1;
    for(i=1;i<=(r-1);i++)
    {
        for(j=1;j<=s;j++)
            cout<<" ";
        s++;
        for(j=1;j<=(2*(r-i)-1);j++)
        {
            cout<<n;
            n++;
        }
        cout<<endl;
        n=1;
    }
    cout<<endl;
    return 0;
}

Print pascal triangle pattern using functions 

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
    
#include<iostream>
using namespace std;
long int fact(int);
int main()
{
    int i,c;
    for(i=0; i<5; i++)
    {
        for(c=4; c>i; c--)
            cout<<" ";
        for(c=0; c<=i; c++)
            cout<<fact(i)/(fact(c)*fact(i-c))<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
long int fact(int n)
{
    int i,f=1;
    for(i=1; i<=n; i++)
        f=f*i;
    return f;
}    

Print Floyds triangle pattern

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

#include<iostream>
using namespace std;
int main()
{
    int i,j,n=1;
    for(i=0; i<5; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}

Print Floyds triangle pattern as per users choice

#include<iostream>
using namespace std;
int main()
{
    int i,j,n=1,r_s;
    cout<<"Enter Row Size:- \n";
    cin>>r_s;
    cout<<"\nFloyd's Triangle of "<<r_s<<" Lines:-\n";
    for(i=0; i<r_s; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}

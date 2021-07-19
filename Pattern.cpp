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

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


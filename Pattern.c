Question:-
  
*
**
***
****
*****

Ans:-
  
#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i<5; i++){
            for(int j=0; j<=i; j++){
             cout <<"*";
            }
    cout << endl;
}
    cout << endl;
    return 0;
}

Question:-
  
*****
****
***
**
*

Ans:-

#include <iostream>
using namespace std;

int main()
{
    for(int i=5; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
} 

Question:- 
  
54321
5432
543
54
5

Ans:-
  
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=5; j>=i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}  

Question:-
  
    *
  * * *
* * * * *

Ans:-
  
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=(3-i); j++)
            cout <<"  ";
            
        for(int k=1; k<=((2*i)-1); k++)
            cout <<"* ";
            
        cout << endl;
    }    
    return 0;
}

Question:- 
  
  *
    *
      *
        *
          *
          
  Ans:-
  
 #include <stdio.h>
 int main()
 {
    int i,j;
    for(i=1;i<=5;i++){
        printf("*\n");
         for(j=1;j<=i;j++)
            printf(" ");
    }
    return 0;
}   
    

Program to convert Decimal number to Binary number

#include<iostream>
using namespace std;
int main()
{
    int d_n,b_n[20],i=0;
    cout<<"Enter the Decimal Number:- \n";
    cin>>d_n;
    while(d_n!=0)
    {
        b_n[i] = d_n%2;
        i++;
        d_n = d_n/2;
    }
    cout<<"\nEquivalent Binary Number:- ";
    for(i=(i-1); i>=0; i--)
        cout<<b_n[i];
    cout<<endl;
    return 0;
}

Program to convert Decimal number to Octal number 

#include<iostream>
using namespace std;
int main()
{
    int d_n,o_n[50],i=0;
    cout<<"Enter any Decimal number:- \n";
    cin>>d_n;
    while(d_n!=0)
    {
        o_n[i]=d_n%8;
        i++;
        d_n=d_n/8;
    }
    cout<<"\nEquivalent Octal Value = ";
    for(i=(i-1);i>=0;i--)
        cout<<o_n[i];
    cout<<endl;
    return 0;
}

Program to convert Decimal number to Hexadecimal number

#include<iostream>
using namespace std;
int main()
{
    int d_n,r,i=0;
    char h_n[50];
    cout<<"Enter the Decimal Number:- \n";
    cin>>d_n;
    while(d_n!=0)
    {
        r=d_n%16;
        if(r<10)
            r=r+48;
        else
            r=r+55;
        h_n[i]=r;
        i++;
        d_n=d_n/16;
    }
    cout<<"\nEquivalent Hexadecimal Value:- \n";
    for(i=i-1;i>=0;i--)
        cout<<h_n[i];
    cout<<endl;
    return 0;
}

Program to convert binary number to decimal number

#include<iostream>
using namespace std;
int main()
{
    int b_n,d_n=0,i=1,r;
    cout<<"Enter any Binary Number:- \n";
    cin>>b_n;
    while(b_n!=0)
    {
        r=b_n%10;
        d_n= d_n+(r*i);
        i=i*2;
        b_n=b_n/10;
    }
    cout<<"\nEquivalent Decimal Value = "<<d_n;
    cout<<endl;
    return 0;
}

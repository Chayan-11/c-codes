1) Program to reverse a given string using functions

#include<bits/stdc++.h>
using namespace std;
void reverse(string str)    //using functions
{
	for(int i=str.length()-1;i>=0;i--)
	cout<<str[i];
}
int main(void)
{
	string s="LearningALanguage";
	reverse(s);
	return 0;
}

2) Program to reverse a string using reverse() function 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str = "LearningALanguage";
	reverse(str.begin(),str.end());  //Using inbuilt “reverse” function: There is a direct function in “algorithm” header file for doing reverse
        cout<<str;                      // Reverses elements in [begin, end]
	return 0;                      //void reverse (BidirectionalIterator begin, BidirectionalIterator end);
}   
	   

3) Program to reverse a string using functions

#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& Str)
{
   int n = Str.length();
   for(int i=0;i<n/2;i++)
   swap(Str[i],Str[n-i-1]);	//swaping the characters starting from the two corners
}

int main()
{
	string Str = "LearningALanguage";
	reverseStr(Str); 
	cout<<Str;
	return 0;
}

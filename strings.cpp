Program to reverse a given string using functions

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

Program to reverse a string using reverse() function 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str = "LearningALanguage";
	reverse(str.begin(),str.end());    //using reverse() in-built function
	cout<<str;
	return 0;
}

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

4) Program to change every letter in a given string with the letter following it in the alphabet // (i.e. a becomes b, p becomes q, z becomes a and so on)

#include<iostream>
#include<string>
using namespace std;
string letterexchange(string str) 
{
    int char_code;
	
	for (int x = 0; x < str.length(); x++)
	{
		char_code = int(str[x]);

		if (char_code == 122)
		{
			str[x] = char(97);
		}
		else if (char_code == 90)
		{
			str[x] = char(65);
		}
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
		{
			str[x] = char(char_code + 1);
		}
	
	}

	return str;
}

int main() 
{
	cout << "Original String was: Learning"; 
	cout << "\nNew String is:- " << letterexchange("Learning");
	return 0;
}

Program to capitalize first letter of each word of a given string

#include <iostream>
#include <string>
using namespace std;
string Capitalize_first_letter(string text) 
{
   for (int x = 0; x < text.length(); x++)
	{
	        if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x-1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}
          return text;
}

int main() 
{
	cout << Capitalize_first_letter("what's your learning curve?");
	cout << "\n" << Capitalize_first_letter("code daily to sharpen your mind");
	return 0;
}

Program to find the largest word in a given string

#include <iostream>
using namespace std;
string longestWordInSentence(string str) {
    int words = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            words++;
        }
    }
    words += 1;  // words = 5
    string strWords[words];
    short counter = 0;
    for (short i = 0; i < str.length(); i++) {
        strWords[counter] += str[i];
        if (str[i] == ' ') {
            counter++;
        }
    }
    int sizeArray = sizeof(strWords) / sizeof(strWords[0]);  

    int longest = strWords[0].length(); 
    string longestWord = "";           

    for (int i = 0; i < sizeArray; i++) {  
        if (strWords[i].length() > longest) {
            longest = strWords[i].length();
            longestWord = strWords[i];  
        }
    }

    return longestWord; 
}

int main() {
    string x = "I love solving algorithms";
    cout << longestWordInSentence(x);
    return 0;
}

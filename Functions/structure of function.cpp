/* Program to declare the function and call the function */

#include<iostream>
using namespace std;
void myfunction(); //function prototype declaration

int main()
{
	myfunction(); //function calling
	return 0;
}

void myfunction() //function definition
{
	cout<<"Declaring and calling a function along with function definition\n"; 
}

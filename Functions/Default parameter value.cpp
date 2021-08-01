//Program to demonstrate default parameter value

#include <iostream>
#include <string>
using namespace std;
void function(string country="Japan")
{
	cout << country << "\n"; 
}

int main()
{
	function("Russia");
	function("Brazil");
	function("Italy");
	function();
	function("India");
	return 0;
}

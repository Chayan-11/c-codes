//Demonstrate multiple parameter passing function

#include <iostream>
#include <string>
using namespace std;
void new_function(string func_name, int n)
{
	cout << func_name << " Stokes," << n << "years old.\n"; 
}
int main()
{
	new_function("Maria",23);
	new_function("Lyndaa",35);
	new_function("Sylvia",21);
	return 0;
}

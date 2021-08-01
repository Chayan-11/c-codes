//Program to demonstrate argument and parameter passing

#include <iostream>
#include <string>
using namespace std;
void myFunction(string func_name) 
{
  cout << func_name << " Stokes\n";
}

int main() 
{
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anjana");
  return 0;
}

//Demonstrate function overloading

#include <iostream>
using namespace std;
int plusFuncInt(int x, int y)
{
  return x + y;
}

double plusFuncDouble(double x, double y) 
{
  return x + y;
}

int main()
{
  int n1=plusFuncInt(8, 5);
  double n2 = plusFuncDouble(4.3, 6.26);
  cout << "Int value:- " << n1 << "\n";
  cout << "Double value:- " << n2;
  return 0;
}

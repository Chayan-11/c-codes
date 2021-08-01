// Demonstrate pass by reference function 

#include <iostream>
using namespace std;
void swap_numbers(int &x, int &y)
{
  int z = x;
  x = y;
  y = z;
}

int main() 
{
  int first_num = 10;
  int second_num = 20;
  cout << "Before swapping:- " <<"\n";
  cout << first_num <<"\t" << second_num << "\n";
  swap_numbers(first_num, second_num);
  cout << "After swapping:- " <<"\n";
  cout << first_num <<"\t" << second_num << "\n";
  return 0;
}

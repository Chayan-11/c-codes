//Program to demonstrate simple for loop in arrays

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string cars[4] = {"Volkswagen", "BMW", "Ford", "jaguar"};
  for(int i = 0; i < 4; i++) 
  {
    cout << cars[i] << "\n";
  }
  return 0;
}

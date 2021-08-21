//Program to store details of multiple employees using array of structures


/*We are declaring a structure "employee" to store details of an employee like name, age and salary.
Then we declare an array of structure employee named "employees" of size 10, to store details of multiple employees.
*/


#include <stdio.h>
struct employee 
{
 char n[100];
 int age;
 float salary;
};
 
int main()
{
   struct employee employees[10];
   int i, index, no_of_emp, totalSalary;
    
   printf("Enter Number of Employees = \n");
   scanf("%d", &no_of_emp);
    
   //Storing employee detaisl in structure array 
   
   for(i = 0; i < no_of_emp; i++)
   { 
       printf("Enter Name, Age and Salary of Employee = \n");
       scanf("%s %d %f", &employees[i].n, &employees[i].age, &employees[i].salary);
   }
    
   // Calculating average salary of an employee 
   
   for(totalSalary = 0, index = 0; index < no_of_emp; index++)
   {
       totalSalary += employees[index].salary;
   }
    
   printf("Average Salary of an Employee = %f\n", (float)totalSalary/no_of_emp);
   return 0;
}

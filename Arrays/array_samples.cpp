//Program to find the sum of all the elements in a 2D array

#include<iostream>
using namespace std;
int main()
{
	int row, column;
	cout<<"Enter the row size of the matrix:- \n";
	cin>>row;
	cout<<"Enter the column size of the matrix:- \n";
	cin>>column;
	int matrix[row][column];
	int i,j;
	cout<<"Enter the matrix element:- \n";
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			cin>>matrix[i][j];
		}
	}
	int sum=0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			sum=sum+matrix[i][j];	
	    } 
	}
	cout<<"Sum of the given matrix elements are:- "<<sum;
}

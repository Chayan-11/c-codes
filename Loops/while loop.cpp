Program to print the sum of given arrays

#include<iostream>
#include<vector>
int main()
{
	std::vector<int>numbers={1,2,3,4,5,6,7,8,9,10};
	int sum=0,i=0;
	while(i<numbers.size())
	{
		sum+=numbers[i];
        i++;
	}
	std::cout<<"Sum is: "<<sum<<std::endl;
	return 0;	
}

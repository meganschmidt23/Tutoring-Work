#include <iostream>
using namespace std;
int main()
{
	//Declaring your req. variables
	int n, i, j;

	//Prompt user for input
	cout<<"Enter a positive integer: ";
	cin>>n;
	cout<<"\n";
	j = 1;
	//Using while loop
	while (j <= n)
	{
		i = 1;

		while(i <= n)
		{
			cout<<i*j;
			cout<<"\t";
			i++;
		}
		j++;
		cout<<"\n";
	}
	return 0;
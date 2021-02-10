/*Write a program that reads a positive integer, n,
* and prints a nxn square chess board shape. That 
* is a nxn square with an alternating pattern of 
* squares in two colors. In this question, instead 
* of two colors, we will use two symbols ‘X’ and ‘O’. 
*/
#include <iostream>
using namespace std;

int main() {
	// declare variable n for user input
	int n;
	// initializa the two different X and O character strings
	char charX = 'X';
	char charO = 'O';

	cout << "Please enter a positive integer: " << endl;

	//Get value from user
	cin >> n;

	//Displaying board
	for (int row = 1; row <= n; row++){
		//Check if row is odd
		// If yes, then print X first
		if(row%2 == 1){
			for(int columnOdd = 1; columnOdd <= n; columnOdd++){
				//Alternating XO pattern
				if (columnOdd%2 == 1){
					cout << charX;
				}
				else{
					cout << charO;
				}
			}
		}
		else{
			//Row is even, so begin with O
			for(int columnEven = 1; columnEven <= n; columnEven++){
				if(columnEven%2 == 1){
					cout << charO;
				}
				else{
					cout << charX;
				}
			}
		}
		cout << '\n';
	}

	return 0;
}
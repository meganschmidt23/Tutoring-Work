/* Write a program that reads an integer greater or
 * equal to 2, n, and prints a shape of a nline 
 * hollow inverted pyramid of stars */

#include <iostream>
using namespace std;

int main(){
	int n;

	cout << "Enter an integer, greater or equal to 2:" << endl;
	cin >> n;

	for(int row = 1; row <=n; row++){
		//Printing the spaces
		for (int column = 1; column <= row; column++){
				cout << " ":
		}
		// Hollow inverted triangle
		for(int column = 1; column <= (n*2 - (2*row-1))){
			if(row == 1 || column == 1 || j == (n*2 - (2 * row - 1))) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
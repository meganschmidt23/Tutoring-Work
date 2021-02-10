/*Write a program that reads an odd integer greater 
* or equal to 3(n), and prints a shape of a n-line
* hollow square made of ‘#’ symbols, with a ‘$’ 
* symbol shape of a X, bounded in it
*/

#include <iostream>
using namespace std;

int main(){
	//Initialize variable n
	int n = 0;

	//Ask for user's input
	cout << "Please enter an odd integer, ";
	cout << "greater than or equal to 3:" << endl;

	cin >> n;
	//Loop to access each row
	for(int row = 1; row <= n; row++){
		//For the first and last row, we always display ###
		if (row == 1 || row == n){
			for (int column = 1; column <= n; column++){
				cout << "#";
			}
		}
		//For the rows with $ and #
		else{
			for(int column = 1; column <= n; column++){
				//Edges have #
				if (column == 1 || column == n){
					cout << "#";
				}
				//If row and column match or the back side
				else if(column == (n - row + 1) || column == (row)){
					cout << "$";
				}
				else{
					cout << " ";
				}
			}
		}
		cout << "\n";
	}

	return 0;
}
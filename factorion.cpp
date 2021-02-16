/*Consider the following definition:
* A positive integer num is called a factorion if
* it equals to the sum of the factorials of its digits.
* For example, 145 is a factorion because 
* 1! + 4! + 5! = 1 + 24 + 120 = 145.
* Write a program that asks the user to enter a positive 
*integer and reports if that number is a
* factorion or not.*/

#include <iostream>
using namespace std;

int main(){
	int factorion;
	int num, numCopy;

	cout << "Please enter a positive integer: " << endl;
	cin >> num;
	numCopy = num;

	while (numCopy > 0){
		int factorial = 1;
		int digit = numCopy % 10;
		for (int i = 1; i <= digit; i++){
			factorial *= i;
		}
		factorion += factorial;
		numCopy = numCopy / 10;
	}
	if (num == factorion){
		cout << num;
		cout << " is a factorion." << endl;
	}
	else{
		cout << num;
		cout << " is not a factorion." << endl;
	}
	return 0;
}
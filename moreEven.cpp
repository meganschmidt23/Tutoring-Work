/*Consider the following definition:
*Definition: A positive integer is called a more-even
* number if it has more even digits than odd ones 
*(in the decimal representation of the number).
*For example, 410 is a more-even number, while 4123
* is not. Write a program that reads from the user a
* sequence of positive integers and tells how many
*of them were more-even numbers.
*Implementation requirement: The user should enter 
*their numbers, each one in a separate line, and
* type -1 to indicate the end of the input.
*/

#include <iostream>
using namespace std;

int main(){
	//Initialize variable
	int number, moreEvensCount = 0;

	//Prompt user to enter a number
	cout << "Please enter a sequence of positive integers, ";
	cout << "each one in a separate line. End your sequence";
	cout << " by typing -1"<<endl;
	//Store number into our variable number
	cin >> number;
	//As long as number doesn't equal -1, continue into loop
	while (number != -1){
		//Initialize evens and odds of the number given to be 0
		int evens = 0, odds = 0;
		//Access each digit of the given number, an update the 
		//counts of evens and odds
		while (number > 0){
			//Get last number
			int remainder = number % 10;
			//If remainder is odd, increment odd
			if(remainder % 2 == 0){
				evens++;
			}
			else{
				odds++;
			}
			//Get rid of last digit
			number = number/10;
		}
		//Update the count for moreEvens, after going through
		//all of the digits
		if(evens > odds){
			moreEvensCount++;
		}
		//Accept a new number
		cin >> number;
	}
	//Print how many numbers were more even to the user
	cout << "You entered "<< moreEvensCount << " more-even numbers."<<endl;


	return 0;
}
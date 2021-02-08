#include <iostream>

#include <ctime>

#include<cstdlib>

using namespace std;

int main ()

{

	int num,low = 1,high = 100,guess,count = 5;

	srand(time(0));

	num = (rand() % 100) + 1; // generating random number range 1 - 100

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

	// loops untill count become 0

	while(count != 0){

		cout << "Range: [" << low << ", " << high << "] Number of guess left: " << count << endl;

		cout << "Your guess: ";

		cin >> guess; // read guess

		// if guess is correct break the loop

		if(guess == num){

			cout << "Congrats! You guessed my number in " << 5 - count << " guesses." << endl;
			cout << "\n";

			break;

		}

		// if number is bigger

		if(guess < num){

			low = guess; // set the lower bound

			cout << "Wrong! My number is bigger." << endl;
			cout << "\n";

			}

		// if number is smaller

		else if(guess > num){

			high = guess; // set the upper bound

			cout << "Wrong! My number is smaller." << endl;
			cout << "\n";

			}

		count--;

	}

	// if all guess count is over then

	if(count == 0){

		cout << "Sorry, Number of guesses over. Number is " << num << endl;

	}

	return 0;
}
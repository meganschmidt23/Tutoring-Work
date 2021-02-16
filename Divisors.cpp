/*Implement a function:
* void printDivisors(int num)
* This function is given a positive integer num, and prints all of num’s divisors in an ascending
* order, separated by a space.
* For Example, if we call printDivisors(100), the expected output is:
* 1 2 4 5 10 20 25 50 100
* Implementation requirement: Pay attention to the running time of your function. An
* efficient implementation would run in Θ%√���).
* b. Use the function above when implementing a program that reads from the user a positive
* integer (≥2), and prints all it’s divisors.
* Your program should interact with the user exactly as it shows in the following example:
* Please enter a positive integer >= 2: 100
* 1 2 4 5 10 20 25 50 100
*/


#include <iostream>
using namespace std;

void printDivisors(int num){
	int i;
	//to store second half of divisions
	int a[100005]; 
	// to count the number of elements in the array a
	int count = 0;

	for(i = 1; i * i <= num; i++){
		if(num % i == 0){
			cout << i << " ";
			if(num / i != i){
				a[count] = num / i;
				count ++;
			}
		}

	}
	for(i = count - 1; i >= 0; i--){
		cout << a[i]<< " ";
	}
}

int main(){
	int num;
	cout << "Please enter a positive integer >= 2: ";
	cin >> num;

	printDivisors(num);

	return 0;
}
// Run time will be theta(sqrt(n)). For this code, num/i is the other divisor, 
// which is calculated automatically, since we know i divides num. So, example, if x * y = num
// x and y are both counted
/*The number e is an important mathematical constant that is the 
* base of the natural logarithm. e also arises in the study of 
* compound interest, and in many other applications.
* The value of e is approximately equal to 2.71828. We can get an 
* approximate value of e, by calculating only a partial sum of the 
* infinite sum above (the more addends we add, the better
* approximation we get).
* Implement the function:
* double eApprox(int n)
* This function is given a positive integer n, and returns an 
* approximation of e, calculated by the sum of the first (n+1)
* addends of the infinite sum above.
* Notes:
* 1. Pay attention to the running time of eApprox. An efficient 
* implementation would run in Θ(n).
* 2. Since the values of the factorials will grow to be very large, 
* use a variable of type double to store them.
*/

#include <iostream>
using namespace std;

double eApprox(int n){
	double sum = 1.00;
	double x = 1.00;
	//Find the approximate by calculating the sum of the first (n+1)
	//addends
	for(int i = n - 1; i > 0; --i){
		sum = 1 + x * sum / i;
	}
	// Return the approx of e
	return sum;
}
int main() {
	//Set the precision to 30
 	cout.precision(30);
 	//call the function 
 	for (int n = 1; n <= 15; n++) {
 		cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
 	}
 	return 0;
}
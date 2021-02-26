#include<iostream>
#include<cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
int outSumDivs, outCountDivs = 0;

int main(){
	int M;
	cout << "Enter a number >= 2:"<<endl;
	cin >> M;
	cout << "The perfect numbers between 2 and "<< M<<" are "<<endl;
	for(int i = 2; i<=M; i++){
	    if(isPerfect(i)){
	        cout << i << " ";
	    }
	}
	cout << endl;
	//Finding amicable numbers
	cout << "The amicable numbers between 2 and "<< M<< " are "<<endl;
	int count;
	for(int i = 2; i <= M; i++){
	    int sum1 = 1;
	    //Finding the sum of divisors of i
		analyzeDividors(i, count, sum1);
		if (sum1 > i && sum1 < M){
		    int sum2 = 1;
		    //Finding sum of divisors of sum1
		    analyzeDividors(sum1,count, sum2);
		    if(sum2 == i){
		        cout << i << " " <<sum1 <<endl;
		    }
		}
	}
	cout << endl;
	return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){;
	for (int i = 2; i <= sqrt(num); i++){
	    // We get a divisor
		if (num%i == 0){
		    //if not a perfect square
		    if(num/i != i){
		        //Two divisors
		        outCountDivs += 2;
		        outSumDivs +=(i+(num/i));
		    }
		    //perfect square
		    else{
		        //one div
		        outCountDivs++;
		        outSumDivs += i;
		    }
		}
	}

}
bool isPerfect(int num){
    //All numbers are div by 1
    outCountDivs = 1;
    outSumDivs = 1;
	analyzeDividors(num, outCountDivs,outSumDivs);
    return num == outSumDivs;
}



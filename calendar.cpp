#include<iostream>
using namespace std;

void printYearCalender(int year, int startingDay);
int printMonthCalender(int numOfDays, int startingDay);
bool checkLeapYear(int year);


int main(){
    
	int year;
	int startDay;
	cout << "Hello! What year would you like to display?"<<endl;
	cin >> year;

	cout << "What day does the year start on?"<<endl;
	cin >> startDay;

	printYearCalender(year, startDay);
    
	return 0;

}
//print the month
int printMonthCalender(int numOfDays, int startingDay){
	// heading
	cout << "Mon" << "\t";
	cout << "Tue" << "\t";
	cout << "Wed" << "\t";
	cout << "Thr" << "\t";
	cout << "Fri" << "\t";
	cout << "Sat" << "\t";
	cout << "Sun" << "\t";
	//new line to begin month
	cout << endl;
	//want to have empty spaces until we get to our first day
	for (int numOfTabs = 1; numOfTabs <= startingDay-1; numOfTabs++){
		cout << "\t";
	}
	//display number, tab, until last day of month
	for (int day = 1; day <= numOfDays; day++){
		cout << day;
		cout << "\t";
		//if we're on sunday, tab after display
		if ( (startingDay+day-1) % 7 == 0){
			cout << endl;
		}
	}
	//adding start day + total in month modulo 7, bc we don't care about full weeks.
	// one less bc of start day will be the last day
	return (numOfDays+startingDay)%7;
}
bool checkLeapYear(int year){
	//Leap years are mult. of 4
	if (year%4 == 0){
		if (year%100 == 0){
			if(year%400 == 0){
				return true;
			}
			else{
				return false;
			}
		}
		else {
			return true;
		}
	}
	else{	
		return false;
	}	
}
void printYearCalender(int year, int startingDay){
	int firstDayOfMonth = startingDay;
	for(int month = 1; month <= 12; month++){
		if (month == 1){
			cout << "January "<< year <<endl;
		}
		else if (month == 2){
			cout << "February "<< year <<endl;
		}
		else if (month == 3){
			cout << "March "<< year <<endl;
		}
		else if (month == 4){
			cout << "April "<< year <<endl;
		}
		else if (month == 5){
			cout << "May "<< year <<endl;
		}
		else if (month == 6){
			cout << "June "<< year <<endl;
		}
		else if (month == 7){
			cout << "July "<< year <<endl;
		}
		else if (month == 8){
			cout << "August "<< year <<endl;
		}
		else if (month == 9){
			cout << "September "<< year <<endl;
		}
		else if (month == 10){
			cout << "October "<< year <<endl;
		}
		else if (month == 11){
			cout << "November "<< year <<endl;
		}
		else if (month == 12){
			cout << "December "<< year <<endl;
		}
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
			firstDayOfMonth = printMonthCalender(31, firstDayOfMonth);
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11){
			firstDayOfMonth = printMonthCalender(30, firstDayOfMonth) ;
		}
		else{
			int daysInFeb = 28;
			if (checkLeapYear(year)){
				daysInFeb++;
			}
			firstDayOfMonth = printMonthCalender(daysInFeb, firstDayOfMonth);
		}
		if (firstDayOfMonth == 0){
		    firstDayOfMonth = 7;
		}
		cout << endl;
		cout << endl;
	}
}

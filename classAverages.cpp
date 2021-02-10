/* In this question, you will write a program that reads
* from the user grades of some students and reports the
* average of each student. Your program should first ask
* the user how many students they have in the class.
* For each student, the user should be asked to enter
* a line containing a sequence of the student’s grades.
* The grades should be separated by a space, and end
* with -1 (to indicate the end of the grades list). 
* After reading the grades, your program should print
* the average of that student’s grades.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//Initialize variables
	int numOfStudents;

	//Prompt user for number of students
	cout << "How many students do you wish to enter?" << endl;
	cin >> numOfStudents;

	//For loop to go through all of the students' grades
	for (int students = 1; students <= numOfStudents; students++){
		// variables
		int currentGrade;
		double totalNumOfGrades = 0, gradeTotal = 0;
	    double average = 0;
		//Start new student
		cout << "Enter list of grades, separated by a space. End the grade ";
		cout << "list by typing -1: "<< endl;
		cin >> currentGrade;
		//Get all of the grades for the current student and add them up
		// We also need the total number for our average
		while (currentGrade != -1){
			gradeTotal += currentGrade;
			totalNumOfGrades++;
			cin >> currentGrade;
		}
		average = gradeTotal/totalNumOfGrades;
		cout << "Average of student #"<< students << " is ";
		cout << std::fixed << std::setprecision(1) << average;
		cout << "\n";
	}

	return 0;
}
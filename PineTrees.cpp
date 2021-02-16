/*Write	a	program	that,	prints	a	‘pine	tree’	consisting	of	triangles	of	increasing	sizes,	filled	
*with	a	character	(eg.	‘*’	or	’+’	or	‘$’	etc).	
*Your	program	should	interact with	the	user	to	read	the	number	of	triangles	in	the	tree	and	
*the	character	filling	the	tree.
*Your	implementation	should	include	the	following	functions:
*a. void printShiftedTriangle(int n, int m, char symbol)
*It	prints	an	n-line	triangle,	filled	with	symbol characters,	shifted	m spaces	from	the	left	
*margin.

*b. void printPineTree(int n, char symbol)
*It	prints	a	sequence	of	n triangles	of	increasing	sizes	(the	smallest	triangle	is	a	2-line	
*triangle),	which	form	the	shape	of	a	pine	tree.	The	triangles	are	filled	with	the	symbol
*character.	
*/

#include <iostream>
using namespace std;
void printShiftedTriangle(int n, int m, char symbol){
	int i, j, countSymbol;
	for (int i = 1, countSymbol = 1; i <= n;i++, m--, countSymbol += 2){
		//printing the spaces
		for(j = 1; j <= m;  j++){
			cout << " ";
		}
		//printing chars
		for (j = 1; j <= countSymbol; j++){
			cout << symbol;
		}
		cout << endl;
	}
}
void printPineTree(int n, char symbol){
	for (int i = 1; i <= n; i++){
		printShiftedTriangle(i+1,n,symbol);
	}
}

int main(){
	int pineTreeTriangles;
	char pineTreeChar;
	cout << "How many triangles would you like in the pine tree? ";
	cin >> pineTreeTriangles;
	cout << "What character would you like your pine tree to be made out out? ";
	cin >> pineTreeChar;
	printPineTree(pineTreeTriangles,pineTreeChar);

	return 0;
}






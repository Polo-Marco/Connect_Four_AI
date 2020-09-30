#include <iostream>
#include <vector>

using namespace std;

int poor1(const vector < vector<char> > &, char, char);

int poor1(const vector < vector<char> > &b, char mydisc, char yourdisc) {
	static const char me = mydisc; //Record the disc type main function assigns for this AI. It never changes once assigned
	static const char opponent = yourdisc; //Record the disc type main function assigns for another AI. It never changes once assigned
	int column = -1;
	//Write your AI here

	cout << "Which Column? ";
	cin >> column;
	column--;




	//Write your AI here

	return column;
}

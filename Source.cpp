#include <iostream>
#include "constructor.h"
using namespace std;
int main()
{
	int id;
	string name;
	double english;
	double math;
	double it;
	
	cout << "enter your student ID: " << endl;
	cin >> id;
	cout << "Enter your name : " << endl;
	cin >> name;
	cout << "Enter tour English score :" << endl;
	cin >> english;
	cout << "Enter tour Math score :" << endl;
	cin >> math;
	cout << "Enter tour IT score :" << endl;
	cin >> it;
	Student stud(id, name , english , math , it );

	
	cout << "\n\n\n The student information : " << endl;
	cout << "Student  ID - " << stud.getID() << endl;
	cout << "Student name - " << stud.getName() << endl;
	cout << "English score - " << stud.getEnglish() << endl;
	cout << "Math score - " << stud.getMath() << endl;
	cout << "IT score - " << stud.getIT() << endl;
	
	stud.displayMessage();

	


	return 0;
}
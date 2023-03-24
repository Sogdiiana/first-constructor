#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	int id;
	string name;
	double english;
	double math;
	double it;

public:
	
	Student()
	{
		id = 0;
		english = 0;
		math = 0;
		it = 0;
		
	}
	Student(int id, string name, double english, double math, double it)
	{
		if (name.length() > 5 && name.length() < 15)
			this->name = name;
		if (id > 100000 && id < 1000000)
			this->id = id;
		if (english > 0 && english < 100)
			this->english = english;
		if (math> 0 && math < 100)
			this->math = math;
		if ( it > 0 && it < 100)
		this->it = it;

	}
	int getID()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
	double getEnglish()
	{
		return english;
	}
	double getMath()
	{
		return math;
	}
	double getIT()
	{
		return it;
	}
	double getTotal()
	{
		double total;
		total = (english + math + it)/3;
		return total;
	}
	string getGrade()
	{
		string grade;

		if (getTotal() >= 90)
			grade = "A+";
		if (getTotal() >= 80 && getTotal() <= 89)
			grade = "A0";
		if (getTotal() >= 70 && getTotal() <= 79)
			grade = "B+";
		if (getTotal() >= 60 && getTotal() <= 69)
			grade = "B0";
		if (getTotal() >= 50 && getTotal() <= 59)
			grade = "C+";
		if (getTotal() >= 40 && getTotal() <= 49)
			grade = "C0";
		if (getTotal() >= 30 && getTotal() <= 39)
			grade = "D+";
		if (getTotal() >= 20 && getTotal() <= 29)
			grade = "D0";
		if (getTotal() >= 0 && getTotal() <= 19)
			grade = "F";
		return grade;
	}
	void displayMessage()
	{
		
		cout << "Your overall score is - " << getTotal() << endl;
		cout << "Your grade is < " << getGrade() << " >" << endl;

	}
	~Student(){}


};

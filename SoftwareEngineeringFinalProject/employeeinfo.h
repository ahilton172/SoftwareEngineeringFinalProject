#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Employee {
public:
	Employee(){

	}
	fstream myfile;
	string Name;
	string Department;
	string Budget;
	char Note[100];
	void addData() {
		//myfile.open("C:\\Users\\ahilt\\Desktop\\employeeInfo.txt", ios::app);
		myfile.open("employeeInfo.txt", ios::app);
		if (myfile.is_open()) {
			cout << "Enter the Employee's Name" << endl;
			cin >> Name;
			cout << "Enter which department the Employee works in" << endl;
			cin >> Department;
			cout << "Enter the budget of the department for the year" << endl;
			cin >> Budget;
			myfile << Name << "," << Department << "," << Budget << endl;
			myfile.close();
		}
	}
	void readData() {
		//myfile.open("C:\\Users\\ahilt\\Desktop\\employeeInfo.txt", ios::in);
		myfile.open("employeeInfo.txt", ios::in);

		if (myfile.is_open()) {
			string line;
			while (getline(myfile,line)) {
				cout << line << endl;
			}
			myfile.close();
		}
	}
	void sendLetter() {
		//myfile.open("C:\\Users\\ahilt\\Desktop\\adminLetter.txt", ios::app);
		myfile.open("adminLetter.txt", ios::app);
		if (myfile.is_open()) {
			cout << "Enter your note and when you are done press enter" << endl;
			cin.ignore();
			cin.getline(Note, sizeof(Note));
			myfile << "Hello admin," << endl;
			myfile << Note << endl;
			myfile << "Thank you" << endl;
			myfile << endl;
			myfile.close();
		}
	}
	void readletters() {
		//myfile.open("C:\\Users\\ahilt\\Desktop\\adminLetter.txt", ios::in);
		myfile.open("adminLetter.txt", ios::in);
		if (myfile.is_open()) {
			string line;
			while (getline(myfile, line)) {
				cout << line << endl;
			}
			myfile.close();
		}
	}



};

#include <iostream>
#include <fstream>
#include <string>
#include "login.h"
#include "signin.h"
#include "employeeinfo.h"
using namespace std;
 
void employeeStuff();
void adminStuff();

void mainMenu() {

	cout << "*****************" << endl;
	cout << "Welcome, please enter if you are an admin or if you wish to view the contents of the files " << endl;
	cout << "Enter 1 if you are admin: " << endl;
	cout << "Enter 2 if you are a employee: " << endl;
	cout << "Enter 3 if you would like to exit the program" << endl;
	int flag = 0;
	cin >> flag;
	switch (flag) {
	case 1:
		adminStuff();
		break;

	case 2:
		employeeStuff();
		break;
	case 3:
		break;

	}

}

void adminStuff() {
	adminLogin adminlogin;
	signUp singin;
	Employee employee;
	int select = 0;
	cout << "*****************" << endl;
	cout << "Hello Admin" << endl;
	cout << "If you would like login enter 1: " << endl;
	cout << "If you would like to sign up then enter 2: " << endl;
	cout << "If you would like to read letters from staff enter 3:" << endl;
	cout << "Return to main menu enter 4: " << endl;
	cin >> select;


	if (select == 1) {
		adminlogin.login();
		cout << "As admin you must enter the head of the department's name, which department they work for, and the department budget for the year" << endl;
		int entries = 0;
		cout << "You can add up to 5 entries at one time" << endl;
		cout << "***********" << endl;
		while (entries < 5) {
			string entry;
			cout << "Enter yes if you want to contiunue and no to stop" << endl;
			cin >> entry;
			if (entry == "yes") {
				employee.addData();
				entries++;
				if (entries == 5) {
					return mainMenu();
				}
			}
			if (entry == "no") {
				return mainMenu();
			}

		}
	}
	if (select == 2) {
		singin.writeUserName();
		singin.writePassWord();
		mainMenu();
	}
	if (select == 3) {
		employee.readletters();
		mainMenu();
	}
	if (select == 4) {
		mainMenu();
	}
}

void employeeStuff() {
	adminLogin adminlogin;
	signUp singin;
	Employee employee;
	int select = 0;
	int pick = 0;
	cout << "*****************" << endl;
	cout << "Hello valued employee!" << endl;
	cout << "If you want to see this years department heads and budgets enter 1: " << endl;
	cout << "If you would like to send a message to the admin for next time they login enter 2:" << endl;
	cin >> pick;
	if (pick == 1) {
		employee.readData();
		string finished;
		cout << "If you want to return to main type yes" << endl;
		cin >> finished;
		if (finished == "yes") {
			mainMenu();
		}


	}
	if (pick == 2) {
		employee.sendLetter();
		mainMenu();
	}
}

int main() {

	mainMenu();

	return 0;
}
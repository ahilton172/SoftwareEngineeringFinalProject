#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class adminLogin {
public:
	adminLogin() {

	}
	void login() {
		cout << "Enter Username and Password" << endl;
		cout << "**************" << endl;
		cout << "Enter Username: " << endl;
		cin >> userNameAttempt;

		//userName = getFile("C:\\Users\\ahilt\\Desktop\\adminUsers.txt");
		userName = getFile("adminUsers.txt");

		if (userNameAttempt == userName) {
			cout << "Password: " << endl;
			cin >> passWordAttempt;

			//passWord = getFile("C:\\Users\\ahilt\\Desktop\\adminPassword.txt");
			passWord = getFile("adminPassword.txt");


			if (passWordAttempt == passWord) {
				cout << "Success!!" << endl;

				cin.get();
			}
			else {
				cout << "**Incorrect PassWord**" << endl;
				cout << "Try Again Please" << endl;
				login();
			}
		}
		else {
			cout << "**Incorrect Username**" << endl;
			cout << "Try Again Please" << endl;
			login();
		}
	}
	string getFile(const char* fileName) {



		myfile.open(fileName, ios::in);
		if (myfile.is_open()) {
			getline(myfile, line);
		}
		myfile.close();

		return line;
	}

private:
	string line;
	fstream myfile;
	string userNameAttempt;
	string passWordAttempt;
	string userName;
	string passWord;
};


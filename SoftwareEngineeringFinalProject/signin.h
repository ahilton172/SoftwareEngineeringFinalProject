#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class signUp {
public:
	signUp() {

	}
	fstream myfile;
	string userName;
	string passWord;
	void writeUserName() {
		//myfile.open("C:\\Users\\ahilt\\Desktop\\adminUsers.txt", ios::app);
		myfile.open("adminUsers.txt", ios::app);
		if (myfile.is_open()) {
			cout << "Enter a Username" << endl;
			cin >> userName;
			myfile << userName<<endl;
			myfile.close();
		}
	}
	void writePassWord() {
		//myfile.open("C:\\Users\\ahilt\\Desktop\\adminPassword.txt", ios::app);
		myfile.open("adminPassword.txt", ios::app);
		if (myfile.is_open()) {
			cout << "Enter a Password" << endl;
			cin >> passWord;
			myfile << passWord<<endl;
			myfile.close();
		}
	}


};
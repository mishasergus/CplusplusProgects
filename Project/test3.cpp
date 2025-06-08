#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cctype>
#include "StudentsProject.h"
using namespace std;
namespace fs = filesystem;

class User
{
private:
	string login;
	string password;
	string name;
	string surename;
	string fathername;
	string adress;
	int phone;
	string nameOfMark;
	int baseSiz = 0;
	string* testBase = new string[baseSiz];
	int numberOfStudent;
public:
	User(string login1, string password1, string name1, string surename1, string fathername1, string adress1, int phone1) {
		login = login1;
		password = "";
		for (char simv : password1)
		{
			int nOfSimv = simv;
			password += static_cast<char>(nOfSimv + 5);
		}
		name = name1;
		surename = surename1;
		fathername = fathername1;
		adress = adress1;
		phone = phone1;
		int n = 1;
		string prom;
		while (true) {
			prom = "Users/User" + to_string(n);
			if (!fs::exists(prom)) {
				fs::create_directory(prom);
				break;
			}
			n++;
		}
		numberOfStudent = n;
		nameOfMark = prom + "/" + "marks.txt";
		fstream obj1(nameOfMark, ios::out);
		obj1.close();
		fstream obj2(prom+"/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' <<"Phone:\n" << to_string(phone);
		}
		obj2.close();
	}
	//////////////////////////////////////////////////////////////////////////////////////////
	string get_login() {
		fstream obj1("Users/User" + to_string(numberOfStudent)+ "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					return txt;
				}
				if (txt == "Login:") {
					next = true;
				}
			}
		}
		return "";
	}
	string get_password() {
		fstream obj1("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					string passw = "";
					for (char simv : txt)
					{
						int nOfSimv = simv;
						passw += static_cast<char>(nOfSimv - 5);
					}
					return passw;
				}
				if (txt == "Password:") {
					next = true;
				}
			}
		}
		return "";
	}
	string get_name() {
		fstream obj1("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					return txt;
				}
				if (txt == "Name:") {
					next = true;
				}
			}
		}
		return "";
	}
	string get_surename() {
		fstream obj1("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					return txt;
				}
				if (txt == "Surename:") {
					next = true;
				}
			}
		}
		return "";
	}
	string get_fathername() {
		fstream obj1("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					return txt;
				}
				if (txt == "Fathername:") {
					next = true;
				}
			}
		}
		return "";
	}
	string get_adress() {
		fstream obj1("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					return txt;
				}
				if (txt == "Adress:") {
					next = true;
				}
			}
		}
		return "";
	}
	string get_phone() {
		fstream obj1("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::in);
		string txt = "";
		bool next = false;
		if (obj1.is_open()) {
			while (getline(obj1, txt)) {
				if (next) {
					return txt;
				}
				if (txt == "Phone:") {
					next = true;
				}
			}
		}
		return "";
	}
	//////////////////////////////////////////////////////////////////////////////////////////
	void set_login(string login1) {
		login = login1;
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_password(string password1) {
		password = "";
		for (char simv : password1)
		{
			int nOfSimv = simv;
			password += static_cast<char>(nOfSimv + 5);
		}
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_name(string name1) {
		name = name1;
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_surename(string surename1) {
		surename = surename1;
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_fathername(string fathername1) {
		fathername = fathername1;
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_adress(string adress1) {
		adress = adress1;
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_phone(int phone1) {
		phone = phone1;
		fs::remove_all("Users/User" + to_string(numberOfStudent) + "/info.txt");
		fstream obj2("Users/User" + to_string(numberOfStudent) + "/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' << "Phone:\n" << to_string(phone);
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	//////////////////////////////////////////////////////////////////////////////////////////
	void passTheTest(int nOfTest, int nOfNowQuest = 1,int nowCorrect = 0) {
		int correct = nowCorrect;
		int n = 1;
		string answ;
		while (true) {
			string prom = "Tests/Test" + to_string(nOfTest)+"/question" + to_string(n)+".txt";
			if (!fs::exists(prom)) {
				n--;
				break;
			}
			n++;
		}
		for (int j = nOfNowQuest; j <= n; j++)
		{
			fstream obj2("Tests/Test" + to_string(nOfTest) + "/question" + to_string(j) + ".txt", ios::in);
			if (obj2.is_open())
			{
				int siz = 0;
				string* text = new string[siz];
				string txt = "";
				while (getline(obj2, txt)) {
					string* textCopy = new string[siz];
					for (int i = 0;i < siz;i++) {
						textCopy[i] = text[i];
					}
					siz++;
					delete[]text;
					text = new string[siz];
					for (int i = 0;i < siz;i++) {
						if (i == siz - 1) {
							text[i] = txt+"\n";
						}
						else {
							text[i] = textCopy[i];
						}
					}
					delete[]textCopy;
					txt.clear();
				}
				for (int i = 0; i < siz; i++)
				{
					if (siz-1 != i) {
						cout << text[i];
					}
					else {
						cout << "(exit) to exit:\n";
						cin >> answ;
						if (answ == "exit") {
							string* testBaseCopy = new string[baseSiz];
							for (int j = 0;j < baseSiz;j++) {
								testBaseCopy[j] = testBase[j];
							}
							baseSiz++;
							delete[]testBase;
							testBase = new string[baseSiz];
							for (int j = 0;j < baseSiz;j++) {
								if (j == baseSiz - 1) {
									testBase[j] = to_string(nOfTest) + " " + to_string(j) + " " + to_string(correct) + " ";
								}
								else {
									testBase[j] = testBaseCopy[j];
								}
							}
							delete[]testBaseCopy;
							txt.clear();
						}
						answ += "\n";
						if (answ == text[i]) {
							correct++;
						}
					}
				}

			}
			obj2.close();
		}
		if (n != 0&&answ!="exit\n") {
			fstream obj1(nameOfMark, ios::out);
			int mark = round((float(correct) / float(n)) * 12.0);
			if (obj1.is_open()) {
				fstream obj2("Tests/Test" + to_string(nOfTest) + "/name.txt", ios::in);
				if (obj2.is_open()) {
					string t = "";
					while (getline(obj2, t)) {
						obj1 << t << " " << mark;
					}
				}
				obj2.close();
			}
			cout << "U got " << correct << " correct from " << n << " possible. U`r mark is " << mark << "\n";
			obj1.close();
		}
	}
};



class Admin
{
private:
	string login;
	string password;
public:
	Admin(string login1, string password1) {
		login = login1;
		password = "";
		for (char simv : password1)
		{
			int nOfSimv = simv;
			password += static_cast<char>(nOfSimv + 5);
		}
		if (!fs::exists("Admin")) {
			fs::create_directory("Admin");
		}
		fstream obj2("Admin/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password;
		}
		obj2.close();
	}
	//////////////////////////////////////////////////////////////////////////////////////////
	void set_own_login(string login1) {
		while (true) {
			string prom;
			cout << "Password:\n";
			cin >> prom;
			if (prom == password) {
				break;
			}
		}
		login = login1;
		fs::remove_all("Admin/info.txt");
		fstream obj2("Admin/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password;
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void set_own_password(string password1) {
		while (true) {
			string prom;
			cout << "Password(old):\n";
			cin >> prom;
			if (prom == password) {
				break;
			}
		}
		password = "";
		for (char simv : password1)
		{
			int nOfSimv = simv;
			password += static_cast<char>(nOfSimv + 5);
		}
		fs::remove_all("Admin/info.txt");
		fstream obj2("Admin/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password;
		}
		obj2.close();
		cout << "SUCCES\n";
	}
	void makeNewUser(User *user) {
		string mail1;
		cout << "E-mail:\n";
		cin >> mail1;

		string password1;
		cout << "Password:\n";
		cin >> password1;

		string name1;
		cout << "Name:\n";
		cin >> name1;

		string surename1;
		cout << "Surename:\n";
		cin >> surename1;

		string fathername1;
		cout << "Fathername:\n";
		cin >> fathername1;

		string adress1;
		cout << "Adress:\n";
		cin >> adress1;

		int number;
		cout << "Phone:\n";
		cin >> number;

		string nameOfMark1;
		cout << "NameOfMark1:\n";
		cin >> nameOfMark1;

		user = new User(mail1, password1, name1, surename1, fathername1, adress1, number);
	}
	void delUser(User* user) {
		delete user;
		user = nullptr;
	}
	void edit(User* user){
		while (true) {
			int choise;
			cout << "|||||||||||||||||||||||||||||||||||||\n";
			cout << "|  1-E-mail                         |\n";
			cout << "|  2-password                       |\n";
			cout << "|  3-name                           |\n";
			cout << "|  4-surename                       |\n";
			cout << "|  5-fathername                     |\n";
			cout << "|  6-adress                         |\n";
			cout << "|  7-phone                          |\n";
			cout << "|  0-exit                           |\n";
			cout << "|||||||||||||||||||||||||||||||||||||\n";
			if (choise == 0) {
				break;
			}
			string mail1;
			string password1;
			string name1;
			string surename1;
			string fathername1;
			string adress1;
			int number;
			switch (choise)
			{
				case 1:
					cout << "E-mail:\n";
					cin >> mail1;
					user->set_login(mail1);
					break;
				case 2:
					cout << "Password:\n";
					cin >> password1;
					user->set_password(password1);
					break;
				case 3:
					cout << "Name:\n";
					cin >> name1;
					user->set_name(name1);
					break;
				case 4:
					cout << "Surename:\n";
					cin >> surename1;
					user->set_surename(surename1);
					break;
				case 5:
					cout << "Fathername:\n";
					cin >> fathername1;
					user->set_fathername(fathername1);
					break;
				case 6:
					cout << "Adress:\n";
					cin >> adress1;
					user->set_adress(adress1);
					break;
				case 7:
					cout << "Phone:\n";
					cin >> number;
					user->set_phone(number);
					break;
				default:
					break;
			}
		}
	}

};




int main()
{
	srand(time(0));	
	/*User* user;
	makeNewUser(&user);*/
	User* user1 = new User("qwerty@gmail.com","qwerty123","Oleg","Olegov", "Olegovich","Olegova2",88005553535);
	user1->passTheTest(1);
	/*user1.passTheTest(1);*/
}
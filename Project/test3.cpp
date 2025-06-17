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
	User() : login(""), password(""), name(""), surename(""), fathername(""), adress(""), phone(0) {}
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
	////////////////////////////////////////////////////////////////////////////////////////
	string* gettestBase() {
		return testBase;
	}
	int gettestBaseSiz() {
		return baseSiz;
	}
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
	////////////////////////////////////////////////////////////////////////////////////////
	void settestBaseMinusOne(string arr[]) {
		delete[] testBase;
		baseSiz--;
		testBase = new string[baseSiz];
		for (int i = 0; i < baseSiz; i++)
		{
			testBase[i] = arr[i];
		}

	}
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
	////////////////////////////////////////////////////////////////////////////////////////
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
							for (int h = 0;h < baseSiz;h++) {
								testBaseCopy[h] = testBase[h];
							}
							baseSiz++;
							delete[]testBase;
							testBase = new string[baseSiz];
							for (int h = 0;h < baseSiz;h++) {
								if (h == baseSiz - 1) {
									testBase[h] = to_string(nOfTest) + " " + to_string(j) + " " + to_string(correct);
								}
								else {
									testBase[h] = testBaseCopy[h];
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
			if (answ == "exit\n") {
				break;
			}
		}
		if (n != 0&&answ!="exit\n") {
			fstream obj1(nameOfMark, ios::app);
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Admin
{
private:
	string login;
	string password;
	int userSiz = 0;
	User* userArr;
	int catSiz = 1;
	string* categoryArr;
	int namesTestSiz = 1;
	string* namesOfTests;
public:
	Admin(string login1, string password1) {
		userArr = new User[userSiz];
		categoryArr = new string[catSiz];
		namesOfTests = new string[catSiz];
		namesOfTests[0] = "EnglishTest";
		categoryArr[0] = "foreign language";
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
	int get_nameTest_siz() {
		return namesTestSiz;
	}
	int get_userArr_siz() {
		return userSiz;
	}
	int get_categoryArr_siz() {
		return catSiz;
	}
	string* get_namesOfTests() {
		return namesOfTests;
	}
	User* get_userArr() {
		return userArr;
	}
	string* get_categoryArr() {
		return categoryArr;
	}
	string get_own_password() {
		fstream obj1("Admin/info.txt", ios::in);
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
	string get_own_login() {
		fstream obj1("Admin/info.txt", ios::in);
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
	////////////////////////////////////////////////////////////////////////////////////////
	void set_own_login(string login1) {
		string passw = "";
		for (char simv : password) {
			passw += static_cast<char>(simv - 5);
		}
		while (true) {
			string prom;
			cout << "Password:\n";
			cin >> prom;
			if (prom == passw) {
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
		string passw = "";
		for (char simv : password) {
			passw += static_cast<char>(simv - 5);
		}
		while (true) {
			string prom;
			cout << "Password(old):\n";
			cin >> prom;
			if (prom == passw) {
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
	///////////////////////////////////////////////////////////////////////////////////////////
	void makeNewUser(User *&user) {
		string mail1;
		while (true) {
			bool tr = true;
			cout << "E-mail:\n";
			cin >> mail1;
			for (int i = 0; i < userSiz; i++)
			{
				if (userArr[i].get_login() == mail1) {
					tr = false;
				}
			}
			if (tr) {
				break;
			}
		}

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

		user = new User(mail1, password1, name1, surename1, fathername1, adress1, number);

		User* arrCopy = new User[userSiz];
		for (int i = 0; i < userSiz; i++)
		{
			arrCopy[i] = userArr[i];
		}
		userSiz += 1;
		delete[]userArr;
		userArr = new User[userSiz];
		for (int i = 0; i < userSiz; i++)
		{
			if (i == userSiz - 1) {
				userArr[i] = *user;
			}
			else {
				userArr[i] = arrCopy[i];
			}
		}
		delete[]arrCopy;
	}
	void delUser(int numOfUser) {
		User* arrCopy = new User[userSiz];
		for (int i = 0; i < userSiz; i++)
		{
			arrCopy[i] = userArr[i];
		}
		userSiz -= 1;
		delete[]userArr;
		userArr = new User[userSiz];
		bool prom = true;
		for (int i = 0; i < userSiz; i++)
		{
			if (i == numOfUser - 1&& prom) {
				i--;
				prom = false;
			}
			else if(i >= numOfUser - 1 && !prom)
			{
				userArr[i] = arrCopy[i+1];
			}
			else {
				userArr[i] = arrCopy[i];
			}
		}
		delete[]arrCopy;
		fs::remove_all("Users/User"+to_string(numOfUser));
		for (int i = numOfUser+1; i <= userSiz+1; i++)
		{
			if (fs::exists("Users/User" + to_string(i))) {
				fs::rename("Users/User" + to_string(i), "Users/User" + to_string(i - 1));
			}
		}
	}
	void edit(int number){
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
			cin >> choise;
			string mail1;
			string password1;
			string name1;
			string surename1;
			string fathername1;
			string adress1;
			int numberPh;
			if (choise == 0) {
				break;
			}
			else if (choise == 1) {
				while (true) {
					bool tr = true;
					cout << "E-mail:\n";
					cin >> mail1;
					for (int i = 0; i < userSiz; i++)
					{
						if (userArr[i].get_login() == mail1) {
							tr = false;
						}
					}
					if (tr) {
						break;
					}
				}
			}
			else if (choise == 2) {
				cout << "Password:\n";
				cin >> password1;
				userArr[number - 1].set_password(password1);
			}
			else if (choise == 3) {
				cout << "Name:\n";
				cin >> name1;
				userArr[number - 1].set_name(name1);
			}
			else if (choise == 4) {
				cout << "Surename:\n";
				cin >> surename1;
				userArr[number - 1].set_surename(surename1);
			}
			else if (choise == 5) {
				cout << "Fathername:\n";
				cin >> fathername1;
				userArr[number - 1].set_fathername(fathername1);
			}
			else if (choise == 6) {
				cout << "Adress:\n";
				cin >> adress1;
				userArr[number - 1].set_adress(adress1);
			}
			else if (choise == 7) {
				cout << "Phone:\n";
				cin >> numberPh;
				userArr[number - 1].set_phone(numberPh);
			}

		}
	}
	///////////////////////////////////////////////////////////////////////////////////////////
	void showAllMarks() {
		if (fs::exists("Admin/allMarks.txt")) {
			fs::remove_all("Admin/allMarks.txt");
		}
		fstream obj1("Admin/allMarks.txt", ios::out);
		if (obj1.is_open())
		{
			for (int i = 1; i <= userSiz; i++)
			{
				obj1 << "User" << i << ":\n";
				cout << "User" << i << ":\n";
				fstream obj2("Users/User"+to_string(i) + "/marks.txt", ios::in);
				if (obj2.is_open())
				{
					string txt;
					while (getline(obj2, txt)) {
						obj1 << txt << "\n";
						cout << txt << "\n";
					}
				}
				obj2.close();
			}
		}
		obj1.close();
	}
	void showMarksByCategory(int nOfCategory) {
		if (fs::exists("Admin/marksBy" + to_string(nOfCategory) + ".txt")) {
			fs::remove_all("Admin/marksBy" + to_string(nOfCategory) + ".txt");
		}
		fstream obj1("Admin/marksBy" + to_string(nOfCategory) + ".txt", ios::out);
		if (obj1.is_open())
		{
			for (int i = 1; i <= userSiz; i++)
			{
				obj1 << "User" << i << ":\n";
				cout << "User" << i << ":\n";
				fstream obj2("Users/User" + to_string(i) + "/marks.txt", ios::in);
				if (obj2.is_open())
				{
					string txt;
					while (getline(obj2, txt)) {
						int ind = 0;
						int num = 0;
						for (int j = 0; j < txt.size(); j++)
						{
							if (txt[j] == ',') {
								ind = j;
								break;
							}
						}
						for (int j = 0; j < ind; j++)
						{
							num += (int(txt[j])-48) * pow(10, ind - 1 - j);
						}
						if (num == nOfCategory) {
							obj1 << txt << "\n";
							cout << txt << "\n";
						}
					}
				}
				obj2.close();
			}
		}
		obj1.close();
	}
	void showMarksByTest(string nameOfTest) {
		if (fs::exists("Admin/marksBy" + nameOfTest + ".txt")) {
			fs::remove_all("Admin/marksBy" + nameOfTest + ".txt");
		}
		fstream obj1("Admin/marksBy" + nameOfTest + ".txt", ios::out);
		if (obj1.is_open())
		{
			for (int i = 1; i <= userSiz; i++)
			{
				obj1 << "User" << i << ":\n";
				cout << "User" << i << ":\n";
				fstream obj2("Users/User" + to_string(i) + "/marks.txt", ios::in);
				if (obj2.is_open())
				{
					string txt;
					while (getline(obj2, txt)) {
						int ind1 = 0;
						int ind2 = 0;
						string thema = "";
						bool first = true;
						for (int j = 0; j < txt.size(); j++)
						{
							if (txt[j] == ','&& first) {
								ind1 = j;
							}
							if (txt[j] == ' ') {
								ind2 = j;
							}
						}
						for (int j = ind1+1; j < ind2; j++)
						{
							thema += txt[j];
						}
						if (thema == nameOfTest) {
							obj1 << txt << "\n";
							cout << txt << "\n";
						}
					}
				}
				obj2.close();
			}
		}
		obj1.close();
	}
	void showMarksByUser(int number) {
		if (fs::exists("Admin/marksByUser" + to_string(number) + ".txt")) {
			fs::remove_all("Admin/marksByUser" + to_string(number) + ".txt");
		}
		fstream obj2("Admin/marksByUser" + to_string(number) + ".txt", ios::out);
		if (obj2.is_open()) {
			fstream obj1("Users/User" + to_string(number) + "/marks.txt", ios::in);
			if (obj1.is_open())
			{
				obj2 << "User" << number << ":\n";
				cout << "User" << number << ":\n";
				string txt;
				while (getline(obj1, txt)) {
					obj2 << txt << "\n";
					cout << txt << "\n";
				}
			}
			obj1.close();
		}
		obj2.close();
	}
	///////////////////////////////////////////////////////////////////////////////////////////
	void addCategory(string nameOfCategory) {
		string* categoryArrCopy = new string[catSiz];
		for (int i = 0; i < catSiz; i++)
		{
			categoryArrCopy[i] = categoryArr[i];
		}
		delete[] categoryArr;
		catSiz += 1;
		categoryArr = new string[catSiz];
		for (int i = 0; i < catSiz; i++)
		{
			if (i == catSiz - 1) {
				categoryArr[i] = nameOfCategory;
			}
			else {
				categoryArr[i] = categoryArrCopy[i];
			}
		}
		delete[] categoryArrCopy;
	}
	void addTest(int category,string name,string path = "") {
		if (path == "") {
			int n = 1;
			string prom;
			while (true) {
				prom = "Tests/Test" + to_string(n);
				if (!fs::exists(prom)) {
					fs::create_directory(prom);
					break;
				}
				n++;
			}
			fstream obj1("Tests/Test" + to_string(n) + "/name.txt", ios::out);
			if (obj1.is_open()) {
				obj1 << category << ',' << name;
			}
			obj1.close();
			int num = 1;
			while (true) {
				fstream obj2("Tests/Test" + to_string(n) + "/question" + to_string(num) + ".txt", ios::out);
				if (obj2.is_open()) {
					string question;
					cout << "|||||||||||||||||||||||||||||||||||||\n";
					cout << "|  question:                        |\n";
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					getline(cin, question);
					obj2 << question << "\n";
					int x = 1;
					while (true) {
						string variant;
						cout << "|  variant:                         |\n";
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						getline(cin, variant);
						obj2 << static_cast<char>(x + 96) << ")" << variant << '\n';
						x++;
						int choise;
						cout << "|  1-exit                           |\n";
						cin >> choise;
						if (choise == 1) {
							break;
						}
						cout << endl;
					}
					while (true) {
						char correctAnsw;
						cout << "|  correctAnsw:                     |\n";
						cin >> correctAnsw;
						if (int(correctAnsw) >= 97 && int(correctAnsw) <= x + 95) {
							obj2 << correctAnsw << '\n';
							break;
						}
					}
					int choise;
					cout << "|  1-exit                           |\n";
					cin >> choise;
					cout << "|||||||||||||||||||||||||||||||||||||\n";
					if (choise == 1) {
						break;
					}
				}
				obj2.close();
				num++;
			}
		}
		else if(fs::exists(path)&& fs::exists(path + "/question" + to_string(1) + ".txt")){
			int n = 1;
			string prom;
			while (true) {
				prom = "Tests/Test" + to_string(n);
				if (!fs::exists(prom)) {
					fs::create_directory(prom);
					break;
				}
				n++;
			}
			fstream obj1("Tests/Test" + to_string(n) + "/name.txt", ios::out);
			if (obj1.is_open()) {
				obj1 << category << ',' << name;
				string* namesOfTestsCopy = new string[namesTestSiz];
				for (int i = 0; i < namesTestSiz; i++)
				{

					namesOfTestsCopy[i] = namesOfTests[i];
				}
				delete[] namesOfTests;
				namesTestSiz += 1;
				namesOfTests = new string[namesTestSiz];
				for (int i = 0; i < namesTestSiz; i++)
				{
					if (i == catSiz - 1) {
						namesOfTests[i] = name;
					}
					else {
						namesOfTests[i] = namesOfTestsCopy[i];
					}
				}
				delete[] namesOfTestsCopy;
			}
			obj1.close();
			int nq = 1;
			while (fs::exists("Tests/Test" + to_string(n))) {
				if(fs::exists(path+"/question"+to_string(nq)+".txt")){
					fstream obj2(path + "/question" + to_string(nq) + ".txt", ios::in);
					fstream obj3("Tests/Test"+to_string(n)+"/question" + to_string(nq) + ".txt", ios::out);
					if (obj2.is_open() && obj3.is_open()) {
						string txt = "";
						int nx2 = 0;
						for (;getline(obj2, txt);)
						{
							nx2++;
						}
						int nx3 = 1;
						obj2.seekg(0);
						for (;getline(obj2, txt);)
						{
							if (nx3 != 1 && nx3 != nx2) {
								if (int(txt[0]) == nx3 + 95) {
									obj3 << txt << '\n';// всі ряд з варіантами відп
								}
								else {
									obj3.close();
									obj2.close();
									fs::remove_all("Tests/Test" + to_string(n));
									break;
								}
							}
							else if (nx3 == nx2) {
								if (int(txt[0]) >= 97 && int(txt[0]) <= nx3 + 95 - 1 && size(txt) == 1) {
									obj3 << txt << '\n';// кінцевий ряд з варіантами відп
								}
								else {
									obj3.close();
									obj2.close();
									fs::remove_all("Tests/Test" + to_string(n));
									break;
								}
							}
							else {
								obj3 << txt << '\n';// 1ряд з питанням
							}
							nx3++;

						}
					}
					obj3.close();
					obj2.close();
				}
				else
				{
					break;
				}
				nq++;
			}
		}
		
	}
	void addQuestion(int testNum) {
		int n = 1;
		string prom;
		while (true) {
			prom = "Tests/Test" + to_string(testNum) + "/question" + to_string(n) + ".txt";
			if (!fs::exists(prom)) {
				break;
			}
			n++;
		}
		while (true) {
			fstream obj2("Tests/Test" + to_string(testNum) + "/question" + to_string(n) + ".txt", ios::out);
			if (obj2.is_open()) {
				string question;
				cout << "|||||||||||||||||||||||||||||||||||||\n";
				cout << "|  question:                        |\n";
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, question);
				obj2 << question << "\n";
				int x = 1;
				while (true) {
					string variant;
					cout << "|  variant:                         |\n";
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					getline(cin, variant);
					obj2 << static_cast<char>(x + 96) << ")" << variant << '\n';
					x++;
					int choise;
					cout << "|  1-exit                           |\n";
					cin >> choise;
					if (choise == 1) {
						break;
					}
				}
				while (true) {
					char correctAnsw;
					cout << "|  correctAnsw:                     |\n";
					cin >> correctAnsw;
					if (int(correctAnsw) >= 97 && int(correctAnsw) <= x + 95) {
						obj2 << correctAnsw << '\n';
						break;
					}
				}
				int choise;
				cout << "|  1-exit                           |\n";
				cin >> choise;
				cout << "|||||||||||||||||||||||||||||||||||||\n";
				if (choise == 1) {
					break;
				}
			}
			obj2.close();
			n++;
		}
	}
	void addCorrectAnsw(int testNum,int questionNum,char correctAnsw) {
		fstream obj2("Tests/Test" + to_string(testNum) + "/question" + to_string(questionNum) + ".txt", ios::in);
		string t;
		int siz = 0;
		int y = -2;
		string* text = new string[siz];
		if (obj2.is_open()) {
			for (;getline(obj2, t);)
			{
				y++;
				string* textCopy = new string[siz];
				for (int i = 0;i < siz;i++) {
					textCopy[i] = text[i];
				}
				siz++;
				delete[]text;
				text = new string[siz];
				for (int i = 0;i < siz;i++) {
					
					if (i == siz - 1) {
						text[i] = t + "\n";
					}
					else {
						text[i] = textCopy[i];
					}
				}
				delete[]textCopy;
			}
		}
		obj2.close();
		if (int(correctAnsw) >= 97 && int(correctAnsw) <= 96 + y) {
			fs::remove_all("Tests/Test" + to_string(testNum) + "/question" + to_string(questionNum) + ".txt");
			fstream obj1("Tests/Test" + to_string(testNum) + "/question" + to_string(questionNum) + ".txt", ios::out);
			if (obj1.is_open()) {
				for (int i = 0; i < siz; i++)
				{
					if (i != siz - 1) {
						obj1 << text[i];
					}
					else {
						obj1 << correctAnsw + '\n';

					}
				}
			}
			obj1.close();
		}
		delete[] text;
	}
};




int main()
{
	srand(time(0));	
	fs::remove_all("Users");
	fs::create_directory("Users");
	fs::remove_all("Admin");
	fs::create_directory("Admin");
	string adminLogin;
	string adminpassword;
	cout << "|||||||||||||||||||||||||||||||||||||\n";
	cout << "|  Login:                           |\n";
	cin >> adminLogin;
	cout << "|  Password:                        |\n";
	cin >> adminpassword;
	Admin admin(adminLogin, adminpassword);
	cout << "|||||||||||||||||||||||||||||||||||||\n";
	while (true) {
		int choise1;       
		string login;
		string password;
		int index = 0;
		cout << "|  1-as admin                       |\n";
		cout << "|  2-as user                        |\n";
		cin >> choise1;
		cout << "|||||||||||||||||||||||||||||||||||||\n";
		if (choise1 == 1) {
			cout << "|  Login:                           |\n";
			cin >> login;
			cout << "|  Password:                        |\n";
			cin >> password;
			cout << "|||||||||||||||||||||||||||||||||||||\n";
			if (login == admin.get_own_login() && password == admin.get_own_password()) {
				cout << "|  WELLCOME                         |\n";
				while (true) {
					int choise2;
					cout << "|  1-set own login                  |\n";
					cout << "|  2-set own password               |\n";
					cout << "|  3-user control                   |\n";
					cout << "|  4-statistic operatoins           |\n";
					cout << "|  5-test control                   |\n";
					cout << "|  6-exit                           |\n";
					cin >> choise2;
					cout << "|||||||||||||||||||||||||||||||||||||\n";
					if (choise2 == 6) {
						break;
					}
					else if (choise2 == 1) {
						cout << "|  Login:                           |\n";
						cin >> adminLogin;
						admin.set_own_login(adminLogin);
					}
					else if (choise2 == 2) {
						cout << "|  Password:                        |\n";
						cin >> adminpassword;
						admin.set_own_password(adminpassword);
					}
					else if (choise2 == 3) {
						while (true) {
							int choise3;
							cout << "|  1-make new user                  |\n";
							cout << "|  2-edit user                      |\n";
							cout << "|  3-del user                       |\n";
							cout << "|  4-exit                           |\n";
							cin >> choise3;
							cout << "|||||||||||||||||||||||||||||||||||||\n";
							if (choise3 == 4) {
								break;
							}
							else if (choise3 == 1) {
								User* user;
								admin.makeNewUser(user);
							}
							else if (choise3 == 2) {
								int num;
								cout << "|  User number(not index):          |\n";
								cin >> num;
								admin.edit(num);
							}
							else if (choise3 == 3) {
								int num;
								cout << "|  User number(not index):          |\n";
								cin >> num;
								admin.delUser(num);
							}
						}
					}
					else if (choise2 == 4) {
						while (true) {
							int choise3;
							cout << "|  1-all marks                      |\n";
							cout << "|  2-marks by category              |\n";
							cout << "|  3-marks by test                  |\n";
							cout << "|  4-marks by user                  |\n";
							cout << "|  5-exit                           |\n";
							cin >> choise3;
							cout << "|||||||||||||||||||||||||||||||||||||\n";
							if (choise3 == 5) {
								break;
							}
							else if (choise3 == 1) {
								admin.showAllMarks();
							}
							else if (choise3 == 2) {
								int category;
								for (int i = 0; i < admin.get_categoryArr_siz(); i++)
								{
									cout << "  " << i << "-" << admin.get_categoryArr()[i] << '\n';
								}
								cout << "|  Category:                        |\n";
								cin >> category;
								admin.showMarksByCategory(category);
							}
							else if (choise3 == 3) {
								int numbOfTest;
								for (int i = 0; i < admin.get_nameTest_siz(); i++)
								{
									cout << "  " << i << "-" << admin.get_namesOfTests()[i] << '\n';
								}
								cout << "|  numbOfTest:                      |\n";
								cin >> numbOfTest;
								admin.showMarksByTest(admin.get_namesOfTests()[numbOfTest]);
							}
							else if (choise3 == 4) {
								int nOfUser;
								cout << "|  nOfUser:                         |\n";
								cout << " " << admin.get_userArr_siz() << "-max\n";
								cin >> nOfUser;
								admin.showMarksByUser(nOfUser);
							}
						}
					}
					else if (choise2 == 5) {
						while (true) {
							int choise3;
							cout << "|  1-add test                       |\n";
							cout << "|  2-add category                   |\n";
							cout << "|  3-add question                   |\n";
							cout << "|  4-change correct question        |\n";
							cout << "|  5-exit                           |\n";
							cin >> choise3;
							cout << "|||||||||||||||||||||||||||||||||||||\n";
							if (choise3 == 5) {
								break;
							}
							else if (choise3 == 1) {
								int category;
								for (int i = 0; i < admin.get_categoryArr_siz(); i++)
								{
									cout << "  " << i << "-" << admin.get_categoryArr()[i] << '\n';
								}
								cout << "|  Category:                        |\n";
								cin >> category;
								string name;
								cout << "|  Name:                            |\n";
								cin >> name;
								int cho;
								cout << "|  Do u want to write path(1-Yes):  |\n";
								cin >> cho;
								if (cho == 1){
									string path;
									cout << "|  Path:                            |\n";
									cin >> path;
									admin.addTest(category, name, path);
								}
								else {
									admin.addTest(category, name);
								}
							}
							else if (choise3 == 2) {
								string name;
								cout << "|  Name:                            |\n";
								cin >> name;
								admin.addCategory(name);
							}
							else if (choise3 == 3) {
								int numbOfTest;
								for (int i = 0; i < admin.get_nameTest_siz(); i++)
								{
									cout << "  " << i+1 << "-" << admin.get_namesOfTests()[i] << '\n';
								}
								cout << "|  numbOfTest:                      |\n";
								cin >> numbOfTest;
								admin.addQuestion(numbOfTest);
							}
							else if (choise3 == 4) {
								int numbOfTest;
								for (int i = 0; i < admin.get_nameTest_siz(); i++)
								{
									cout << "  " << i << "-" << admin.get_namesOfTests()[i] << '\n';
								}
								cout << "|  numbOfTest:                      |\n";
								cin >> numbOfTest;
								int n = 1;
								string prom;
								while (true) {
									prom = "Tests/Test" + to_string(numbOfTest) + "/question" + to_string(n) + ".txt";
									if (!fs::exists(prom)) {
										break;
									}
									n++;
								}
								int qwNum;
								cout << "|  numbOfQuestion:                  |\n";
								cout << " " << n << "-max\n";
								cin >> qwNum;
								char correct;
								cout << "|  correct answer(only one):        |\n";
								cin >> correct;
								admin.addCorrectAnsw(numbOfTest, qwNum, correct);
							}
						}
					}
				}
			}
		}
		else if (choise1 == 2) {
			cout << "|  Login:                           |\n";
			cin >> login;
			cout << "|  Password:                        |\n";
			cin >> password;
			cout << "|||||||||||||||||||||||||||||||||||||\n";
			for (int i = 0; i < admin.get_userArr_siz(); i++)
			{
				if (login == admin.get_userArr()[i].get_login() && password == admin.get_userArr()[i].get_password()) {
					cout << "|  WELLCOME                         |\n";
					while (true) {
						int choise2;
						cout << "|  1-pass test                      |\n";
						cout << "|  2-continue test                  |\n";
						cout << "|  3-exit                           |\n";
						cin >> choise2;
						cout << "|||||||||||||||||||||||||||||||||||||\n";
						if (choise2 == 3) {
							break;
						}
						else if (choise2 == 1) {
							int numbOfTest;
							for (int j = 0; j < admin.get_nameTest_siz(); j++)
							{
								cout << "  " << j+1 << "-" << admin.get_namesOfTests()[j] << '\n';
							}
							cout << "|  numbOfTest:                      |\n";
							cin >> numbOfTest;
							admin.get_userArr()[i].passTheTest(numbOfTest);
						}
						else if (choise2 == 2) {
							int nOfSmth;
							cout << "NOfTest|NOfQw|Corrects\n";
							for (int j = 0; j < admin.get_userArr()[i].gettestBaseSiz(); j++)
							{
								cout << admin.get_userArr()[i].gettestBase()[j]<<"-"<<j<<'\n';
							}
							cin >> nOfSmth;
							string c = admin.get_userArr()[i].gettestBase()[nOfSmth];
							int ind1;
							int ind2;
							for (int j = 0; j < size(c); j++)
							{
								if (c[j] == ' ') {
									ind1 = j;
									break;
								}
							}
							for (int j = ind1+1; j < size(c); j++)
							{
								if (c[j] == ' ') {
									ind2 = j;
									break;
								}
							}
							int nOfTest = 0;
							for (int j = 0; j < ind1; j++)
							{
								nOfTest += (int(c[j]) - 48) * pow(10, ind1 - 1 - j);
							}
							int nOfQw = 0;
							for (int j = ind1 + 1; j < ind2; j++)
							{
								nOfQw += (int(c[j]) - 48) * pow(10, ind2 - 1 - j);
							}
							int nOfCorr = 0;
							for (int j = ind2 + 1; j < size(c); j++)
							{
								nOfCorr += (int(c[j]) - 48) * pow(10, size(c) - 1 - j);
							}
							admin.get_userArr()[i].passTheTest(nOfTest, nOfQw, nOfCorr);
							int siz = admin.get_userArr()[i].gettestBaseSiz() - 1;
							string* testBaseCopy = new string[siz];
							bool prom = true;
							for (int j = 0; j < siz; j++)
							{
								if (j == nOfSmth - 1 && prom) {
									j--;
									prom = false;
								}
								else if (j >= nOfSmth - 1 && !prom)
								{
									testBaseCopy[j] = admin.get_userArr()[i].gettestBase()[j + 1];
								}
								else {
									testBaseCopy[j] = admin.get_userArr()[i].gettestBase()[j];
								}
							}
							admin.get_userArr()[i].settestBaseMinusOne(testBaseCopy);
						}
					}
					break;
				}
			}
		}								
	}
}
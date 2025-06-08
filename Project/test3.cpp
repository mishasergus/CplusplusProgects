#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cctype>
#include "StudentsProject.h"
using namespace std;
namespace fs = filesystem;

class Admin
{
private:

public:

};

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
	string* testBase = new string[0];
public:
	User(string login1, string password1, string name1, string surename1, string fathername1, string adress1, int phone1, string nameOfMark1) {
		login = login1;
		password = password1;
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
		nameOfMark = prom + "/" + nameOfMark1 + ".txt";
		fstream obj1(nameOfMark, ios::out);
		obj1.close();
		fstream obj2(prom+"/info.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << "Login:\n" << login << '\n' << "Password:\n" << password << '\n' << "Name:\n" << name << '\n' << "Surename:\n" << surename << '\n' << "Fathername:\n" << fathername << '\n' << "Adress:\n" << adress << '\n' <<"Phone:\n" << phone;
		}
		obj2.close();
	}
	void passTheTest(int nOfTest) {
		int correct = 0;
		int n = 1;
		while (true) {
			string prom = "Tests/Test" + to_string(nOfTest)+"/question" + to_string(n)+".txt";
			if (!fs::exists(prom)) {
				n--;
				break;
			}
			n++;
		}
		for (int j = 1; j <= n; j++)
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
						string answ;
						cout << ":\n";
						cin >> answ;
						answ += "\n";
						if (answ == text[i]) {
							correct++;
						}
					}
				}

			}
			obj2.close();
		}
		if (n != 0) {
			fstream obj1(nameOfMark, ios::out);
			int mark = round((correct / n) * 12);
			if (obj1.is_open()) {
				obj1 << to_string(nOfTest) << " " << mark;
			}
			cout << "U got " << correct << " correct from " << n << " possible. U`r mark is " << mark << "\n";
			obj1.close();
		}
		else {
			cout << "Test in undefined\n";
		}
	}
};








int main()
{
	srand(time(0));	
	User user1("qwerty@dmail.com","qwerty123","Oleg","Olegov", "Olegovich","Olegova2",88005553535,"Oleg`sMarks");
	user1.passTheTest(1);
}
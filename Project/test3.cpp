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
	string artessOfMark;
public:
	User(string login1, string password1, string name1, string surename1, string fathername1, string adress1, int phone1, string artessOfMark1) {
		login = login1;
		password = password1;
		name = name1;
		surename = surename1;
		fathername = fathername1;
		adress = adress1;
		phone = phone1;
		artessOfMark = "markDir/" + artessOfMark1;
		fstream obj1(artessOfMark+".txt", ios::out);
		obj1.close();
		fstream obj2("arrOfUsers.txt", ios::out);
		if (obj2.is_open())
		{
			obj2 << login << ' ' << password << ' ' << name << ' ' << surename << ' ' << fathername << ' ' << adress << ' ' << phone << ' ' << artessOfMark << '\n';
		}
		obj2.close();
	}
	void passTheTest(int nOfTest) {
		int correct = 0;
		for (int j = 0; j <= 12; j++)
		{
			fstream obj2("Tests/Test" + to_string(nOfTest) + "/question" + to_string(j) + ".txt", ios::in);
			if (obj2.is_open())
			{
				int siz = 0;
				string* text = new string[siz];
				string txt = "";
				while (getline(obj2, txt)) {
					txt = "";
					string* textCopy = new string[siz];
					for (int i = 0;i < siz;i++) {
						textCopy[i] = text[i];
					}
					siz++;
					delete[]text;
					text = new string[siz];
					for (int i = 0;i < siz;i++) {
						if (i == siz - 1) {
							text[i] = txt;
						}
						else {
							text[i] = textCopy[i];
						}
					}
					delete[]textCopy;
					txt.clear();
				}
				for (int i = 0; i < text->length() + 1; i++)
				{
					if (text->length() + 1 != i) {
						cout << text[i];
					}
					else {
						string answ;
						cout << ":\n";
						cin >> answ;
						if (answ == text[i]) {
							correct++;
						}
					}
				}

			}
			obj2.close();
		}
	}
};








int main()
{
	srand(time(0));	
	string* arr = new string[3];
	arr[0] = "dd";
	arr[1] = "wwddww";
	arr[2] = "dd";
	for (int i = 0; i < arr->length(); i++)
	{
		cout << i << endl;
	}
}
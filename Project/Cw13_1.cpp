#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
private:
	string name;
	int age;
	bool lovwCplusolus;
public:
	Student(string name1, int age1, bool lovwCplusolus1){
		name = name1;
		age = age1;
        lovwCplusolus = lovwCplusolus1;
	}

	void Show() {
		cout << "Name: " << name << " Age: " << age << " lovwCplusolus: " << lovwCplusolus << endl;
	}
    void setName(string name1) {
        name = name1;
    }
    string getName() {
        return name;
    }
    void setAge(int age1) {
        age = age1;
    }
    int getAge() {
        return age;
    }
    void setLovwCplusolus(bool lovwCplusolus1) {
        lovwCplusolus = lovwCplusolus1;
    }
    bool getLovwCplusolus() {
        return lovwCplusolus;
    }

};

void writeRundNums(string& file, int nOfNums) {
    fstream obj;
    obj.open(file, ios::out);
    if (obj.is_open())
    {
        for (int i = 0;i < nOfNums;i++) {
            obj << rand() % 10 + 1<<endl;
        }
        obj.close();
    }
}

void write(string & file, string text) {
    fstream obj;
    obj.open(file, ios::out);
    if (obj.is_open())
    {
        obj << text << endl;
        obj.close();
    }
}

void read(string& file) {
    fstream obj;
    string txt;
    obj.open(file, ios::in);
    if (obj.is_open())
    {
        for (char letter;obj.get(letter);)
        {
            txt += letter;
            cout << letter;
        }
        obj.close();
    }
}

void writeOleg(string& file,Student students[]) {
    fstream obj;
    obj.open(file, ios::out);
    if (obj.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            obj << "Oleg" <<i+1<< endl;
            obj << "Age: " << students[i].getAge() << endl;
            obj << "Name: " << students[i].getName() << endl;
            obj << "LovwC++: " << students[i].getLovwCplusolus() << endl;
        }
        obj.close();
    }
}

int main()
{
    srand(time(0));

    string adress = "text.txt";
    
    write(adress, "qwerty");

    read(adress);

    writeRundNums(adress, 3);

    read(adress);

    Student oleg("Oleg", 12, true);
    Student oleg1("Oleg1", 21, true);
    Student oleg2("Oleg2", 213, true);

    Student arrOfOlegs[3] = {oleg ,oleg1 ,oleg2};

    writeOleg(adress, arrOfOlegs);

    read(adress);

    int answr;

    string nameOfFile;
    int size = 0;
    string* namesOfFiles = new string[size];

    bool ispovtor = 0;

    while (true) {
        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "|                                                |\n";
        cout << "|  1-cteate new file                             |\n";
        cout << "|                                                |\n";
        cout << "|  2-read file                                   |\n";
        cout << "|                                                |\n";
        cout << "|  3-copy and create new file                    |\n";
        cout << "|                                                |\n";
        cin >> answr;

        if (answr == 1) {                                             
            cout << "|  Enter name of file(Witout txt):               |\n";
            cout << "|  ";
            cin >> nameOfFile;
            cout << "                                      |\n";
            while (true) {
                for (int i = 0; i < size; i++)
                {
                    if (nameOfFile == namesOfFiles[i]) {
                        ispovtor = 1;
                    }
                }
                if (!ispovtor) {
                    string* namesOfFilesProm = new string[size];
                    for (int i = 0; i < size; i++)
                    {
                        namesOfFilesProm[i] = namesOfFiles[i];
                    }
                    delete namesOfFiles;
                    size++;
                    string* namesOfFiles = new string[size];
                    for (int i = 0; i < size; i++)
                    {
                        if (i == size - 1) {
                            namesOfFiles[i] = nameOfFile;
                        }
                        else {
                            namesOfFiles[i] = namesOfFilesProm[i];
                        }
                    }
                    delete namesOfFilesProm;
                    break;
                }
                else
                {
                    cout << "|  Enter name of file(Witout txt):               |\n";
                    cout << "|  ";
                    cin >> nameOfFile;
                    cout << "                                    |\n";
                }
            }
        }
    }
    
}
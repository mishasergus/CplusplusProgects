//#include <iostream>
//#include <fstream>
//#include <string>
//#include <filesystem>
//using namespace std;
//using namespace filesystem;
//
//
//struct Student
//{
//private:
//    string name;
//    int age;
//    bool lovwCplusolus;
//public:
//    Student(string name1, int age1, bool lovwCplusolus1) {
//        name = name1;
//        age = age1;
//        lovwCplusolus = lovwCplusolus1;
//    }
//
//    void Show() {
//        cout << "Name: " << name << " Age: " << age << " lovwCplusolus: " << lovwCplusolus << endl;
//    }
//    void setName(string name1) {
//        name = name1;
//    }
//    string getName() {
//        return name;
//    }
//    void setAge(int age1) {
//        age = age1;
//    }
//    int getAge() {
//        return age;
//    }
//    void setLovwCplusolus(bool lovwCplusolus1) {
//        lovwCplusolus = lovwCplusolus1;
//    }
//    bool getLovwCplusolus() {
//        return lovwCplusolus;
//    }
//
//};
//
//
//void writeRundNums(string& file, int nOfNums) {
//    fstream obj;
//    obj.open(file, ios::out);
//    if (obj.is_open())
//    {
//        for (int i = 0;i < nOfNums;i++) {
//            obj << rand() % 10 + 1 << endl;
//        }
//        obj.close();
//    }
//}
//
//void write(string& file, string text) {
//    fstream obj;
//    obj.open(file, ios::out);
//    if (obj.is_open())
//    {
//        obj << text << endl;
//        obj.close();
//    }
//}
//
//void read(string& file) {
//    ifstream obj(file + ".txt");
//    string txt;
//    //obj.open(file, ios::in);
//    if (obj.is_open())
//    {
//        for (char letter;obj.get(letter);)
//        {
//            txt += letter;
//            cout << letter;
//        }
//        obj.close();
//    }
//    else {
//        cout << "File can not be opened..." << endl;
//    }
//}
//
//int nOfSimb(string& file) {
//    ifstream obj(file + ".txt");
//    int num = 0;
//    //obj.open(file, ios::in);
//    if (obj.is_open())
//    {
//        for (char letter;obj.get(letter);)
//        {
//            num ++;
//        }
//        obj.close();
//    }
//    else {
//        cout << "File can not be opened..." << endl;
//    }
//    return num;
//}
//
//void copy(string oldName, string newName)
//{
//    ifstream obj(oldName + ".txt");
//    string txt;
//    obj.open(oldName, ios::in);
//    if (obj.is_open())
//    {
//        for (char letter;obj.get(letter);)
//        {
//            txt += letter;
//        }
//        obj.close();
//    }
//    else {
//        cout << "File can not be opened..." << endl;
//    }
//    
//    fstream obj2;
//    obj2.open(newName, ios::out);
//    if (obj2.is_open())
//    {
//        obj2 << txt << endl;
//        obj2.close();
//    }
//}
//
//void writeOleg(string& file, Student students[]) {
//    fstream obj;
//    obj.open(file, ios::out);
//    if (obj.is_open())
//    {
//        for (int i = 0; i < 3; i++)
//        {
//            obj << "Oleg" << i + 1 << endl;
//            obj << "Age: " << students[i].getAge() << endl;
//            obj << "Name: " << students[i].getName() << endl;
//            obj << "LovwC++: " << students[i].getLovwCplusolus() << endl;
//        }
//        obj.close();
//    }
//}
//
//int main()
//{
//    srand(time(0));
//
//    /*if(is_directory("bgg")){}
//    create_directory("bgg");*/
//
//    string adress = "text.txt";
//
//    write(adress, "qwerty");
//
//    read(adress);
//
//    writeRundNums(adress, 3);
//
//    read(adress);
//
//    Student oleg("Oleg", 12, true);
//    Student oleg1("Oleg1", 21, true);
//    Student oleg2("Oleg2", 213, true);
//
//    Student arrOfOlegs[3] = { oleg ,oleg1 ,oleg2 };
//
//    writeOleg(adress, arrOfOlegs);
//
//    read(adress);
//
//    int answr;
//
//    string nameOfFile;
//    int size = 0;
//    string* namesOfFiles = new string[size];
//
//    bool ispovtor = 0;
//
//    while (true) {
//        int answr;
//        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||\n";
//        cout << "|                                                |\n";
//        cout << "|  1-cteate new file                             |\n";
//        cout << "|                                                |\n";
//        cout << "|  2-read file                                   |\n";
//        cout << "|                                                |\n";
//        cout << "|  3-copy and create new file                    |\n";
//        cout << "|                                                |\n";
//        cout << "|  4-number of simb                              |\n";
//        cout << "|                                                |\n";
//        cin >> answr;
//
//        if (answr == 1) {
//            cout << "|  Enter name of file(Witout txt):               |\n";
//            cout << "|  ";
//            cin >> nameOfFile;
//            cout << "                                      |\n";
//            while (true) {
//                ispovtor = 0;
//                for (int i = 0; i < size; i++)
//                {
//                    if (nameOfFile == namesOfFiles[i]) {
//                        ispovtor = 1;
//                    }
//                }
//                if (!ispovtor) {
//                    string* namesOfFilesProm = new string[size];
//                    for (int i = 0; i < size; i++)
//                    {
//                        namesOfFilesProm[i] = namesOfFiles[i];
//                    }
//                    delete[] namesOfFiles;
//                    size++;
//                    namesOfFiles = new string[size];
//                    //string* namesOfFiles = new string[size];
//                    for (int i = 0; i < size; i++)
//                    {
//                        if (i == size - 1) {
//                            namesOfFiles[i] = nameOfFile;
//                        }
//                        else {
//                            namesOfFiles[i] = namesOfFilesProm[i];
//                        }
//                    }
//                    delete[] namesOfFilesProm;
//                    // ispovtor = 0;
//                    break;
//                }
//                else
//                {
//                    cout << "|  Enter name of file(Witout txt):               |\n";
//                    cout << "|  ";
//                    cin >> nameOfFile;
//                    cout << "                                    |\n";
//                    // ispovtor = 0;
//                }
//            }
//            string text;
//            cout << "|  Enter text(' 'to go to enoter line):          |\n";
//            cout << "|  ";
//            cin >> text;
//            cout << "                                    |\n";
//            string zminna5 = nameOfFile + ".txt";
//            write(zminna5, text);
//        }
//        else if (answr == 2) {
//            cout << "|  Enter name of file(Witout txt):               |\n";
//            cout << "|  ";
//            cin >> nameOfFile;
//            cout << "                                      |\n";
//            /*    while (true) {
//                    ispovtor = 0;
//                    for (int i = 0; i < size; i++)
//                    {
//                        if (nameOfFile == namesOfFiles[i]) {
//                            ispovtor = 1;
//                        }
//                    }
//                    if (ispovtor) {
//
//                        break;
//                    }
//                    else
//                    {
//                        cout << "|  Enter name of file(Witout txt):               |\n";
//                        cout << "|  ";
//                        cin >> nameOfFile;
//                        cout << "                                    |\n";
//                    }
//
//                }*/
//            read(nameOfFile);
//        }
//        else if (answr == 3) {
//            cout << "|  Enter name of file(Witout txt):               |\n";
//            cout << "|  ";
//            cin >> nameOfFile;
//            cout << "                                      |\n";
//            string oldNameOfFile;
//            cout << "|  Enter name of OLD file(Witout txt):           |\n";
//            cout << "|  ";
//            cin >> oldNameOfFile;
//            cout << "                                      |\n";
//            while (true) {
//                ispovtor = 0;
//                for (int i = 0; i < size; i++)
//                {
//                    if (nameOfFile == namesOfFiles[i]) {
//                        ispovtor = 1;
//                    }
//                }
//                if (!ispovtor) {
//                    string* namesOfFilesProm = new string[size];
//                    for (int i = 0; i < size; i++)
//                    {
//                        namesOfFilesProm[i] = namesOfFiles[i];
//                    }
//                    delete[] namesOfFiles;
//                    size++;
//                    namesOfFiles = new string[size];
//                    //string* namesOfFiles = new string[size];
//                    for (int i = 0; i < size; i++)
//                    {
//                        if (i == size - 1) {
//                            namesOfFiles[i] = nameOfFile;
//                        }
//                        else {
//                            namesOfFiles[i] = namesOfFilesProm[i];
//                        }
//                    }
//                    delete[] namesOfFilesProm;
//                    // ispovtor = 0;
//                    break;
//                }
//                else
//                {
//                    cout << "|  Enter name of file(Witout txt):               |\n";
//                    cout << "|  ";
//                    cin >> nameOfFile;
//                    cout << "                                    |\n";
//                    // ispovtor = 0;
//                }
//            }
//            string zminnax = nameOfFile + ".txt";
//            string zminnay = oldNameOfFile + ".txt";
//            copy(zminnay, zminnax);
//
//        }
//        else if (answr == 4) {
//            cout << "|  Enter name of file(Witout txt):               |\n";
//            cout << "|  ";
//            cin >> nameOfFile;
//            cout << "                                      |\n";
//
//            string zminnax = nameOfFile;
//            cout << nOfSimb(zminnax)<<endl;
//        }
//    }
//    delete[]namesOfFiles;
//}
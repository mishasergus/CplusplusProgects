//#include <iostream>
//#include <fstream>
//#include <string>
//#include <filesystem>
//#include <cctype>
//#include "StudentsProject.h"
//using namespace std;
//namespace fs = filesystem;
//
////
////struct ItStep
////{
////    private:
////        int nOfStudents;
////        int nOfItStudents;
////        int nOfDesignStudents;
////    public:
////        ItStep(int nOfStudents1, int nOfItStudents1) {
////            nOfStudents = nOfStudents1;
////            nOfItStudents = nOfItStudents1;
////            nOfDesignStudents = nOfStudents - nOfItStudents;
////        }
////        void show()
////        {
////            cout << "nOfStudents: " << nOfStudents << " nOfItStudents: " << nOfItStudents << " nOfDesignStudents: " << nOfDesignStudents << endl;
////        }
////        int getDesine() {
////            return nOfDesignStudents;
////        }
////};
////struct Student
////{
////private:
////    string name;
////    string surename;
////    string fathername;
////    int age;
////    int midMark;
////public:
////    Student() {}
////    Student(string name1, string surename1, string fathername1, int age1, int midMark1) {
////        name = name1;
////        surename = surename1;
////        fathername = fathername1;
////        age = age1;
////        midMark = midMark1;
////    }
////    ////////////////////
////    void show()
////    {
////        cout << "name: " << name << " surename: " << surename << " fathername: " << fathername << " age: " << age << " midMark: " << midMark << endl;
////    }
////    string ret_inf()
////    {
////        string s = "name: " + name + " surename: " + surename + " fathername: " + fathername + " age: " + to_string(age) + " midMark: " + to_string(midMark) + '\n' + ' ';
////        return s;
////    }
////    ////////////////////
////    string get_name() {
////        return name;
////    }
////    string get_surename() {
////        return surename;
////    }
////    string get_fathername() {
////        return fathername;
////    }
////    int get_age() {
////        return age;
////    }
////    int get_midMark() {
////        return midMark;
////    }
////    ////////////////////
////    void set_name(string name1) {
////        try
////        {
////            name = name1;
////        }
////        catch (const std::exception&)
////        {
////            name = "DEFAULT";
////        }
////    }
////    void set_surename(string surename1) {
////        try
////        {
////            surename = surename1;
////        }
////        catch (const std::exception&)
////        {
////            surename = "DEFAULT";
////        }
////    }
////    void set_fathername(string fathername1) {
////        try
////        {
////            fathername = fathername1;
////        }
////        catch (const std::exception&)
////        {
////            fathername = "DEFAULT";
////        }
////    }
////    void set_age(int age1) {
////        try
////        {
////            age = age1;
////        }
////        catch (const std::exception&)
////        {
////            age = 0;
////        }
////    }
////    void set_midMark(int midMark1) {
////        try
////        {
////            midMark = midMark1;
////        }
////        catch (const std::exception&)
////        {
////            midMark = 0;
////        }
////    }
////
////};
////void sortArr(Student arr[], bool reverse = false) {
////    if (!reverse) {
////        for (int i = 0; i < 10; i++)
////        {
////            for (int j = 0; j < 10; j++)
////            {
////                if (j > i && arr[i].get_midMark() < arr[j].get_midMark()) {
////                    Student prom = arr[i];
////                    arr[i] = arr[j];
////                    arr[j] = prom;
////                }
////            }
////        }
////    }
////    else{
////        for (int i = 0; i < 10; i++)
////        {
////            for (int j = 0; j < 10; j++)
////            {
////                if (j > i && arr[i].get_midMark() > arr[j].get_midMark()) {
////                    Student prom = arr[i];
////                    arr[i] = arr[j];
////                    arr[j] = prom;
////                }
////            }
////        }
////    }
////}
//int searchWorld(string text, int index, string word, int Wordindex = 0) {
//    int ind = index;
//    int Wordind = Wordindex;
//    if (text[index] == word[Wordindex]) {
//        if (Wordindex == size(word) - 1) {
//            return 1;
//        }
//        else
//        {
//            ind++;
//            Wordind++;
//            return searchWorld(text, ind, word, Wordind);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    srand(time(0));
////    ///*ItStep step(33, 5);
////    //cout << step.getDesine() <<'\n';*/
////    //string password;
////    //cout << "Enter password:\n";
////    //cin >> password;
////    //fs::remove("data.txt");
////
////    //string nameArr[10] = {"Bob", "Tom", "Walter", "Antonio", "Jesika", "Stesy", "Aaron", "Derrick", "Eliot", "Iris"};
////    //string surenameArr[10] = {"Ayris", "Bedcock", "White", "Pripipi", "Beach", "Caferro", "Dickens", "Edge", "Fellows", "Fox"};
////    //string fathenameArr[10];
////    //for (int i = 0; i < 10; i++)
////    //{
////    //    fathenameArr[i] = nameArr[i] + "ovich";
////    //}
////    //Student student0;
////    //Student student1;
////    //Student student2;
////    //Student student3;
////    //Student student4;
////    //Student student5;
////    //Student student6;
////    //Student student7;
////    //Student student8;
////    //Student student9;
////    //Student arrStud[10] = {student0,student1, student2, student3, student4, student5, student6, student7, student8, student9};
////    //for (int i = 0; i < 10; i++)
////    //{
////    //    arrStud[i].set_age(rand() % 3 + 16);
////    //    arrStud[i].set_midMark(rand() % 100 + 1);
////    //    arrStud[i].set_name(nameArr[rand() % 10]);
////    //    arrStud[i].set_surename(surenameArr[rand() % 10]);
////    //    arrStud[i].set_fathername(fathenameArr[rand() % 10]);
////    //}
////    //fstream obj("data.txt", ios::app);
////    //if (obj.is_open()) {
////    //    for (int i = 0; i < 10; i++)
////    //    {
////    //        sortArr(arrStud);
////    //        if (arrStud[i].get_midMark() > 50) {
////    //            arrStud[i].show();
////    //        }
////    //        obj << arrStud[i].ret_inf();
////    //    }
////    //}
////    //else {
////    //    cout << "ERROR\n";
////    //}
////    //obj.close();
////
////    //while (true) {
////    //    string answ;
////    //    cout << "Do u want to edit somewone(yes/no):\n";
////    //    cin >> answ;
////    //    string lowerAnsw = toLowerCase(answ);
////    //    if (lowerAnsw == "no") {
////    //        break;
////    //    }
////    //    else if (lowerAnsw == "yes") {
////    //        cout << "password:\n";
////    //        cin >> answ;
////    //        if (answ != password) {
////    //            break;
////    //        }
////    //        try
////    //        {
////    //            int index;
////    //            cout << "Index:\n";
////    //            cin >> index;
////    //            int age;
////    //            cout << "age:";
////    //            cin >> age;
////    //            if (age > 16 && age < 120) {
////    //                arrStud[index].set_age(age);
////    //            }
////    //            else {
////    //                arrStud[index].set_age(rand() % 3 + 16);
////    //            }
////    //            int midMark;
////    //            cout << "midMark:";
////    //            cin >> midMark;
////    //            if (midMark >= 0 && midMark <= 100) {
////    //                arrStud[index].set_midMark(midMark);
////    //            }
////    //            else {
////    //                arrStud[index].set_midMark(rand() % 100 + 1);
////    //            }
////    //            string name;
////    //            cout << "name:\n";
////    //            cin >> name;
////    //            arrStud[index].set_name(name);
////    //            string surename;
////    //            cout << "surename:\n";
////    //            cin >> surename;
////    //            arrStud[index].set_surename(surename);
////    //            string fathename;
////    //            cout << "fathename:\n";
////    //            cin >> fathename;
////    //            arrStud[index].set_fathername(fathename);
////    //            fs::remove("data.txt");
////    //            fstream obj("data.txt", ios::app);
////    //            if (obj.is_open()) {
////    //                for (int i = 0; i < 10; i++)
////    //                {
////    //                    sortArr(arrStud);
////    //                    if (arrStud[i].get_midMark() > 50) {
////    //                        arrStud[i].show();
////    //                    }
////    //                    obj << arrStud[i].ret_inf();
////    //                }
////    //            }
////    //            cout << "COMPLETE\n";
////    //        }
////    //        catch (const std::exception&)
////    //        {
////    //            cout << "Smth was wrong\n";
////    //        }
////    //    }
////    //}
////    //string answ;
////    //cout << "Do u want to clean\n";
////    //cin >> answ;
////    //string lowerAnsw;
////    //for (char c : answ)
////    //{
////    //    lowerAnsw += tolower(c);
////    //}
////    //if (lowerAnsw == "yes") {
////    //    ifstream obj("data.txt", ios::in);
////    //    string txt;
////    //    if (obj.is_open())
////    //    {
////    //        for (char letter;obj.get(letter);)
////    //        {
////    //            txt += letter;
////    //        }
////    //        obj.close();
////    //    }
////    //    else {
////    //        cout << "File can not be opened..." << endl;
////    //    }
////    //        
////    //    fstream obj2;
////    //    obj2.open("copy.txt", ios::out);
////    //    if (obj2.is_open())
////    //    {
////    //        obj2 << txt << endl;
////    //        obj2.close();
////    //    }
////    //    //fs::remove("data.txt");
////    //}
////    ////////////////////////////////////////////////////
//    ifstream objw("data.txt", ios::in);
//    string txt;
//    int biggest = 0;
//    int len = 0;
//    if (objw.is_open())
//    {
//        for (char letter;objw.get(letter);)
//        {
//            txt += letter;
//        }
//        objw.close();
//    }
//    else {
//        cout << "File can not be opened..." << endl;
//    }
//    cout << txt;
//    bool first = true;
//    for (int i = size(txt); i >= 0; i--)
//    {
//        if (txt[i] == '\n'&&!first) {
//            break;
//        }
//        else if (txt[i] == '\n' && first) {
//            first = false;
//        }
//        else
//        {
//            txt[i] = ' ';
//        }
//        if (txt[i] == '\n' && len > biggest) {
//            biggest = len;
//            len = 0;
//        }
//        len++;
//    }
//    cout << '\n';
//    cout << len;
//    cout << '\n';
//    cout << txt;
//    objw.close();
//    fstream obje;
//    obje.open("copyWithoutLast.txt", ios::out);
//    if (obje.is_open())
//    {
//        obje << txt << endl;
//        obje.close();
//    }
//    fs::remove("data.txt");
//    string word;
//    cout << "word:";
//    cin >> word;
//    int nofw = 0;
//    int siz = 0;
//    string* wordArr = new string[siz];
//    bool canWeDoThis = true;
//    for (int i = 0; i < size(txt); i++)
//    {
//        if (canWeDoThis) {
//            string word = "";
//            for (int j = i; j < size(txt); j++)
//            {
//                if (txt[j] != ' ') {
//                    word += txt[j];
//                }
//                else
//                {
//                    break;
//                }
//            }
//            if (word != "") {
//                string* wordArrCopy = new string[siz];
//                for (int j = 0; j < siz; j++)
//                {
//                    wordArrCopy[j] = wordArr[j];
//                }
//                delete[]wordArr;
//                siz++;
//                wordArr = new string[siz];
//                for (int j = 0; j < siz; j++)
//                {
//                    if (j == siz - 1) {
//                        wordArr[j] = word;
//                    }
//                    else
//                    {
//                        wordArr[j] = wordArrCopy[j];
//                    }
//                }
//                delete[]wordArrCopy;
//                canWeDoThis = false;
//            }
//        }
//        nofw += searchWorld(txt, i, word);
//        if (txt[i] == ' ') {
//            canWeDoThis = true;
//        }
//    }
//    cout << nofw<<endl;
//    string newWorld;
//    cout << "newWorld:";
//    cin >> newWorld;
//    string newTxt = "";
//    for (int i = 0;i < siz;i++) {
//        if (wordArr[i] == word) {
//            wordArr[i] = newWorld;
//        }
//        newTxt += wordArr[i] + " ";
//    }
//    cout << newTxt;
//    fs::remove("data.txt");
//    fstream objaaaa;
//    objaaaa.open("data.txt", ios::out);
//    if (objaaaa.is_open())
//    {
//        objaaaa << newTxt << endl;
//        objaaaa.close();
//    }
//}
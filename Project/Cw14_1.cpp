#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

void isHere(string dirName, string dirPath = "") {
    if (size(dirPath) > 0) {
        dirName = "/" + dirName;
    }

    string abracadabra = dirPath + dirName;
    fs::path obj = abracadabra;
    string abracadabraa = abracadabra + ".txt";
    if (obj.extension() == ".txt") {
        if (fs::exists(abracadabraa)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    else if (obj.extension() == "") {
        if (fs::exists(abracadabra)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}

void del(string dirName, string dirPath = "") {
    if (size(dirPath) > 0) {
        dirName = "/" + dirName;
    }

    string abracadabra = dirPath + dirName;
    fs::path obj = abracadabra;
    if (obj.extension() == ".txt") {
        string abracadabraa = abracadabra + ".txt";
        fs::remove_all(abracadabraa);

    }
    else if (obj.extension() == "") {
        fs::remove_all(abracadabra);
    }
}

void createNewDir(string dirName, string dirPath = "") {
    if (size(dirPath) > 0) {
        string abracadabra = dirPath + "/" + dirName;
        fs::create_directory(abracadabra);
    }
    else {
        fs::create_directory(dirName);
    }
}

void rename(string newName, string path, string oldName) {
    if (size(path) > 0) {
        newName = "/" + newName;
        oldName = "/" + oldName;
    }


    string abracadabraOld = path + oldName;
    fs::path obj = abracadabraOld;
    if (obj.extension() == ".txt"){
        string abracadabraNew = path + newName + ".txt";
        fs::rename(abracadabraOld, abracadabraNew);
        
    }
    else if (obj.extension() == ""){
        string abracadabraNew = path + newName;
        fs::rename(abracadabraOld, abracadabraNew);
    }
}

int main()
{
    srand(time(0));

    //fs::create_directory("QWE");
    //fs::create_directory("QWE/asdfghjkl");

    //fs::create_directories("qwerty/QWERTY");

    //if (fs::exists("QWE/asdfghjkl")) {
    //    /*fs::rename("qwe", "asd");*/
    //    cout << "qwert\n";
    //}

    //fs::remove_all("QWE");

    //fs::path obj = "qwerty/QWERTY";

    //if (fs::exists(obj))
    //{
    //    cout << obj.filename() << endl;
    //    cout << obj.extension() << endl; // розш файлу
    //    cout << fs::file_size(obj) << endl; // розмір файлу
    //    cout << obj.parent_path() << endl;  //назва батьк дир
    //}


    int answr;
    
    
    bool ispovtor = 0;
    
    while (true) {
        int answr;
        string name;
        string path;
        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "|                                                |\n";
        cout << "|  1-cteate new dir                              |\n";
        cout << "|                                                |\n";
        cout << "|  2-rename dir/file                             |\n";
        cout << "|                                                |\n";
        cout << "|  3-del dir/file                                |\n";
        cout << "|                                                |\n";
        cout << "|  4-do we have file                             |\n";
        cout << "|                                                |\n";
        cin >> answr;
    
        if (answr == 1) {                                             
            cout << "|  Enter name of dir:                        |\n";
            cout << "|  ";
            cin >> name;
            cout << "                                      |\n";

            cout << "|  Enter path of dir:                        |\n";
            cout << "|  ";
            cin >> path;
            cout << "                                      |\n";
            if (path == "1") {
                path = "";
            }
            createNewDir(name, path);
        }
        else if (answr == 2) {                                        
            cout << "|  Enter name of New dir/file(Witout txt):       |\n";
            cout << "|  ";
            cin >> name;
            cout << "                                      |\n";
            string oldName;
            cout << "|  Enter name of Old dir/file(Witout txt):       |\n";
            cout << "|  ";
            cin >> oldName;
            cout << "                                      |\n";
            cout << "|  Enter path of dir:                        |\n";
            cout << "|  ";
            cin >> path;
            cout << "                                      |\n";
            if (path == "1") {
                path = "";
            }
            rename(name, path, oldName);
        }
        else if (answr == 3) {                                        
            cout << "|  Enter name of dir/file(Witout txt):           |\n";
            cout << "|  ";
            cin >> name;
            cout << "                                      |\n";
            cout << "|  Enter path of dir:                        |\n";
            cout << "|  ";
            cin >> path;
            cout << "                                      |\n";
            if (path == "1") {
                path = "";
            }
            del(name, path);
        }
        else if (answr == 4) {
            cout << "|  Enter name of dir/file(Witout txt):           |\n";
            cout << "|  ";
            cin >> name;
            cout << "                                      |\n";
            cout << "|  Enter path of dir:                        |\n";
            cout << "|  ";
            cin >> path;
            cout << "                                      |\n";
            if (path == "1") {
                path = "";
            }
            isHere(name, path);
        }
    }

}
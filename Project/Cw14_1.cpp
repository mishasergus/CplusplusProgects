#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using namespace std;
namespace fs = filesystem;



int main()
{
    srand(time(0));

    fs::create_directory("QWE");
    fs::create_directory("QWE/asdfghjkl");

    fs::create_directories("qwerty/QWERTY");

    if (fs::exists("QWE/asdfghjkl")) {
        /*fs::rename("qwe", "asd");*/
        cout << "qwert\n";
    }

    fs::remove_all("QWE");

}
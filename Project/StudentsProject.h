#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cctype>
using namespace std;
namespace fs = filesystem;
string toLowerCase(string old);

void sortArr(int mass[], int size, bool reverce = false, bool bubble = false);
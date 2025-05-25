#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "ArrOperations.h"
using namespace std;
namespace fs = filesystem;

int main()
{
    srand(time(0));
    int arr1[8] = { 1, 2, 3, 2, 3, 2, 3, 1 };
    sortArr(arr1, 8,true,true);

}
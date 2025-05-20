#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "Math.h"
#include "ArrOperations.h"
using namespace std;
namespace fs = filesystem;

void hello();
int main()
{
    srand(time(0));
    cout << add(1, 4) << "\n";
    int arr[5] = { 1,2,4,5,6 };
    showArr(arr, 5);
    sort_parn(arr, 5);
    showArr(arr, 5);
    hello();

}

void hello() {
    cout << "Hellow world\n";
}
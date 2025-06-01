#include "StudentsProject.h"
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cctype>
using namespace std;
namespace fs = filesystem;

string toLowerCase(string old) {
	string ne = "";
	for (char c : old)
	{
		ne += tolower(c);
	}
	return ne;
}
void sortArr(int mass[], int size, bool big, bool bubble)
{
	if (!big && !bubble) {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j > i && mass[i] < mass[j]) {
					int prom = mass[i];
					mass[i] = mass[j];
					mass[j] = prom;
				}
			}
			cout << mass[i] << " ";
		}
		cout << "\n";
	}
	else if (big && !bubble) {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j > i && mass[i] > mass[j]) {
					int prom = mass[i];
					mass[i] = mass[j];
					mass[j] = prom;
				}
			}
			cout << mass[i] << " ";
		}
		cout << "\n";
	}
	else if (!big && bubble) {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - 1; j++)
			{
				if (mass[j] > mass[j + 1]) {
					int prom = mass[j];
					mass[j] = mass[j + 1];
					mass[j + 1] = prom;
				}
			}
			cout << mass[size - i - 1] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - 1; j++)
			{
				if (mass[j] < mass[j + 1]) {
					int prom = mass[j];
					mass[j] = mass[j + 1];
					mass[j + 1] = prom;
				}
			}
			cout << mass[size - i - 1] << " ";
		}
		cout << "\n";
	}
}

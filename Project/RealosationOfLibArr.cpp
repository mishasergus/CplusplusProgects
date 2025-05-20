#include <iostream>
#include "ArrOperations.h"
using namespace std;

void showArr(int mass[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << ' ';
	}
	cout << "\n";
}

void showMaxNum(int mass[], int size) {
	int max = mass[1];
	for (int i = 0; i < size; i++)
	{
		if (mass[i] > max) {
			max = mass[i];
		}
	}
	cout << max;
	cout << "\n";
}

void showMinNum(int mass[], int size) {
	int min = mass[1];
	for (int i = 0; i < size; i++)
	{
		if (mass[i] < min) {
			min = mass[i];
		}
	}
	cout << min;
	cout << "\n";
}
void sort_parn(int mass[], int size) {
	int nOfParn = 0;
	for (int i = 0; i < size; i++)
	{
		if (mass[i] % 2 == 0) {
			nOfParn++;
		}
	}
	int *parnArr = new int[nOfParn];
	int* neparnArr = new int[size-nOfParn];
	nOfParn = 0;
	for (int i = 0; i < size; i++)
	{
		if (mass[i] % 2 == 0) {
			parnArr[nOfParn] = mass[i];
			nOfParn++;
		}
		else {
			neparnArr[i-nOfParn] = mass[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (i < nOfParn) {
			mass[i] = parnArr[i];
		}
		else {
			mass[i] = neparnArr[i - nOfParn];
		}
	}
}
#include <iostream>
#include <string>
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

void sort_localMaxs(int mass[], int size) {
	int nOfLocMax = 0;
	for (int i = 0; i < size; i++)
	{
		if (i != 0 && i != size - 1 && mass[i] > mass[i-1] && mass[i] > mass[i + 1]) {
			nOfLocMax++;
		}
	}
	int* locMaxArr= new int[nOfLocMax];
	nOfLocMax = 0;
	for (int i = 0; i < size; i++)
	{
		if (i != 0 && i != size - 1 && mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			locMaxArr[nOfLocMax] = mass[i];
			nOfLocMax++;
		}
	}
	for (int i = 0; i < nOfLocMax; i++)
	{
		for (int j = 0; j < nOfLocMax; j++)
		{
			if (locMaxArr[i] < locMaxArr[j] && i <= j) {
				int prom = locMaxArr[i];
				locMaxArr[i] = locMaxArr[j];
				locMaxArr[j] = prom;
			}
		}
		cout << locMaxArr[i] << ' ';
	}
	cout << "\n";
}
void paras(int mass[], int size) {
	string* parasArr = new string[size];
	int* numOfParasArr = new int[size];
	for (int i = 1; i < size; i++)
	{
		string para = to_string(mass[i - 1]) + to_string(mass[i]);
		parasArr[i] = para;
		numOfParasArr[i] = 0;
		for (int j = 1; j < size; j++)
		{
			string parax2 = to_string(mass[j - 1]) + to_string(mass[j]);
			if (parasArr[i] == parax2) {
				numOfParasArr[i]++;
			}
		}
		cout << "Para:" << para << "\n";
		cout << "Num of el:" << numOfParasArr[i] << "\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||" << "\n";
	}
	int indexOfBiggest = 0;
	int max = numOfParasArr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < numOfParasArr[i]) {
			indexOfBiggest = i;
			max = numOfParasArr[i];
		}
	}
	cout << "|||||||||||||||||||||BIGGEST||||||||||||||||||||||||" << "\n";
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||" << "\n";
	cout << "Para:" << parasArr[indexOfBiggest] << "\n";
	cout << "Num of el:" << numOfParasArr[indexOfBiggest] << "\n";
}


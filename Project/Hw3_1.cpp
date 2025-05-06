//#include <iostream>
//
//#include <ctime>
//
//using namespace std;
//
//
//int main()
//{
//	srand(time(0));
//	const int size = 5;
//	const int year = 12;
//	const int n = 10;
//	int max1 = 0;
//	int min1 = 0;
//	int min_moumth = 0;
//	int max_moumth = 0;
//	int min_diapathon;
//	int max_diapathon;
//	int max = 0;
//	int min = 0;
//	int baseArray[n] = {1,55,3,0,-5,9,-22,3,0,-7};
//	int array1[size];
//	int yearArray[year] = {};
//	int sumOfNagativeNumbers = 0;
//	int dobOfNumbers = 1;
//	int dobOfParaNumbers = 1;
//	int sum = 0;
//	int max2 = 0;
//	int min2 = 0;
//	int start = 0;
//	for (int i = 0; i < year; i++) {
//		cout << "Enter cash of mounth: \n";
//		cin >> yearArray[i];
//	}
//	cout << "Enter min_diapathon: \n";
//	cin >> min_diapathon;
//	cout << "Enter max_diapathon: \n";
//	cin >> max_diapathon;
//	for (int i = 0; i < size; i++) {
//		array1[i] = rand() % 10 + 1;
//	}
//	min = array1[0];
//	max = array1[0];
//	for (int i = 0; i < size;i++) {
//		if (array1[i] < min) {
//			min = array1[i];
//		}
//		if (array1[i] > max) {
//			max = array1[i];
//		}
//	}
//	for (int i = 0; i < size;i++) {
//		cout << array1[i] << " ";
//	}
//	cout << "\n";
//	cout << min << "-min \n";
//	cout << max << "-max \n";
//	min1 = yearArray[0];
//	max1 = yearArray[0];
//	for (int i = min_diapathon-1; i < max_diapathon;i++) {
//		if (yearArray[i] < min1) {
//			min1 = yearArray[i];
//			min_moumth = i;
//		}
//		if (yearArray[i] > max1) {
//			max1 = yearArray[i];
//			max_moumth = i;
//		}
//	}
//	cout << min1 << "-min \n";
//	cout << max1 << "-max \n";
//	switch (max_moumth)
//	{
//	case 0:
//		cout << "January \n";
//		break;
//	case 1:
//		cout << "February \n";
//		break;
//	case 2:
//		cout << "March \n";
//		break;
//	case 3:
//		cout << "April \n";
//		break;
//	case 4:
//		cout << "May \n";
//		break;
//	case 5:
//		cout << "June \n";
//		break;
//	case 6:
//		cout << "July \n";
//		break;
//	case 7:
//		cout << "August \n";
//		break;
//	case 8:
//		cout << "September \n";
//		break;
//	case 9:
//		cout << "October \n";
//		break;
//	case 10:
//		cout << "November \n";
//		break;
//	case 11:
//		cout << "December \n";
//		break;
//	default:
//		break;
//	}
//	switch (min_moumth)
//	{
//	case 0:
//		cout << "January \n";
//		break;
//	case 1:
//		cout << "February \n";
//		break;
//	case 2:
//		cout << "March \n";
//		break;
//	case 3:
//		cout << "April \n";
//		break;
//	case 4:
//		cout << "May \n";
//		break;
//	case 5:
//		cout << "June \n";
//		break;
//	case 6:
//		cout << "July \n";
//		break;
//	case 7:
//		cout << "August \n";
//		break;
//	case 8:
//		cout << "September \n";
//		break;
//	case 9:
//		cout << "October \n";
//		break;
//	case 10:
//		cout << "November \n";
//		break;
//	case 11:
//		cout << "December \n";
//		break;
//	default:
//		break;
//	}
//	min2 = baseArray[0];
//	max2 = baseArray[0];
//	for (int i = 0; i < n;i++) {
//		if (baseArray[i] < min2) {
//			min2 = baseArray[i];
//		}
//		if (baseArray[i] > max2) {
//			max2 = baseArray[i];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (baseArray[i] < 0) {
//			sumOfNagativeNumbers += baseArray[i];
//		}
//		if (baseArray[i] != min2 && baseArray[i] != max2 && baseArray[i] != 0) {
//			dobOfNumbers *= baseArray[i];
//		}
//		if (i % 2 == 0 && baseArray[i] != 0) {
//			dobOfParaNumbers *= baseArray[i];
//		}
//		if (baseArray[i] < 0) {
//			start++;
//		}
//		if (start == 1 && baseArray[i] > 0) {
//			sum += baseArray[i];
//		}
//	}
//	cout << sumOfNagativeNumbers << "-sumOfNagativeNumbers \n";
//	cout << dobOfNumbers << "-dobOfNumbers \n";
//	cout << dobOfParaNumbers << "-dobOfParaNumbers \n";
//	cout << sum << "-sum \n";
//
//}
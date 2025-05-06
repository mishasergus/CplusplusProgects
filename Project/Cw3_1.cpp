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
//	const int sizexx = 10;
//	const int year = 12;
//	int P = 0;
//	int max = 0;
//	int min = 0;
//	int min_moumth = 0;
//	int max_moumth = 0;
//	int array1[size] = {4,2,-1,0,6};
//	int array2[size] = {-8,0,-4,0,7};
//	int array12[sizexx];
//	int specialArray[size] = {};
//	int yearArray[year] = {};
//	for (int i = 0; i < size; i++) {
//		cout << "Enter num: \n";
//		cin >> specialArray[i];
//	}
//	for (int i = 0; i < year; i++) {
//		cout << "Enter sum: \n";
//		cin >> yearArray[i];
//	}
//	for (int i = 0; i < size; i++) {
//		P += specialArray[i];
//	}
//	cout << P << "-P \n";
//	min = yearArray[0];
//	max = yearArray[0];
//	for (int i = 0; i < year;i++) {
//		if (yearArray[i] < min) {
//			min = yearArray[i];
//			min_moumth = i;
//		}
//		if (yearArray[i] > max) {
//			max = yearArray[i];
//			max_moumth = i;
//
//		}
//	}
//	cout << min << "-min \n";
//	cout << max << "-max \n";
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
//	for (int i = 0; i < size; i++) {
//		array12[i] = array1[i];
//	}
//	for (int i = size; i < sizexx; i++) {
//		array12[i] = array2[i - size];
//	}
//	for (int i = 0; i < size;i++) {
//		cout << array1[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < size;i++) {
//		cout << array2[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < sizexx;i++) {
//		cout << array12[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < sizexx; i++) {
//		for (int b = 0; b < sizexx; b++) {
//			if (array12[b] > array12[i]) {
//				int temp = array12[b];
//				array12[b] = array12[i];
//				array12[i] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sizexx;i++) {
//		cout << array12[i] << " ";
//	}
//	cout << "\n";
//	/*const int size = 7;
//	const int size1 = 9;
//	const int size2 = 10;
//	int specialArray[size1] = {-6,1,4,7,10,-1,-6,-5,-1057};
//	int unicumArray[size] = {};
//	int unicumArray1[size] = {};
//	int unicumMathArray1[size2] = {};
//	int unicumMathArrayReverce1[size2] = {};
//	int max = 0;
//	int min = 0;
//	int minend = 0;
//	int sum = 0;
//	int mid = 0;
//	for (int i = 0; i < size2; i++) {
//		unicumMathArray1[i] = rand() % 10 + 1;
//	}
//	for (int i = 0; i < size; i++) {
//		unicumArray1[i] = rand()%10+1;
//	}
//	for (int i = 0; i < size; i++) {
//		cout << "Enter num: \n";
//		cin >> unicumArray[i];
//	}
//	cout << unicumArray <<"\n";
//	for (int i = 0; i < size;i++) {
//		cout << unicumArray[i]<<" ";
//	}
//	cout << "\n";
//	for (int i = 0; i < size;i++) {
//		cout << unicumArray1[i] << " ";
//	}
//	cout << "\n";
//	minend = specialArray[0];
//	min = unicumArray1[0];
//	max = unicumArray1[0];
//	for (int i = 0; i < size;i++) {
//		if (unicumArray1[i] < min) {
//			min = unicumArray1[i];
//		}
//		if (unicumArray1[i] > max) {
//			max = unicumArray1[i];
//		}
//	}
//	cout << min << "-min \n";
//	cout << max << "-max \n";
//	for (int i = size1-1; i >= 0;i--) {
//		if (specialArray[i] < 0) {
//			minend = specialArray[i];
//			break;
//		}
//	}
//	cout << minend << "-minend \n";
//	for (int i = 0; i < size2;i++) {
//		sum += unicumMathArray1[i];
//	}
//	cout << sum << "-sum \n";
//	mid = sum / size2;
//	cout << mid << "-mid \n";
//	for (int i = 0; i < size2;i++) {
//		unicumMathArrayReverce1[i] = unicumMathArray1[size2 - i - 1];
//	}
//	for (int i = 0; i < size2;i++) {
//		cout << unicumMathArray1[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < size2;i++) {
//		cout << unicumMathArrayReverce1[i] << " ";
//	}
//	cout << "\n";*/
//}
//#include <iostream>
//using namespace std;
//void arra2(int arr[5][5]) {
//	int nOfZero = 0;
//	int nOfPlus = 0;
//	int nOfMinus = 0;
//	for (int i = 0;i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (arr[i][j] == 0) {
//				nOfZero++;
//			}
//			else if (arr[i][j] < 0) {
//				nOfMinus++;
//			}
//			else {
//				nOfPlus++;
//			}
//
//		}
//	}
//	cout << nOfZero << "-nOfZero " << nOfPlus << "-nOfPlus " << nOfMinus << "-nOfMinus " << "\n";
//}
//void arra(int arr[5][5]) {
//	int max1 = 0;
//	int max2 = 0;
//	int min1 = 11;
//	int min2 = 11;
//	for (int i = 0;i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = rand() % 10 + 1;
//			if (i == j && arr[i][j] > max1) {
//				max1 = arr[i][j];
//			}
//			if (i == j && arr[i][j] < min1) {
//				min1 = arr[i][j];
//			}
//			if (i + j == 4 && arr[i][j] > max2) {
//				max2 = arr[i][j];
//			}
//			if (i + j == 4 && arr[i][j] < min2) {
//				min2 = arr[i][j];
//			}
//			cout << arr[i][j] << " I: " << i << " J: " << j << "|";
//		}
//		cout << " \n";
//	}
//	cout << max1 << "-max1 " << max2 << "-max2 " << min1 << "-min1 " << min2 << "-min2 \n";
//}
//
//void arra(char arr[5][5]) {
//	char max1 = '0';
//	char max2 = '0';
//	char min1 = '9';
//	char min2 = '9';
//	char arr2[10] = { '0','1','2','3','4','5','6','7','8','9'};
//	for (int i = 0;i < 5; i++) { //ß ÍÀÌÀÃÀÂÑß ÄÀÐÀÍÄÎÌÈÒÈ ÄÐÎÁÈ ÀËÅ ß ÏÐÎÑÒÎ ÇÍÈÙÈÂ ÃÎÄÈÍÓ ÂËÀÑÍÎÃÎ ×ÀÑÓ
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = arr2[rand() % 10];
//			if (i == j && arr[i][j] > max1) {
//				max1 = arr[i][j];
//			}
//			if (i == j && arr[i][j] < min1) {
//				min1 = arr[i][j];
//			}
//			if (i + j == 4 && arr[i][j] > max2) {
//				max2 = arr[i][j];
//			}
//			if (i + j == 4 && arr[i][j] < min2) {
//				min2 = arr[i][j];
//			}
//			cout << arr[i][j] << " I: " << i << " J: " << j << "|";
//		}
//		cout << " \n";
//	}
//	cout << max1 << "-max1 " << max2 << "-max2 " << min1 << "-min1 " << min2 << "-min2 \n";
//}
//
//void arra(double arr[5][5]) {
//	double max1 = 0;
//	double max2 = 0;
//	double min1 = 11;
//	double min2 = 11;
//	double arr2[25] = { 0.01, 1.02, 2.03, 3.04, 4.05,5.06, 6.07, 7.08, 8.09, 9.10,0.11, 1.12, 2.13, 3.14, 4.15,5.16, 6.17, 7.18, 8.19, 9.20,10.00, 1.21, 2.22, 3.23, 4.24 };
//	for (int i = 0;i < 5; i++) { //ß ÍÀÌÀÃÀÂÑß ÄÀÐÀÍÄÎÌÈÒÈ ÄÐÎÁÈ ÀËÅ ß ÏÐÎÑÒÎ ÇÍÈÙÈÂ ÃÎÄÈÍÓ ÂËÀÑÍÎÃÎ ×ÀÑÓ
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = arr2[rand() % 25];
//			if (i == j && arr[i][j] > max1) {
//				max1 = arr[i][j];
//			}
//			if (i == j && arr[i][j] < min1) {
//				min1 = arr[i][j];
//			}
//			if (i + j == 4 && arr[i][j] > max2) {
//				max2 = arr[i][j];
//			}
//			if (i + j == 4 && arr[i][j] < min2) {
//				min2 = arr[i][j];
//			}
//			cout << arr[i][j] << " I: " << i << " J: " << j << "|";
//		}
//		cout << " \n";
//	}
//	cout << max1 << "-max1 " << max2 << "-max2 " << min1 << "-min1 " << min2 << "-min2 \n";
//}
//
//
//int main()
//{
//	srand(time(0));
//	char arr[5][5];
//	int arr2[5][5] = {
//		{-10, -9, -8, -7, -6},
//		{-5, -4, -3, -2, -1},
//		{0, 1, 2, 3, 4},
//		{5, 6, 7, 8, 9},
//		{10, 0, 0, 0, 0}
//	};
//	arra(arr);
//
//
//
//
//
//}
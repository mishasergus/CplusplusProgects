//#include <iostream>
//
//#include <ctime>
//
//
//
//	
//int main()
//{
//	using namespace std;
//	srand(time(0));
//	const int size = 5;
//	int maxAll;
//	int max;
//	int maxD;
//	int maxD2_0 = 0;
//	int sumAll = 0;
//	int sum = 0;
//	int sumD = 0;
//	int mass[size][size];
//	int mass2_0[size];
//	for (int i = 0; i < size;i++) {
//		for (int j = 0; j < size;j++) {
//			cout << "enter num: " << "\n";
//			cin >> mass[i][j];
//		}
//	}
//	for (int i = 0; i < size;i++) {
//		for (int j = 0; j < size;j++) {
//			cout << mass[i][j]<< " I: "<< i << " J: "<< j<< "|";
//		}
//		cout << "\n";
//	}
//	cout << "-mass \n";
//	maxAll = mass[0][0];
//	maxD = mass[0][0];
//	maxD2_0 = mass[4][0];
//	for (int i = 0; i < size;i++) {
//		max = mass[i][0];
//		sum = 0;
//		for (int j = 0; j < size;j++) {
//			sum += mass[i][j];
//			sumAll += mass[i][j];
//			if (mass[i][j] > max) {
//				max = mass[i][j];
//			}
//			if (i == 4) {
//				std::cout << mass[i][j] << " I: " << i << " J: " << j << "|";
//			}
//			if (mass[i][j] > maxAll) {
//				maxAll = mass[i][j];
//			}
//			if (i==j) {
//				sumD += mass[i][j];
//			}
//			if (i == j && mass[i][j]> maxD) {
//				maxD = mass[i][j];
//			}
//			if (i + j == 4 && mass[i][j] > maxD2_0) {
//				maxD2_0 = mass[i][j];
//			}
//		}
//		mass2_0[i] = max;
//		cout << max << "-max" << i << "\n";
//		cout << sum << "-sum" << i << "\n";
//	}
//	cout << maxAll <<"-max ALL \n";
//	cout << sumAll << "-sumAll \n";
//	cout << sumD << "-sumD \n";
//	cout << maxD << "-maxD \n";
//	cout << maxD2_0 << "-maxD2_0 \n";
//	for (int i = 0; i < size;i++) {
//		cout << mass2_0[i] << "\t";
//	}
//	std::cout << "\n";
//	/*cout << sumOfNagativeNumbers << "-sumOfNagativeNumbers \n";
//	cout << dobOfNumbers << "-dobOfNumbers \n";
//	cout << dobOfParaNumbers << "-dobOfParaNumbers \n";
//	cout << sum << "-sum \n";*/
//
//}
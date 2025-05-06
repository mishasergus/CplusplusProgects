//#include <iostream>
//using namespace std;
//
//void maxMinMass() {
//	int mass[10];
//	int max = 0;
//	int min = 11;
//	int maxIndex = 0;
//	int minIndex = 0;
//	for (int i = 0; i < 10;i++) {
//		mass[i] = rand() % 10 + 1;
//		cout << mass[i] << " ";
//		if (mass[i] > max) {
//			max = mass[i];
//			maxIndex = i;
//		}
//		if (mass[i] < min) {
//			min = mass[i];
//			minIndex = i;
//		}
//	}
//	cout << "\n";
//	cout << max << "-maxN, " << maxIndex << "-I of maxN, " <<min << "-minN, " << minIndex << "-I of minN \n";
//}
// void reverceMass() {
//	int mass[10];
//	int newMass[10];
//	for (int i = 0; i < 10;i++) {
//		mass[i] = rand() % 10 + 1;
//		cout << mass[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < 10; i++) {
//		newMass[i] = mass[9 - i];
//	}
//	for (int i = 0; i < 10;i++) {
//		cout << newMass[i] << " ";
//	}
//	cout << "\n";
//}
//
//int simpleNum() {
//	int mass[10];
//	int nOfSinpleNum = 0;
//	for (int i = 0; i < 10;i++) {
//		mass[i] = rand() % 100 + 1;
//		cout << mass[i] << " ";
//		if (mass[i] == 2 || mass[i] == 3 || mass[i] == 5 || mass[i] == 7 || mass[i] % 2 != 0 && mass[i] % 3 != 0 && mass[i] % 5 != 0 && mass[i] % 7 != 0) {
//			nOfSinpleNum++;
//		}
//	}
//	cout << "\n";
//	return nOfSinpleNum;
//}
//
//int main()
//{
//	srand(time(0));
//	maxMinMass();
//	reverceMass();
//	cout <<"\n";
//	
//	cout << simpleNum() << "\n";
//}
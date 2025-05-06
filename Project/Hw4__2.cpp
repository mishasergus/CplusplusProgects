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
//	int choice;
//	bool start = false;
//	int mass1[size * 2] = { 1,2,3,4,5,6,7,8,9,0 };
//	int mass2[size];
//	int mass3[size];
//	int mass4[size*2];
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		mass2[i] = mass1[i];
//	}
//	for (int i = size; i < size*2; i++) {
//		mass3[i-size] = mass1[i];
//	}
//
//	for (int i = 0; i < size;i++) {
//			cout << mass2[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < size;i++) {
//		cout << mass3[i] << " ";
//	}
//	cout << "\n";
//
//	for (int i = 0; i < size; i++) {
//		sum += mass2[i];
//		mass4[i] = sum;
//
//	}
//	for (int i = size; i < size * 2; i++) {
//		sum += mass3[i - size];
//		mass4[i] = sum;
//	}
//	for (int i = 0; i < size * 2;i++) {
//		cout << mass4[i] << " ";
//	}
//	cout << "\n";
//
//
//
//
//	/*cout << sumOfNagativeNumbers << "-sumOfNagativeNumbers \n";
//	cout << dobOfNumbers << "-dobOfNumbers \n";
//	cout << dobOfParaNumbers << "-dobOfParaNumbers \n";
//	cout << sum << "-sum \n";*/
//
//}
//#include <iostream>
//
//#include <ctime>
//
//using namespace std;
//
//
//int main()
//{
//	int k4;
//	int a3;
//	int dob3 = 1;
//	int countOfNumb = 0;
//	int sum2 = 0;
//	int num1;
//	int sum = 0;
//	int x;
//	int y;
//	int stepin = 1;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter x: \n";
//	cin >> x;
//	cout << "Enter y: \n";
//	cin >> y;
//	cout << "Enter a: \n";
//	cin >> a3;
//	cout << "Enter k: \n";
//	cin >> k4;
//	if (num1 < 500) {
//		for (int i = num1; i < 500; i++) {
//			sum += i;
//		}
//		cout << sum <<"-sum \n";
//	}
//	else if (num1 > 500) {
//		for (int i = 500; i < num1; i++) {
//			sum += i;
//		}
//		cout << sum << "-sum \n";
//	}
//	else{
//		cout <<"U wrote 500 \n";
//	}
//	if (x != 0 && y != 0) {
//		for (int i = y; i > 0; i--) {
//			stepin *= x;
//		}
//		cout << stepin << "-stepin \n";
//	}
//	else if (x == 0 && y != 0) {
//		cout << 0 << "-stepin \n";
//	}
//	else if (x != 0 && y == 0) {
//		cout << 1 << "-stepin \n";
//	}
//	else{
//		cout << "Dilema \n";
//	}
//	for (int i = 1; i < 1000; i++) {
//		sum2 += i;
//		countOfNumb++;
//	}
//	cout << sum2 / countOfNumb << "-middle \n";
//	if (1 <= a3 && a3 <= 20) {
//		for (int i = a3; i <= 20;i++) {
//			dob3 *= i;
//		}
//		cout << dob3 << "-dobutok \n";
//	}
//	else {
//		cout << "ERROR \n";
//	}
//	for (int i = 0; i <= 10;i++) {
//		cout << k4 << '*' << i << '=' << k4*i << " \n";
//	}
//}
//#include <iostream>
//using namespace std;
//
//void show() {
//	auto func = []() {
//		cout << "HELLO WORLD\n";
//		};
//	func();
//}
//
//void hellow();
//int sumOfMass1(int arr[5]);
//int sumOfMass2(int arr[5][5]);
//int sum(int,int);
//double sum(double, double);
//int rizn(int, int);
//double rizn(double, double);
//int dob(int, int);
//double dob(double, double);
//int chast(int, int);
//double chast(double, double);
//
//int main()
//{
//	int* mass[5][5];
//	int* mass[5];
//	srand(time(0));
//	char arr[5];
//	int arr2[5][5];
//	int answ;
//	int answ2;
//	double num1;
//	double num2;
//	cout << "-----------------------------------------\n";
//	cout << "|    1-sum                              |\n";
//	cout << "|    2-rizn                             |\n";
//	cout << "|    3-dob                              |\n";
//	cout << "|    4-chast                            |\n";
//	cout << "-----------------------------------------\n";
//	cin >> answ;
//	cout << "num1\n";
//	cout << "-----------------------------------------\n";
//	cout << "|    1-drobi                            |\n";
//	cout << "|    2-cili                             |\n";
//	cout << "-----------------------------------------\n";
//	cin >> answ2;
//	if (answ2 == 2) {
//		cout << "num1\n";
//		cin >> num1;
//		cout << "num2\n";
//		cin >> num2;
//		num1=int(num1);
//		num2 = int(num2);
//		
//	}
//	else if (answ2 == 1) {
//		cout << "num1\n";
//		cin >> num1;
//		cout << "num2\n";
//		cin >> num2;
//	}
//	if (answ == 1) {
//		cout << sum(num1, num2) << "\n";
//	}
//	else if (answ == 2) {
//		cout << rizn(num1, num2) << "\n";
//	}
//	else if (answ == 3) {
//		cout << dob(num1, num2) << "\n";
//	}
//	else if (answ == 4) {
//		cout<<chast(num1, num2)<<"\n";
//	}
//	else{
//		cout << "ERROR\n";
//	}
//
//
//
//
//
//}
//int sumOfMass1(int arr[5]) {
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		arr[i] = rand() % 100;
//		sum += arr[i];
//
//	}
//	return sum;
//}
//int sumOfMass2(int arr[5][5]) {
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = rand() % 100;
//			sum += arr[i][j];
//		}
//	}
//	return sum;
//}
//
//void hellow() {
//	cout << "hello world\n";
//}
//
//
//int sum(int num1, int num2) {
//	return num1 + num2;
//}
//double sum(double num1, double num2) {
//	return num1 + num2;
//}
//int rizn(int num1, int num2) {
//	return num1 - num2;
//}
//double rizn(double num1, double num2) {
//	return num1 - num2;
//}
//int dob(int num1, int num2) {
//	return num1 * num2;
//}
//double dob(double num1, double num2) {
//	return num1 * num2;
//}
//int chast(int num1, int num2) {
//	if (num1 != 0 && num2 != 0) {
//		return num1 / num2;
//	}
//	else {
//		cout << "ERROR\n";
//	}
//}
//double chast(double num1, double num2) {
//	if (num1 != 0 && num2 != 0) {
//		return num1 / num2;
//	}
//	else {
//		cout << "ERROR\n";
//	}
//}
//#include <iostream>
//using namespace std;
//
////void bigBoss(int arr[], int arr1[], int arr2[]) {
////	int arrFinal[15];
////	for (int j = 0;j < 15; j += 5) {
////		for (int i = 0; i < 5; i++) {
////			if (j < 5) {
////				arrFinal[i+j] = arr[i];
////			}
////			else if (j < 10) {
////				arrFinal[i + j] = arr1[i];
////			}
////			else if (j < 15) {
////				arrFinal[i + j] = arr2[i];
////			}
////			cout << arrFinal[i + j] <<" ";
////		}
////	}
////	cout << " \n";
////}
////
////int sum(int num1, int num2) {
////	return num1 + num2;
////}
////double sum(double num1, double num2) {
////	return num1 + num2;
////}
////int rizn(int num1, int num2) {
////	return num1 - num2;
////}
////double rizn(double num1, double num2) {
////	return num1 - num2;
////}
////int dob(int num1, int num2) {
////	return num1 * num2;
////}
////double dob(double num1, double num2) {
////	return num1 * num2;
////}
////int chast(int num1, int num2) {
////	if (num1 != 0 && num2 != 0) {
////		return num1 / num2;
////	}
////	else {
////		cout << "ERROR\n";
////	}
////}
////double chast(double num1, double num2) {
////	if (num1 != 0 && num2 != 0) {
////		return num1 / num2;
////	}
////	else {
////		cout << "ERROR\n";
////	}
////}
////
////void change(int arr[], int siz, int ind, int num) {
////	for (int i = 0; i < siz; i++) {
////		if (i == ind) {
////			arr[i] = num;
////		}
////	}
////	
////}
////
////
////int minMax(int num1, int num2 , int num3) {
////	int arrX[3] = { num1 ,num2,num3 };;
////	int max = arrX[0];
////	for (int i = 0; i < 3; i++) {
////		if (arrX[i] > max) {
////			max = arrX[i];
////		}
////	}
////	return max;
////}
////
////
////int minNum(int arr[], int size) {
////	int min = arr[0];
////	for (int i = 0; i < size; i++) {
////		if (arr[i] < min) {
////			min = arr[i];
////		}
////	}
////	return min;
////}
////int maxNum(int arr[], int size) {
////	int max = arr[0];
////	for (int i = 0; i < size; i++) {
////		if (arr[i] > max) {
////			max = arr[i];
////		}
////	}
////	return max;
////}
////void showNum(string name , string surename) {
////	cout << name << " " << surename << " send to her\n";
////	
////	
////}
////void showMass(int arr[], int size) {
////	for (int i = 0; i < size;i++) {
////		cout << arr[i] << " ";
////	}
////	cout << "\n";
////}
//
//int main()
//{
//	srand(time(0));
//
//	string name = "Olga";
//	string *nameNew = &name;
//	*nameNew = "Oleg";
//	cout << *nameNew  <<"\n";
//
//
//	/*int answ;
//	int num1;
//	int num2;
//	cout << "-----------------------------------------\n";
//	cout << "|    1-sum                              |\n";
//	cout << "|    2-rizn                             |\n";
//	cout << "|    3-dob                              |\n";
//	cout << "|    4-chast                            |\n";
//	cout << "-----------------------------------------\n";
//	cin >> answ;
//	cout << "num1\n";
//	cin >> num1;
//	cout << "num2\n";
//	cin >> num2;
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
//	}*/
//}
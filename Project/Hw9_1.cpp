//#include <iostream>
//using namespace std;
//
//
//void changeThreeNumb(int*num, int* num1, int* num2) {
//	*num = rand() % 10 + 1;
//	*num1 = rand() % 10 + 1;
//	*num2 = rand() % 10 + 1;
//	cout << "After changes:\n";
//	cout << *num << "-num1\n";
//	cout << *num1 << "-num2\n";
//	cout << *num2 << "-num3\n";
//
//}
//void mass(int arr[], const int* size) {
//	for (int i = 0;i < *size;i++) {
//		arr[i] = rand() % 10 + 1;
//		if (arr[i] % 2 != 0) {
//			cout << arr[i] << "-num "<< &arr[i] <<"-adress\n";
//		}
//	}
//}
//int main() {
//	srand(time(0));
//	int number = 1;
//	int number1 = 5;
//	int number2 = 5;
//	cout <<"Before changes:\n";
//	cout << number << "-num1\n";
//	cout << number1<< "-num2\n";
//	cout << number2<< "-num3\n";
//	changeThreeNumb(&number, &number1, &number2);
//	const int size = 5;
//	int arr[5];
//	mass(arr, &size);
//	/*cout << "Varible: 'num3' Value: " << **num3 << "\n";
//	cout << "Adress: " << *num3 << "\n";*/
//	/*int start;
//	cout << "start:\n";
//	cin >> start;*/
//
//}

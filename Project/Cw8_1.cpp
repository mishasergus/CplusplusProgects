//#include <iostream>
//using namespace std;
//
////int add(int a = 1, int b = 1) {
////	return a + b;
////}
////int powy(int num = 1, int powe = 2) {
////	return pow(num, powe);
////}
////string lineOrName(string line= "hellow: ", string name = "Oleg") {
////	return line + name;
////}
////int chek(int arr[5],int porog = 11) {
////	int nOfBig = 0;
////	for (int i = 0; i < 5;i++) {
////		arr[i] = rand() % 10 + 1;
////		if (arr[i] > porog) {
////			nOfBig++;
////			cout << arr[i] <<"\n";
////		}
////	}
////	return nOfBig;
////}
////string passwordGenerator(int lent = 8, bool numbs = true, bool simv = true) {
////	string simvArr = "@#%^&*_-+=/";
////	string numArr = "1234567890";
////	string arr = "QWERTYUIOPASDFGHJKLZXCVBNM";
////	if (numbs) {
////		arr += numArr;
////	}
////	if (simv) {
////		arr += simvArr;
////	}
////	string pass = "";
////	int random1;
////	for (int i = 0;i <= lent;i++) {
////		random1 = rand() % arr.length();
////		pass += arr[random1];
////	}
////	return pass;
////}
//int main()
//{
//	srand(time(0));
//	char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
//	for (int i = 1; i < 5; i++) {
//		cout << "*";
//		if ((arr[i] - arr[i - 1]) % 2)
//			continue;
//		cout << "*";
//	}
//	return 0;
//	
//	/*int arr[5] = { 1,1,1,2,3 };
//	cout << "Adress: " << &arr << "\n";
//	cout << "Adress value: " << &arr[1] << "\n";
//	int* ptrArr = arr;
//	cout << "Adress: " << ptrArr << "\n";
//	cout << "Adress value: " << ptrArr+1 << "\n";*/
//	/*int num = 150;
//	int num1;
//	cout << "Varible: 'num' Value: " << num << "\n";
//	cout << "Adress: " << &num << "\n";
//	int* ptrNum = &num;
//	cout << "Varible: 'ptrNum' Value: " << *ptrNum << "\n";
//	cout << "Adress: " << ptrNum << "\n";
//	cout << "num1:\n";
//	cin >> num1;
//	cout << "Varible: 'num1' Value: " << num1 << "\n";
//	cout << "Adress: " << &num1 << "\n";
//	int* num2 = &num1;
//	cout << "num2:\n";
//	cin >> *num2;
//	cout << "Varible: 'num1' Value: " << num1 << "\n";
//	cout << "Adress: " << &num1 << "\n";*/
//	/*cout << passwordGenerator() << "\n";
//	cout << passwordGenerator(13,false) << "\n";
//	cout << passwordGenerator(13, false,true) << "\n";
//	string line;
//	string name;
//	int powe;
//	cout << "pow:\n";
//	cin >> powe;
//	int num;
//	cout << "num:\n";
//	cin >> num;
//	cout << powy(num, powe) << "\n";
//	cout << powy(num) << "\n";
//	cout << powy() << "\n";
//	int choice1;
//	cout << "1-line,2-name:\n";
//	cin >> choice1;
//	if (choice1 == 1) {
//		cout << "line:\n";
//		cin >> line;
//		cout << lineOrName(line) << "\n";
//	}
//	else if (choice1 == 2) {
//		cout << "name:\n";
//		cin >> name;
//		cout << lineOrName("hellow: ", name) << "\n";
//	}
//	else{
//		cout << "ERROR\n";
//	}
//	int porog;
//	cout << "porog:\n";
//	cin >> porog;
//	int arr[5] = {1,1,1,1,1};
//	cout << chek(arr,4) << "\n";
//	cout << chek(arr) << "\n";*/
//}

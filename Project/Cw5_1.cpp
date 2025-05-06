//#include <iostream>
//using namespace std;
//
//int randN() {
//	int rnum = rand() % 100 + 1;
//	return rnum;
//}
//int cube() {
//	int num;
//	cout << "Enter num: \n";
//	cin >> num;
//	return num * num * num;
//}
//
//int bigger() {
//	int num1;
//	int num2;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter num2: \n";
//	cin >> num2;
//	if (num1 > num2) {
//		return num1;
//	}
//	else {
//		return num2;
//	}
//}
//int plusOrNo() {
//	int num1;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	if (num1 > 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}	
//
//
//int tempConvertor() {
//	int c;
//	cout << "Enter c: \n";
//	cin >> c;
//	return (c * 9 / 5) + 32;
//}
//
//float sCircle() {
//	int r;
//	cout << "Enter r: \n";
//	cin >> r;
//	return r * r * 3.14;
//}
//
//string randSimv() {
//	int randNam = rand() % 50 +1;
//	string listofSimv[50] = { "K", "8", "!", "w", "G", "5", "%", "q", "R", "0", "$", "y", "T", "3", "^", "u", "P", "7", "*", "i", "Z", "2", "&", "o", "X", "9", "(", "a", "J", "4", ")", "s", "L", "6", "-", "d", "F", "1", "+", "f", "M", "#", "c", "N", "/", "v", "B", "=", "e", "H" };
//	return listofSimv[randNam];
//}
//
//void hello(){
//	string name;
//	cout << "Enter name: \n";
//	cin >> name;
//	cout << "Hello " << name << "\n";
//}
//void numSum() {
//	int num1;
//	int num2;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter num2: \n";
//	cin >> num2;
//	cout << "Sum " << num1 + num2 << "\n";
//}
//void numVidn() {
//	int num1;
//	int num2;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter num2: \n";
//	cin >> num2;
//	cout << "Rizn " << num1 - num2 << "\n";
//}
//void numDob() {
//	string miniAnsw = "";
//	int num1;
//	int num2;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter num2: \n";
//	cin >> num2;
//	while (miniAnsw != "Ok" && num1 == 0 || num2 == 0) {
//		cout << "U used 0 (Ok to stop)\n";
//		cin >> miniAnsw;
//		if (miniAnsw != "Ok") {
//			cout << "Enter num1: \n";
//			cin >> num1;
//			cout << "Enter num2: \n";
//			cin >> num2;
//		}
//	}
//	cout << "Dob " << num1 * num2 << "\n";
//}
//void numDil() {
//	int num1;
//	int num2;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter num2: \n";
//	cin >> num2;
//	if (num2 != 0) {
//		cout << "Chast " << num1 / num2 << "\n";
//	}
//	else{
//		cout << "ERROR\n";
//	}
//}
//void mass() {
//	int mass[10];
//	for (int i = 0; i < 10;i++) {
//		mass[i] = rand() % 10 + 1;
//		cout << mass[i] << " ";
//	}
//	cout << "\n";
//}
//
//int main()
//{
//	srand(time(0));
//	cout << tempConvertor() << "aa\n";
//	cout << randSimv() << "\n";
//	cout << randN() <<"\n";
//	cout << sCircle() << "\n";
//	cout << cube() << "\n";
//	cout << bigger() << "\n";
//	cout << plusOrNo() << "\n";
//
//	int choice;
//
//	hello();
//
//
//	mass();
//	mass();
//
//	cout << "Enter choice(1-(+),2-(-),3-(*),4-(/): \n";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//		numSum();
//		break;
//	case 2:
//		numVidn();
//		break;
//	case 3:
//		numDob();
//		break;
//	case 4:
//		numDil();
//		break;
//	default:
//		cout << "ERROR\n";
//		break;
//	}
//}
//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	float num1;
//	float num2;
//	char operation;
//	int murk;
//	char simvol;
//	cout << "Enter num1: \n";
//	cin >> num1;
//	cout << "Enter num2: \n";
//	cin >> num2;
//	cout << "Enter operation: \n";
//	cin >> operation;
//	int money = 1000;
//	int passwordBase = 12345;
//	int password;
//	int nOfMoney;
//	char action;
//
//	switch (operation)
//	{
//	case '+':
//		cout << num1 + num2 <<"\n";
//		break;
//	case '-':
//		cout << num1 - num2 << "\n";
//		break;
//	case '*':
//		cout << num1 * num2 << "\n";
//		break;
//	case '/':
//		if (num2 != 0)
//		{
//			cout << num1 / num2 << "\n";
//			break;
//		}
//	default:
//		cout << "ERROR\n";
//	}
//
//	cout << "Enter murk: \n";
//	cin >> murk;
//
//	switch (murk)
//	{
//	case 5:
//		cout << "A+\n";
//		break;
//	case 4:
//		cout << "B\n";
//		break;
//	case 3:
//		cout << "C\n";
//		break;
//	case 2:
//		cout << "D\n";
//		break;
//	case 1:
//		cout << "F-\n";
//		break;
//	default:
//		cout << "ERROR\n";
//	}
//	cout << "Enter simvol: \n";
//	cin >> simvol;
//	switch (simvol)
//	{
//	case 'B':
//	case 'b':
//		cout << "B\n";
//		break;
//	case 'C':
//	case 'c':
//		cout << "C\n";
//		break;
//	case 'D':
//	case 'd':
//		cout << "D\n";
//		break;
//	case 'F':
//	case 'f':
//		cout << "F\n";
//		break;
//	default:
//		cout << "ERROR\n";
//	}
//	cout << "Enter password: \n";
//	cin >> password;
//	if (password == passwordBase) {
//		cout << "1-take, 2-put, 3-transfer, 4-check: \n";
//		cin >> action;
//		switch (action)
//		{
//		case '1':
//			cout << "nOfMoney: \n";
//			cin >> nOfMoney;
//			if (nOfMoney <= money) {
//				money -= nOfMoney;
//				cout << "U took "<< nOfMoney <<" money, u`ve got " << money << " money \n";
//			}
//			else {
//				cout << "ERROR \n";
//			}
//			break;
//		case '2':
//			cout << "nOfMoney: \n";
//			cin >> nOfMoney;
//			money += nOfMoney;
//			cout << "U put " << nOfMoney << " money, u`ve got " << money << " money \n";
//			break;
//		case '3':
//			cout << "nOfMoney: \n";
//			cin >> nOfMoney;
//			if (nOfMoney <= money) {
//				money -= nOfMoney;
//				cout << "U transfer " << nOfMoney << " money, u`ve got " << money << " money \n";
//			}
//			else {
//				cout << "ERROR \n";
//			}
//			break;
//		case '4':
//			cout << "U get " << money << " u`re password is " << passwordBase << " \n";
//			break;
//		default:
//			cout << "ERROR\n";
//			break;
//		}
//	}
//}
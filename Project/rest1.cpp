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
//
//int main()
//{
//	srand(time(0));
//	
//	/*int answ;
//	int dob;
//	int num1;
//	int num2;
//	cout << "-----------------------------------------\n";
//	cout << "|    1-easy                              |\n";
//	cout << "|    2-medium                            |\n";
//	cout << "|    3-hard                              |\n";
//	cout << "-----------------------------------------\n";
//	cin >> answ;
//	cout << "num1\n";
//	switch (answ)
//	{ 
//	case 1:
//		num1 = rand() % 10 + 1;
//		num2 = rand() % 10 + 1;
//		cout << num1 <<"*" << num2<< "=?\n";
//		cin >> dob;
//		if (dob == num1 * num2) {
//			cout << "CORRECT\n";
//		}
//		break;
//	case 2:
//		for (int i = 0;i < 3;i ++ ) {
//			num1 = rand() % 100 + 1;
//			num2 = rand() % 100 + 1;
//			cout << num1 << "*" << num2 << "=?\n";
//			cin >> dob;
//			if (dob == num1 * num2) {
//				cout << "CORRECT\n";
//			}
//			else {
//				break;
//			}
//		}
//		break;
//	case 3:
//		for (int i = 0;i < 5;i ++) {
//			num1 = rand() % 1000 + 1;
//			num2 = rand() % 1000 + 1;
//			cout << num1 << "*" << num2 << "=?\n";
//			cin >> dob;
//			if (dob == num1 * num2) {
//				cout << "CORRECT\n";
//			}
//			else {
//				break;
//			}
//		}
//		break;
//	default:
//		cout << "ERROR\n";
//	}*/
//	/*for (int j = 0;j < 5; j ++) {
//		for (int i = 0; i < 5; i++) {
//			if (j + i <= 1 || j + i >= 7 || j - i <= -3 || i - j <= -3) {
//				cout <<" ";
//			}
//			else {
//				cout << "*";
//			}
//		}
//		cout << "\n";
//	}
//	cout << " \n";*/
//	/*int x;
//	int y;
//	int colour;
//	string simv;
//	cout << "x\n";
//	cin >> x;
//	cout << "y\n";
//	cin >> y;
//	cout << "simv\n";
//	cin >> simv;
//
//	for (int j = 0;j < y; j++) {
//		for (int i = 0; i < x; i++) {
//			cout << simv;
//			
//		}
//		cout << "\n";
//	}
//	cout << " \n";
//	cout << "1-white,2-red:\n";
//	cin >> colour;
//	if (colour == 2) {
//		cout << "\033[31m";
//	}
//	for (int j = 0;j < y; j++) {
//		for (int i = 0; i < x; i++) {
//			if (i == 0 || j == 0 || j == y - 1 || i == x - 1) {
//				cout << simv;
//			}
//			else {
//				cout << " ";
//			}
//
//		}
//		cout << "\n";
//	}
//	cout << " \n";
//	cout << "\033[0m";*/
//	/*int lisOfNumProd[4] = { 5, 3, 7, 2};
//	int lisOfProd[4] = { 10, 60, 76, 3 };
//	int lisOfSale[4] = { 0, 5, 50, 0 };
//	int choiceOfProduct;
//	int numOfProduct;
//	int more;
//	int enotherClient;
//	int suma = 0;
//	int sumaAll = 0;
//	while (true){
//		cout << "-----------------------------------------\n";
//		cout << "|    0-rolton          |     "<< lisOfSale[0] <<"-sale     |\n";
//		cout << "|    1-petarda         |     " << lisOfSale[1] << "-sale     |\n";
//		cout << "|    2-shaurma         |     " << lisOfSale[2] << "-sale    |\n";
//		cout << "|    3-bublegum        |     " << lisOfSale[3] << "-sale     |\n";
//		cout << "-----------------------------------------\n";
//		cin >> choiceOfProduct;
//		cout << "-----------------------------------------\n";
//		cout << "|              How much?                 |\n";
//		cout << "-----------------------------------------\n";
//		cin >> numOfProduct;
//		if (numOfProduct <= lisOfNumProd[choiceOfProduct]) {
//			lisOfNumProd[choiceOfProduct] -= numOfProduct;
//			suma += (lisOfProd[choiceOfProduct] * numOfProduct)-(lisOfProd[choiceOfProduct] * numOfProduct) / 100 * lisOfSale[choiceOfProduct];
//			sumaAll += (lisOfProd[choiceOfProduct] * numOfProduct)-(lisOfProd[choiceOfProduct] * numOfProduct) / 100 * lisOfSale[choiceOfProduct];
//			cout << "-----------------------------------------\n";
//			cout << "|        Du u want enother item?         |\n";
//			cout << "|   1-Yes                                |\n";
//			cout << "-----------------------------------------\n";
//			cin >> more;
//			if (more != 1) {
//				cout << "-----------------------------------------\n";
//				cout << "|                Check                   |\n";
//				cout << "|   "<< suma <<" $                                  | \n";
//				cout << "-----------------------------------------\n";
//				cout << "-----------------------------------------\n";
//				cout << "|        Du u have enother client?       |\n";
//				cout << "|   1-Yes                                |\n";
//				cout << "-----------------------------------------\n";
//				cin >> enotherClient;
//				if (enotherClient != 1) {
//					cout << "-----------------------------------------\n";
//					cout << "|          " << sumaAll << "-sumaAll                  |\n";
//					cout << "-----------------------------------------\n";
//					break;
//				}
//				else {
//					suma = 0;
//				}
//			}
//		}
//		else {
//			cout << "-----------------------------------------\n";
//			cout << "|           We haven`t enought           |\n";
//			cout << "-----------------------------------------\n";
//		}
//	}*/
//	/*int colour2;
//	cout << "1-white,2-red,3-green,4-orange,5-blue:\n";
//	cin >> colour2;
//	if (colour2 == 2) {
//		cout << "\033[31m";
//	}
//	else if (colour2 == 3) {
//		cout << "\033[32m";
//	}
//	else if (colour2 == 4) {
//		cout << "\033[33m";
//	}
//	else if (colour2 == 5) {
//		cout << "\033[34m";
//	}*/
//	/*int arr[3][4] = { {3,5,6,7},
//		{12,1,1,1},
//		{0,7,12,1} };
//	int sum1;
//	int sum2;
//	int sumAll = 0;
//	for (int i = 0; i < 3;i++) {
//		sum1 = 0;
//		for (int j = 0; j < 4;j++) {
//			cout << arr[i][j]<<"\t";
//			sum1 += arr[i][j];
//			sumAll += arr[i][j];
//		}
//		cout << "|\t"<< sum1;
//		cout <<"\n";
//	}
//	cout << "----------------------------------------------------\n";
//	for (int i = 0; i < 4;i++) {
//		sum2 = 0;
//		for (int j = 0; j < 3;j++) {
//			sum2 += arr[j][i];
//		}
//		cout << sum2 << "\t";
//		
//	}
//	cout << "|\t"<< sumAll;
//	cout << "\n";*/
//	/*int AUTO[5][10];
//	int arr2[5][5];
//	for (int i = 0; i < 5;i++) {
//		for (int j = 0; j < 10;j++) {
//			arr1[i][j] = rand() % 50;
//			cout << arr1[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	cout << "\n";
//	cout << "\n";
//	cout << "\n";
//	for (int i = 0; i < 5;i++) {
//		for (int j = 0; j < 5;j++) {
//			arr2[i][j] = arr1[i][j * 2] + arr1[i][j*2 + 1];
//			cout << arr2[i][j] << " ";
//		}
//		cout << "\n";
//	}*/
//}
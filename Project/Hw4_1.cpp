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
//	string mass1[size][size] = {{" "," "," "," "," "},
//								{" "," "," "," "," "},
//								{" "," "," "," "," "},
//								{" "," "," "," "," "},
//								{" "," "," "," "," "}
//							   };
//	cout << "-------------------------------------\n";
//	cout << "| 1-a                               |\n";
//	cout << "| 2-b                               |\n";
//	cout << "| 3-c                               |\n";
//	cout << "| 4-d                               |\n";
//	cout << "| 5-e                               |\n";
//	cout << "-------------------------------------\n";
//	cout << "\n";
//	cin >> choice;
//	if (choice == 1) {
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				if (i == j && start == false) {
//					start = true;
//				}
//				if (start == true) {
//					mass1[i][j] = "*";
//				}
//				if (j == 4 && start == true) {
//					start = false;
//				}
//			}
//		}
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				cout << mass1[i][j];
//			}
//			cout << "\n";
//		}
//	}
//	else if (choice == 2) {
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				if (j == 0 && start == false) {
//					start = true;
//				}
//				if (start == true) {
//					mass1[i][j] = "*";
//				}
//				if (i == j && start == true) {
//					start = false;
//				}
//			}
//		}
//		cout << "\n";
//		cout << "\n";
//		cout << "\n";
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				cout << mass1[i][j];
//			}
//			cout << "\n";
//		}
//	}
//	else if (choice == 3) {
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				if (i == j && start == false) {
//					start = true;
//				}
//				if (start == true) {
//					mass1[i][j] = "*";
//				}
//				if (j + i == 4 && start == true) {
//					start = false;
//				}
//			}
//			if (i == 2) {
//				break;
//			}
//		}
//		cout << "\n";
//		cout << "\n";
//		cout << "\n";
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				cout << mass1[i][j];
//			}
//			cout << "\n";
//		}
//	}
//	else if (choice == 4) {
//		for (int i = 0; i < size;i++) {
//			if (i >= 2) {
//				for (int j = 0; j < size;j++) {
//					if (j + i == 4 && start == false) {
//						start = true;
//					}
//					if (start == true) {
//						mass1[i][j] = "*";
//					}
//					if (i == j && start == true) {
//						start = false;
//					}
//				}
//			}
//		}
//		cout << "\n";
//		cout << "\n";
//		cout << "\n";
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				cout << mass1[i][j];
//			}
//			cout << "\n";
//		}
//	}
//	else if (choice == 5) {
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				if (j + i == 4 && start == false) {
//					start = true;
//				}
//				if (i == j && start == false) {
//					start = true;
//				}
//				if (start == true) {
//					mass1[i][j] = "*";
//				}
//				if (j + i == 4 && start == true && j >= 2) {
//					start = false;
//				}
//				if (i == j && start == true && j >= 2) {
//					start = false;
//				}
//			}
//		}
//		cout << "\n";
//		cout << "\n";
//		cout << "\n";
//		for (int i = 0; i < size;i++) {
//			for (int j = 0; j < size;j++) {
//				cout << mass1[i][j];
//			}
//			cout << "\n";
//		}
//	}
//	else {
//		cout << "ERROR";
//	}
//
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
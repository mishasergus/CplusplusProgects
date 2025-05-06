//#include <iostream>
//using namespace std;
//
//void multiplication(int start = 0, int end = 10) {
//	for (int i = start;i <= end;i++) {
//		for (int j = 0;j <= 10;j++) {
//			cout << i << "*" << j<<"="<<i*j<<"\t";
//		}
//		cout << "\n";
//	}
//	
//}
//string reverce(string st = "321ytrewq") {
//	string stRev = "";
//	for (int i = 0;i < st.size();i++) {
//		stRev += st[st.size()-i];
//	}
//	return stRev;
//
//}
//int main(){
//	srand(time(0));
//	int start;
//	int end;
//	cout << "start:\n";/*В мене з'явилася проблеиа під час виконання дз, я просто не міг залишати поле введення пустим*/
//	cin >> start;
//	cout << "end:\n";
//	cin >> end;
//	string st;
//	cout << "st:\n";
//	cin >> st;
//	cout << reverce(st) <<"\n";
//	multiplication(start, end);
//	int num1 = 1;
//	int* num2 = &num1;
//	cout << "Varible: 'num1' Value: " << num1 << "\n";
//	cout << "Adress: " << &num1 << "\n";
//	cout << "Varible: 'num2' Value: " << *num2 << "\n";
//	cout << "Adress: " << num2 << "\n";
//	for (int i = 0;i < 3;i++) {
//		num1 *= rand() % 100 + 1;
//	}
//	cout << "Varible: 'num1' Value: " << num1 << "\n";
//	cout << "Adress: " << &num1 << "\n";
//	cout << "Varible: 'num2' Value: " << *num2 << "\n";
//	cout << "Adress: " << num2 << "\n";
//}

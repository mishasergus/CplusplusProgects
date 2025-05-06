//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;




//int main()
//{
//	srand(time(0));
//	ifstream f();//читання
//
//	ofstream g();//запис
//	string title;
//	cout << "ENTER TITLE WHITHOUT TXT\n";
//	cin >> title;
//	ofstream numbers(title+".txt", ios::app);
//	if (numbers.is_open()) {
//		while (true) {
//			string text;
//			cout << "ENTER TEXT(qwe to exut): \n";
//			cin >> text;
//			if (text != "qwe") {
//				numbers << text + "\n";
//				cout << "COMPLETE\n";
//			}
//			else
//			{
//				numbers.close();
//				break;
//			}
//		}
//		
//
//	}
//	else {
//		cout << "ERROR\n";
//	}
//	string text1;
//	ifstream number4Read(title + ".txt");
//	if (number4Read.is_open()) {
//		string text;
//		for (char letter;number4Read.get(letter);)
//		{
//			text1 += letter;
//			cout << letter;
//		}
//		for (;getline(number4Read,text);)
//		{
//			cout << text <<endl;
//		}
//		while (getline(number4Read, text)) {
//			cout << text << endl;
//		}
//	}
//	number4Read.close();
//	cout << text1;
//
//	string title1;
//	cout << "ENTER TITLE WHITHOUT TXT\n";
//	cin >> title1;
//	while (true) {
//		if (title1 != title) {
//			break;
//		}
//		cout << "ENTER TITLE AGAIN\n";
//		cin >> title1;
//	}
//	ofstream numbers1(title1 + ".txt", ios::app);
//	if (numbers1.is_open()) {
//		
//		numbers1 << text1<<"\n";
//			
//		
//
//
//	}
//	else {
//		cout << "ERROR\n";
//	}
//	numbers1.close();
//}
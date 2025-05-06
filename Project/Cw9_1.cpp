//#include <iostream>
//using namespace std;
//
//void changeNum(int *a) {
//	int b = 25;
//	*a = b;
//}
//void revNum(int* a, int* b) {
//	int prom = *a;
//	*a = *b;
//	*b = prom;
//}
//void revNum(string* a, string* b) {
//	string prom = *a;
//	*a = *b;
//	*b = prom;
//}
//void revNum(bool* a, bool* b) {
//	bool prom = *a;
//	*a = *b;
//	*b = prom;
//}
//void revNum(double* a, double* b) {
//	double prom = *a;
//	*a = *b;
//	*b = prom;
//
//}
//void mass(int ar1[], int ar2[]) {
//	cout <<  "Arr1:\n";
//	for (int i = 0;i < 10;i++) {
//		ar1[i] = rand() % 10 + 1;
//		cout << ar1[i] << "\n";
//	}
//	cout << "Arr2:\n";
//	for (int i = 0;i < 10;i++) {
//		ar2[i] = rand() % 10 + 1;
//		cout << ar2[i] << "\n";
//	}
//	for (int i = 0;i < 10;i++) {
//		int prom = ar1[i];
//		ar1[i] = ar2[i];
//		ar2[i] = prom;
//	}
//	cout << "Arr1:\n";
//	for (int i = 0;i < 10;i++) {
//		cout << ar1[i] << "\n";
//	}
//	cout << "Arr2:\n";
//	for (int i = 0;i < 10;i++) {
//		cout << ar2[i] << "\n";
//	}
//}
//void mass1(int ar1[], const int size,int *min,int *max) {
//	cout << "Arr1:\n";
//	for (int i = 0;i < size;i++) {
//		ar1[i] = rand() % 10 + 1;
//		cout << ar1[i] << "\n";
//	}
//	*min = ar1[0];
//	*max = ar1[0];
//	for (int i = 0;i < size;i++) {
//		if (*min > ar1[i]) {
//			*min = ar1[i];
//		}
//		if (*max < ar1[i]) {
//			*max = ar1[i];
//		}
//	}
//	
//}
//void massRev(int ar1[], const int size) {
//	cout << "Arr1:\n";
//	int arrCopy[10];
//	for (int i = 0;i < 10;i++) {
//		ar1[i] = rand() % 10 + 1;
//		arrCopy[i] = ar1[i];
//		cout << ar1[i] << "\n";
//	}
//	for (int i = 0;i < 10;i++) {
//		ar1[i] = arrCopy[9 - i];
//		cout << ar1[i] << "\n";
//	}
//}
//void strRev(string *stre1) {
//	cout << "Str1:\n";
//	string strCopy = *stre1;
//	string tmpstr = "123456";
//	for (int i = 0;i < strCopy.length();i++) {
//		tmpstr[i] = strCopy[strCopy.length() - i - 1];
//	}
//	*stre1 = tmpstr;
//}
//void massCopy(int ar1[], int ar2[], int ar3[]) {
//	int ind1 = 0;
//	int ind2 = 0;
//	for (int i = 0;i < 10;i++) {
//		if (ar1[i] % 2 == 0) {
//			ar2[ind1] = ar1[i];
//			ind1++;
//		}
//		else if (ar1[i] % 2 != 0) {
//			ar3[ind2] = ar1[i];
//			ind2++;
//		}
//	}
//	cout << "Parni:\n";
//	for (int i = 0;i < 5;i++) {
//		cout << ar2[i] << "\n";
//	}
//	cout << "Neparni:\n";
//	for (int i = 0;i < 5;i++) {
//		cout << ar3[i] << "\n";
//	}
//
//
//}
//int main() {
//	srand(time(0));
//	string aaa = "ytrewq";
//	
//	strRev(&aaa);
//	cout << aaa<<"\n";
//	int arr1_2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2_2[5];
//	int arr3_2[5];
//	const int size = 11;
//	int arr1_1[size];
//	int min, max =0;
//	mass1(arr1_1, size, &min, &max);
//	cout << min << "-min:\n";
//	cout << max << "-max:\n";
//	int arr1[10];
//	int arr2[10];
//	mass(arr1, arr2);
//	int num1 = 5;
//	int num2 = 10;
//	bool boo1 = true;
//	bool boo2 = false;
//	revNum(&num1, &num2);
//	revNum(&boo1, &boo2);
//	/*changeNum(&num1);
//	int* num2 = &num1;
//	int** num3 = &num2;*/
//	cout << "Varible: 'num1' Value: " << num1 << "\n";
//	cout << "Adress: " << &num1 << "\n";
//	cout << "Varible: 'num2' Value: " << num2 << "\n";
//	cout << "Adress: " << &num2 << "\n";
//	cout << "Varible: 'boo1' Value: " << boo1 << "\n";
//	cout << "Adress: " << &boo1 << "\n";
//	cout << "Varible: 'boo2' Value: " << boo2 << "\n";
//	cout << "Adress: " << &boo2 << "\n";
//	/*cout << "Varible: 'num3' Value: " << **num3 << "\n";
//	cout << "Adress: " << *num3 << "\n";*/
//	/*int start;
//	cout << "start:\n";
//	cin >> start;*/
//
//}

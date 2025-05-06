//#include <iostream>
//using namespace std;
//
//
//int main() {
//	srand(time(0));
//	/*int *number = new int;
//	*number = 11;
//	cout << *number << "\n";
//	delete number;
//	
//
//	int* arr = new int[5];
//
//	arr[0] = 1;
//	arr[2] = 4;
//	for (int i = 0; i < 5;i++) {
//		cout << arr[i] << "\n";
//	}*/
//	/*int arr_size = 1;
//	int* arr = new int[1];
//	int num = 1;
//	int index = 0;
//	while (num != 0) {
//		cout <<"Num:\n";
//		cin >> num;
//		if (arr_size == index) {
//			arr_size++;
//			int* newArr = new int[arr_size];
//			for (int i = 0; i < arr_size; i++)
//			{
//				newArr[i] = arr[i];
//			}
//			delete[]arr;
//			arr = newArr;
//		}
//		arr[index] = num;
//		index++;
//	}
//
//	for (int i = 0; i < arr_size; i++)
//	{
//		cout << arr[i] << "\n";
//	}*/
//	int size;
//	//cout << "size:\n";
//	//cin >> size;
//	//int* arr = new int[size];
//	//for (int i = 0; i < size; i++)
//	//{
//	//	int num;
//	//	cout << "num:\n";
//	//	cin >> num;
//	//	arr[i] = num;
//	//}
//	//int sum = 0;
//	//int lowest = arr[0];
//	//int highest = arr[0];
//	//int num1;
//	//cout << "num:\n";
//	//cin >> num1;
//	//bool isNum = false;
//	//for (int i = 0; i < size; i++)
//	//{
//	//	sum += arr[i];
//	//	if (lowest > arr[i]) {
//	//		lowest = arr[i];
//	//	}
//	//	if (highest < arr[i]) {
//	//		highest = arr[i];
//	//	}
//	//	if (num1 == arr[i]) {
//	//		isNum = true;
//	//	}
//	//}
//	//cout << "sum: " << sum << " highest: " << highest << " lowest: " << lowest << "\n";
//	//if (isNum) {
//	//	cout << num1 <<"-is here\n";
//	//}
//	//int size1;
//	//cout << "size:\n";
//	//cin >> size1;
//	//int* arr1 = new int[size1];
//	//for (int i = 0; i < size1; i++)
//	//{
//	//	int num;
//	//	cout << "num:\n";
//	//	cin >> num;
//	//	arr1[i] = num;
//	//}
//	//int* finalArr = new int[size1 + size];
//	//int sumNeparn = 0;
//	//int sumParn = 0;
//	//for (int i = 0; i < size1 + size; i++)
//	//{
//	//	if (i < size) {
//	//		finalArr[i] = arr[i];
//	//	}
//	//	else {
//	//		finalArr[i] = arr1[i- size];
//	//	}
//	//	if (finalArr[i] % 2 == 0) {
//	//		sumParn += finalArr[i];
//	//		cout << finalArr[i]  <<"-parne\n";
//	//	}
//	//	else {
//	//		sumNeparn+= finalArr[i];
//	//		cout << finalArr[i] << "-neparne\n";
//	//	}
//	//}
//	//cout << "sumNeparn: " << sumNeparn << " sumParn: " << sumParn << "\n";
//	//delete[]arr;
//	//delete[]arr1;
//	//delete[]finalArr;
//	size = 0;
//	int* arr2 = new int[size];
//	
//	int num = 1;
//	int index = 0;
//	while (num != 0) {
//		cout << "Num:\n";
//		cin >> num;
//		if (size == index) {
//			size++;
//			int* newArr = new int[size];
//			for (int i = 0; i < size; i++)
//			{
//				newArr[i] = arr2[i];
//			}
//			delete[]arr2;
//			arr2 = newArr;
//		}
//		arr2[index] = num;
//		index++;
//	}
//	int* arr3 = new int[size + 1];
//	int in;
//	int n;
//	cout << "index:\n";
//	cin >> in;
//	cout << "num:\n";
//	cin >> n;
//	for (int i = 0;i < in;i++) {
//		arr3[i] = arr2[i];
//		cout << arr3[i] <<"-num\n";
//	}
//	arr3[in] = n;
//	cout << arr3[in] << "-num\n";
//	for (int i = in+1;i < size + 1;i++) {
//		arr3[i] = arr2[i-1];
//		cout << arr3[i] << "-num\n";
//	}
//	delete[]arr2;
//	delete[]arr3;
//	arr3 = nullptr;
//}

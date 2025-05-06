//#include <iostream>
//using namespace std;
//
//
//int main() {
//	srand(time(0));
//	int size;
//	cout << "size:\n";
//	cin >> size;
//	int* arr2 = new int[size];
//
//	int num = 1;
//	int index = size;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Num:\n";
//		cin >> arr2[i];
//	}
//	int suma = 0;
//	while (num != 0) {
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr2[i] << "\n";
//		}
//		int choise;
//		cout << "1-add num, 2-dell arr, 3-mid num\n";
//		cin >> choise;
//		switch (choise)
//		{
//			case 1:
//				cout << "Num:\n";
//				cin >> num;
//				if (size == index) {
//					size++;
//					int* newArr = new int[size];
//					for (int i = 0; i < size; i++)
//					{
//						newArr[i] = arr2[i];
//					}
//					delete[]arr2;
//					arr2 = newArr;
//				}
//				arr2[index] = num;
//				index++;
//				break;
//			case 2:
//				delete[]arr2;
//				num = 1;
//				index = 0;
//				size = 0;
//				arr2 = new int[size];
//				break;
//			case 3:
//				for (int i = 0; i < size; i++)
//				{
//					suma += arr2[i];
//				}
//				cout << suma / size <<"-mid num\n";
//				suma = 0;
//				break;
//			default:
//				break;
//		}
//		
//	}
//}

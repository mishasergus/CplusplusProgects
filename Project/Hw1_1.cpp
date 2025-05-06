//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	float r1;
//	float r2;
//	float r3;
//	float r;
//	float pCircle;
//	float sCircle;
//	float rad;
//	float v;
//	float t;
//	float a;
//	float s;
//	float litrMax = 300;
//	float AB;
//	float BC;
//	float weight;
//	float zatrata;
//	cout << "Enter r1: \n";
//	cin >> r1;
//	cout << "Enter r2: \n";
//	cin >> r2;
//	cout << "Enter r3: \n";
//	cin >> r3;
//	r = 1 / (1 / r1 + 1 / r2 + 1 / r3);
//	cout << r << "-R \n";
//	cout << "Enter pCircle: \n";
//	cin >> pCircle;
//	rad = pCircle / 6.28;
//	sCircle = rad * rad * 3.14;
//	cout << sCircle << "-sCircle \n";
//	cout << "Enter v: \n";
//	cin >> v;
//	cout << "Enter t: \n";
//	cin >> t;
//	cout << "Enter a: \n";
//	cin >> a;
//	s = v * t + (a * t * 2) / 2;
//	cout << s << "-s \n";
//	cout << "Enter AB: \n";
//	cin >> AB;
//	cout << "Enter BC: \n";
//	cin >> BC;
//	cout << "Enter w: \n";
//	cin >> weight;
//	if (weight < 500 && weight >= 0) {
//		zatrata = 1;
//	}
//	else if (weight < 1000 && weight >= 0) {
//		zatrata = 4;
//	}
//	else if (weight < 1500 && weight >= 0) {
//		zatrata = 7;
//	}
//	else if (weight < 2000 && weight >= 0) {
//		zatrata = 9;
//	}
//	else {
//		cout << "Чи не підняв чи мінусова \n";
//		return 0;
//	}
//	if (zatrata * AB < litrMax && zatrata * BC < litrMax) {
//		if (300 - zatrata * AB < zatrata * BC) {
//			cout << zatrata * BC  - (300 - zatrata * AB) << " \n";
//		}
//		else {
//			cout << "U don`t need zapr \n";
//		}
//	}
//	else
//	{
//		cout <<"У разі неможливості подолати будь-яку з відстаней програма повинна вивести повідомлення про неможливість польоту за введеним маршрутом. \n";
//	}
//}
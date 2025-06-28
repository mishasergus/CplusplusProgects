//#include <iostream>
//#include <fstream>
//#include <string>
//#include <filesystem>
//#include <cctype>
//#include "StudentsProject.h"
//using namespace std;
//namespace fs = filesystem;
//
//class Complex {
//private:
//    float n = 0;
//    float i = 0;
//public:
//    Complex(float n, float i) {
//        this->n = n;
//        this->i = i;
//    }
//    inline void show() {
//        cout << "n: " << n << "\ni: " << i << '\n';
//    }
//    Complex operator +(Complex& tmp) {
//        return Complex(n + tmp.n, i + tmp.i);
//    }
//    Complex operator -(Complex& tmp) {
//        return Complex(n - tmp.n, i - tmp.i);
//    }
//    Complex operator *(Complex& tmp) {      
//        return Complex(n * tmp.n - i * tmp.i, n * tmp.i + tmp.n * i);
//    }
//    Complex operator /(Complex& tmp) {
//        return Complex((n * tmp.n + i * tmp.i) / ((tmp.n * tmp.n) + (tmp.i * tmp.i)), (i * tmp.n - n * tmp.i) / ((tmp.n * tmp.n) + (tmp.i * tmp.i)));
//    }
//    friend ostream& operator <<(ostream& output, Complex& tmp) {
//        if (tmp.n == 0 && tmp.i == 0) {
//            output << 0;
//            return output;
//        }
//        else if (tmp.i > 0) {
//            if (tmp.n == 0) {
//                output << tmp.i<<'i';
//                return output;
//            }
//            else {
//                output << tmp.n << '+' << tmp.i << 'i';
//                return output;
//            }
//        }
//        else if (tmp.i < 0) {
//            if (tmp.n == 0) {
//                output << tmp.i << 'i';
//                return output;
//            }
//            else {
//                output << tmp.n << tmp.i << 'i';
//                return output;
//            }
//        }
//        return output;
//    }
//};
//
//class Drib {
//private:
//    int drib[2] = {0,0};
//public:
//    Drib(int chiselnic, int znamennic) {
//        drib[0] = chiselnic;
//        drib[1] = znamennic;
//    }
//    void show() {
//        cout << "chiselnic: " << drib[0] << "\nznamennic: " << drib[1] << "\n";
//    }
//    int get_chiselnic() {
//        return drib[0];
//    }
//    int get_znamennic() {
//        return drib[1];
//    }
//    void set_chiselnic(int chiselnic) {
//        drib[0] = chiselnic;
//    }
//    void set_znamennic(int znamennic) {
//        drib[1] = znamennic;
//    }
//    Drib operator +(Drib& tmp) {
//        int n = 1;
//        int coofx;
//        int coofy;
//        while (true) {
//            if (n % drib[1] == 0 && n % tmp.drib[1] == 0) {
//                coofx = n / drib[1];
//                coofy = n / tmp.drib[1];
//                break;
//            }
//            n++;
//        }
//        return Drib(drib[0] * coofx + tmp.drib[0] * coofy, drib[1] * coofx);
//    }
//    Drib operator -(Drib& tmp) {
//        int n = 1;
//        int coofx;
//        int coofy;
//        while (true) {
//            if (n % drib[1] == 0 && n % tmp.drib[1] == 0) {
//                coofx = n / drib[1];
//                coofy = n / tmp.drib[1];
//                break;
//            }
//            n++;
//        }
//        return Drib(drib[0] * coofx - tmp.drib[0] * coofy, drib[1] * coofx);
//    }
//    Drib operator *(Drib& tmp) {
//        return Drib(drib[0] * tmp.drib[0], drib[1] * tmp.drib[1]);
//    }
//    Drib operator /(Drib& tmp) {
//        return Drib(drib[0] * tmp.drib[1], drib[1] * tmp.drib[0]);
//    }
//    friend ostream& operator <<(ostream& output, Drib& tmp) {
//        output << "|" << tmp.drib[0] << "|\n|-|\n|"<< tmp.drib[1] << "|\n";
//        return output;
//    }
//};
//
//
//int main()
//{
//    Complex c1(3., 2.);
//    Complex c2(1., -4.);
//    Complex x = c1 / c2;
//    cout << x << "\n";
//
//    Drib d1(1, 2);
//    Drib d2(1, 3);
//
//    Drib sum = d1 + d2;
//    cout << sum;
//    srand(time(0));
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <filesystem>
//#include <cctype>
//#include "StudentsProject.h"
//using namespace std;
//namespace fs = filesystem;
//
//class complex_ {
//private:
//    string r = "Def";
//    string i = "Def";
//public:
//    complex_(string r, string i) {
//        this->r = r;
//        this->i = i;
//    }
//    complex_(string r) {
//        this->r = r;
//    }
//    complex_(string i,bool smyh = 0) {
//        this->i = i;
//    }
//
//
//    inline void show() {
//        cout << "r: " << r << "i: " << i << '\n';
//    }
//
//    void write(string path) {
//        if (!fs::exists(path)) {
//            fstream obj1(path, ios::out);
//            obj1.close();
//        }
//        fstream obj2(path, ios::out);
//        if (obj2.is_open()) {
//            obj2 << "r: " << r << "i: " << i << '\n';
//        }
//    }
//};
//
//class vectorClass {
//private:
//    int a = 0;
//    int b = 0;
//public:
//    vectorClass(){}
//    vectorClass(int a, int b) {
//        this->a = a;
//        this->b = b;
//    }
//    inline int get_a() {
//        return a;
//    }
//    inline int get_b() {
//        return b;
//    }
//
//    vectorClass operator +(vectorClass& tmp) {
//        return vectorClass(a + tmp.a, b + tmp.b);
//    }
//    vectorClass operator -(vectorClass& tmp) {
//        return vectorClass(a - tmp.a, b - tmp.b);
//    }
//    vectorClass operator *(vectorClass& tmp) {
//        return vectorClass(a * tmp.a, b * tmp.b);
//    }
//    vectorClass operator /(vectorClass& tmp) {
//        if (tmp.a == 0 || tmp.b == 0) {
//            return vectorClass();
//        }
//        return vectorClass(a / tmp.a, b / tmp.b);
//    }
//    bool operator ==(vectorClass& tmp) {
//        if (tmp.a == a || tmp.b == b) {
//            return true;
//        }
//        return false;
//    }
//    bool operator !=(vectorClass& tmp) {
//        if (tmp.a != a || tmp.b != b) {
//            return true;
//        }
//        return false;
//    }
//    bool operator >(vectorClass& tmp) {
//        if (a > tmp.a && b > tmp.b) {
//            return true;
//        }
//        return false;
//    }
//    bool operator <(vectorClass& tmp) {
//        if (a < tmp.a && b < tmp.b) {
//            return true;
//        }
//        return false;
//    }
//    bool operator >=(vectorClass& tmp) {
//        if (a >= tmp.a && b >= tmp.b) {
//            return true;
//        }
//        return false;
//    }
//    bool operator <=(vectorClass& tmp) {
//        if (a <= tmp.a && b <= tmp.b) {
//            return true;
//        }
//        return false;
//    }
//
//    friend ostream &operator <<(ostream& output, vectorClass& tmp) {
//        output << "|" << tmp.a << "|\n|"<< tmp.b << "|\n";
//        return output;
//    }
//};
//
//
//int main()
//{
//    vectorClass v1(1, 2);
//    vectorClass v2(1, 2);
//
//    vectorClass sum = v1 + v2;
//    cout << sum;
//    srand(time(0));
//}
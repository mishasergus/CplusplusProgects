//#include <iostream>
//#include <fstream>
//#include <string>
//#include <filesystem>
//#include <cctype>
//#include "StudentsProject.h"
//using namespace std;
//namespace fs = filesystem;
//
//class Phone_book {
//    private:
//        string name = "Def";
//        int num = 0;
//        string adress = "Def";
//        int workPhone = 0;
//    public:
//        Phone_book() = default;
//        Phone_book(string name, int num, string adress, int workPhone) {
//            this->name = name;
//            this->num = num;
//            this->adress = adress;
//            this->workPhone = workPhone;
//        }
//        void show() {
//            cout << "name: " << name << "num: " << num << "adress: " << adress << "workPhone: " << workPhone;
//        }
//        string get_name() {
//            return name;
//        }
//        string get_adress() {
//            return adress;
//        }
//        int get_num() {
//            return num;
//        }
//        int get_workPhone() {
//            return workPhone;
//        }
//        void set_name(string name1){
//            name = name1;
//        }
//        void set_adress(string adress) {
//            adress = adress;
//        }
//        void set_num(int num1) {
//            num = num1;
//        }
//        void set_workPhone(int workPhone1) {
//            workPhone = workPhone;
//        }
//};
//
//class Point {
//private:
//    float coord[3] = { 0,0,0 };
//public:
//    Point(float a, float b, float c) {
//        coord[0] = a;
//        coord[1] = b;
//        coord[2] = c;
//    }
//    void show() {
//        cout << "a: " << coord[0] << "\nb: " << coord[1] << "\nc: " << coord[2] << "\n";
//    }
//    float get_a() {
//        return coord[0];
//    }
//    float get_b() {
//        return coord[1];
//    }
//    float get_c() {
//        return coord[2];
//    }
//    float set_a(float a) {
//        coord[0] = a;
//    }
//    float set_b(float b) {
//        coord[1] = b;
//    }
//    float set_c(float c) {
//        coord[2] = c;
//    }
//    void sasave() {
//        if (fs::exists("save.txt")) {
//            fs::remove_all("save.txt");
//        }
//        fstream obj1("save.txt", ios::out);
//        if (obj1.is_open())
//        {
//            obj1 << coord[0] << "\n" << coord[1] << "\n" << coord[2] << "\n";
//        }
//        obj1.close();
//    }
//    void openene() {
//        fstream obj1("save.txt", ios::in);
//        if (obj1.is_open())
//        {
//            string txt;
//            int n = 0;
//            for (;getline(obj1, txt);) {
//                coord[n] = stof(txt);
//                n++;
//            }
//        }
//        obj1.close();
//    }
//};
//
//class Drib {
//private:
//    int drib[2] = { 0,0};
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
//};
//
//void addDrib(Drib d1, Drib d2) {
//    int n = 1;
//    int coofx;
//    int coofy;
//    while (true) {
//        if (n % d1.get_znamennic() == 0 && n % d2.get_znamennic() == 0) {
//            coofx = n / d1.get_znamennic();
//            coofy = n / d2.get_znamennic();
//            break;
//        }
//        n++;
//    }
//    cout << coofx<<" " << coofy << endl;
//    cout << d1.get_chiselnic() * coofx + d2.get_chiselnic() * coofy << "\n";
//    cout << d1.get_znamennic() * coofx <<"\n";
//}
//void minDrib(Drib d1, Drib d2) {
//    int n = 1;
//    int coofx = 0;
//    int coofy = 0;
//    while (true) {
//        if (n % d1.get_znamennic() == 0 && n % d2.get_znamennic() == 0) {
//            coofx = n / d1.get_znamennic();
//            coofy = n / d2.get_znamennic();
//            break;
//        }
//        n++;
//    }
//    cout << d1.get_chiselnic() * coofx - d2.get_chiselnic() * coofy << "\n";
//    cout << d1.get_znamennic() * coofx << "\n";
//}
//void dobDrib(Drib d1, Drib d2) {
//    cout << d1.get_chiselnic() * d2.get_chiselnic() << "\n";
//    cout << d1.get_znamennic() * d2.get_znamennic() << "\n";
//}
//void chasDrib(Drib d1, Drib d2) {
//    cout << d1.get_chiselnic() * d2.get_znamennic() << "\n";
//    cout  << d1.get_znamennic() * d2.get_chiselnic() << "\n";
//}
//int main()
//{
//    srand(time(0));
//    Drib drib1(97,11);
//    Drib drib2(56, 4);
//    addDrib(drib1, drib2);
//
//    /*Phone_book* phone_book1 = new Phone_book("nam", 3, "Olegova3", 8800555535);
//    cout << phone_book1->get_adress();
//    cout << phone_book1->get_name();
//    cout << phone_book1->get_num();
//    cout << phone_book1->get_workPhone();*/
//}
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cctype>
#include "StudentsProject.h"
using namespace std;
namespace fs = filesystem;

class Phone_book {
    private:
        string name = "Def";
        string surename = "Def";
        string fathername = "Def";
        string adress = "Def";
        int workPhone = 0;
        int homePhone = 0;
        int mobilePhone = 0;
        string inf = "Def";
    public:
        Phone_book() = default;
        Phone_book(string name , string surename, string fathername, string adress, int workPhone, int homePhone, int mobilePhone, string inf = "Def") {
            this->name = name;
            this->surename = surename;
            this->fathername = fathername;
            this->adress = adress;
            this->workPhone = workPhone;
            this->homePhone = homePhone;
            this->mobilePhone = mobilePhone;
            this->inf = inf;
            if (fs::exists("PhoneBook.txt")) {
                fstream obj("PhoneBook.txt", ios::out);
                if (obj.is_open()) {
                    obj << "name: " << name << " surename: " << surename << " fathername: " << fathername << " adress: " << adress << " workPhone: " << workPhone << "homePhone: " << homePhone << " mobilePhone: " << mobilePhone << " inf: " << inf << "\n";
                }
                obj.close();
            }
        }
        void show() {
            cout << "name: " << name << " surename: "<<surename << " fathername: " << fathername <<" adress: " << adress << " workPhone: " << workPhone << "homePhone: " << homePhone << " mobilePhone: " << mobilePhone << " inf: " << inf << "\n";
        }
        string get_name() {
            return name;
        }
        string get_surename() {
            return surename;
        }
        string get_fathername() {
            return fathername;
        }
        string get_adress() {
            return adress;
        }
        int get_workPhone() {
            return workPhone;
        }
        int get_homePhone() {
            return homePhone;
        }
        int get_mobilePhone() {
            return mobilePhone;
        }
        string get_inf() {
            return inf;
        }
        void set_name(string name){
            this->name = name;
        }
        void set_surename(string surename) {
            this->surename = surename;
        }
        void set_fathername(string fathername) {
            this->fathername = fathername;
        }
        void set_adress(string adress) {
            this->adress = adress;
        }
        void set_workPhone(int workPhone) {
            this->workPhone = workPhone;
        }
        void set_homePhone(int homePhone) {
            this->homePhone = homePhone;
        }
        void set_mobilePhone(int mobilePhone) {
            this->mobilePhone = mobilePhone;
        }
        void set_inf(string inf) {
            this->inf = inf;
        }
};

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
int main()
{
    srand(time(0));
    fs::remove_all("PhoneBook.txt");
    fstream obj("PhoneBook.txt", ios::out);
    obj.close();
    /*Drib drib1(97,11);
    Drib drib2(56, 4);
    addDrib(drib1, drib2);*/

    Phone_book* phone_book1 = new Phone_book("nam", "q", "Olegova3", "q",1,1,1,"r");
    fstream obj2("PhoneBook.txt", ios::in);
    string txt;
    if (obj2.is_open()) {
        for (;getline(obj2, txt);) {
            cout << txt << '\n';
        }
    }
    obj2.close();
}
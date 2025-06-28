#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cctype>
#include "StudentsProject.h"
using namespace std;
namespace fs = filesystem;

template<class T>
class Matrix {
private:
    int r;
    int c;
    T** matr;
public:
    Matrix(int r,int c) {
        this->r = r;
        this->c = c;
        matr = new T * [r];
        for (int i = 0; i < r; i++) {
            matr[i] = new T[c];
            for (int j = 0; j < c; j++) {
                matr[i][j] = 0;
            }
        }
    }
    void setRows(int n) {
        T** matrCopy = new T * [r];
        for (int i = 0; i < r; i++) {
            matrCopy[i] = new T[c];
            for (int j = 0; j < c; j++) {
                matrCopy[i][j] = matr[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            delete[]matr[i];
        }
        delete[]matr;
        int oldR = r;
        r = n;
        matr = new T * [r];
        for (int i = 0; i < r; i++) {
            matr[i] = new T[c];
            for (int j = 0; j < c; j++) {
                if (i >= oldR) {
                    matr[i][j] = 0;
                }
                else {
                    matr[i][j] = matrCopy[i][j];
                }
            }
        }
        for (int i = 0; i < oldR; i++)
        {
            delete[]matrCopy[i];
        }
        delete[]matrCopy;
    }
    void setCol(int n) {
        T** matrCopy = new T * [r];
        for (int i = 0; i < r; i++) {
            matrCopy[i] = new T[c];
            for (int j = 0; j < c; j++) {
                matrCopy[i][j] = matr[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            delete[]matr[i];
        }
        delete[]matr;
        int oldC = c;
        c = n;
        matr = new T * [r];
        for (int i = 0; i < r; i++) {
            matr[i] = new T[c];
            for (int j = 0; j < c; j++) {
                if (j >= oldC) {
                    matr[i][j] = 0;
                }
                else {
                    matr[i][j] = matrCopy[i][j];
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            delete[]matrCopy[i];
        }
        delete[]matrCopy;
    }
    void entByKeyb() {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                T x;
                cin >> x;
                matr[i][j] = x;
            }
        }
    }
    void entByRand() {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                matr[i][j] = T(rand() % 10 + 1);
            }
        }
    }
    T max() {
        T max = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matr[i][j] > max) {
                    max = matr[i][j];
                }
            }
        }
        return max;
    }
    T min() {
        T max = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matr[i][j] < min) {
                    min = matr[i][j];
                }
            }
        }
        return min;
    }

    friend ostream& operator <<(ostream& output,const Matrix<T>& tmp) {
        for (int i = 0; i < tmp.r; i++)
        {
            for (int j = 0; j < tmp.c; j++)
            {
                output << "|" << tmp.matr[i][j];
            }
            output << "|\n";
        }
        return output;
    }

    Matrix operator +(const Matrix& tmp) {
        if (r == tmp.r && c == tmp.c) {
            Matrix<T> result(r, c);
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    result.matr[i][j] = matr[i][j] + tmp.matr[i][j];
                }
            }
            return result;
        }
        return Matrix<T> (1, 1);
    }

    Matrix operator -(const Matrix& tmp) {
        if (r == tmp.r && c == tmp.c) {
            Matrix <T>result(r, c);
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    result.matr[i][j] = matr[i][j] - tmp.matr[i][j];
                }
            }
            return result;
        }
        return Matrix<T> (1, 1);
    }

    Matrix operator *(T n) {
        Matrix <T>result(r, c);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result.matr[i][j] = matr[i][j] * n;
            }
        }
        return result;
    }

    Matrix operator *(const Matrix& tmp) {
        if (c == tmp.r) {
            Matrix <T>result(r, tmp.c);
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < tmp.c; j++) {
                    result.matr[i][j] = 0;
                    for (int h = 0; h < tmp.r; h++)
                    {
                        result.matr[i][j] += matr[i][h] * tmp.matr[h][j];
                    }
                }
            }
            return result;
        }
        return Matrix<T> (1,1);
    }
    
};

int main()
{
    srand(time(0));
    Matrix<int>* m1 = new Matrix<int>(2, 2);
    m1->entByKeyb();
    cout << *m1;
    Matrix<int>* m2 = new Matrix<int>(2, 2);
    m2->entByKeyb();
    cout << *m2 << '\n';
    cout << *m2 + *m1 << '\n';
    cout << *m2 - *m1 << '\n';

    cout << *m1 * 2<<'\n';
    cout << *m1 * *m2 << '\n';

}
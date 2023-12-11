/*Даден е двумерен масив A с m реда и n стълба. Да се напише програма, която създава нов масив X,
като стойността на Xi е равна на броя на отрицателните елементи в i-ия ред на A.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
    system("chcp 1251");

    int m, n, i, j;
    cout << " Въведете брой редове на масива А: "; cin >> m;
    cout << " Въведете брой стълбове на масива А: "; cin >> n; cout << endl;
    float A[30][30];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << " елемент " << i << "." << j << ": "; cin >> A[i][j];
        }
        cout << "\n";
    }
    float X[30];
    for (i = 0; i < m; i++) {
        X[i] = 0;
        for (j = 0; j < n; j++) {
            if (A[i][j] < 0) X[i]++;

        }
        cout << " X[" << i << "]= " << X[i] << endl;
    }
}

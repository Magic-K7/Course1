/*����� � �������� ����� A � m ���� � n ������. �� �� ������ ��������, ����� ������� ��� ����� X,
���� ���������� �� Xi � ����� �� ���� �� ������������� �������� � i-�� ��� �� A.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
    system("chcp 1251");

    int m, n, i, j;
    cout << " �������� ���� ������ �� ������ �: "; cin >> m;
    cout << " �������� ���� �������� �� ������ �: "; cin >> n; cout << endl;
    float A[30][30];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << " ������� " << i << "." << j << ": "; cin >> A[i][j];
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


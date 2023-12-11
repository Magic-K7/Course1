/*� �������� a1, a2, . . . , an � b1, b2, . . . , bn �� �������� �������� �� 
n ����������� �����������. �� �� ������ �������� �� �������� ������/�� 
�� �����������/-���� � ���-����� ���������.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
    system("chcp 1251");

    int n, k = 0, i; float a[50], b[50], P[50], c[50], maxP = 0;
    cout << " �������� ���� �� ������������� �����������: "; cin >> n; cout << "\n";

    for (i = 0; i < n; i++) {
        cout << " �������� ����� a" << i << " = "; cin >> a[i];
        cout << " �������� ����� b" << i << " = "; cin >> b[i]; cout << "\n";
    }
    for (i = 0; i < n; i++) {
        c[i] = sqrt(a[i] * a[i] + b[i] * b[i]);
        P[i] = a[i] + b[i] + c[i];
        if (P[i] > maxP)   maxP = P[i];
    }
    
    cout << " �����/�: ";
    for (i = 0; i < n; i++) {
        if (maxP == P[i])  cout << i <<"    ";
    }

}

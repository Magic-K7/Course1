/*�������� �� ����� � ������������ �� X � Y � ������������, 
��������� �� ������� � ��������� x=0, y=0, x=A, y=B (A<0, B>0).
�� �� ������� ��������, ����� �������� ���� ������� ���� � �������������.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
    system("chcp 1251");
    int A, B, X, Y;
    cout << " �������� A= (A<0) "; cin >> A;
    cout << " �������� B= (B>0) "; cin >> B;

        if (A >= 0 || B <= 0)
        {
            cout << " �������� A<0 � B>0" << endl; return;
        }
    cout << " ���������� �� �������: " << "\n";
    cout << " X= "; cin >> X;
    cout << " Y= "; cin >> Y;

        if (X >= A && X <= 0 && Y <= B && Y >= 0)
            cout << " ������� ���� � �������������. " <<endl;
        else cout << " ������� �� ���� � �������������. " <<endl;

}

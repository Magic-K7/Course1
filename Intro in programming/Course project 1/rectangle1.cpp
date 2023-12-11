/*Зададени са точка с координатите си X и Y и правоъгълник, 
ограничен от правите с уравнения x=0, y=0, x=A, y=B (A<0, B>0).
Да се състави програма, която определя дали точката лежи в правоъгълника.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
    system("chcp 1251");
    int A, B, X, Y;
    cout << " въведете A= (A<0) "; cin >> A;
    cout << " въведете B= (B>0) "; cin >> B;

        if (A >= 0 || B <= 0)
        {
            cout << " Въведете A<0 и B>0" << endl; return;
        }
    cout << " координати на точката: " << "\n";
    cout << " X= "; cin >> X;
    cout << " Y= "; cin >> Y;

        if (X >= A && X <= 0 && Y <= B && Y >= 0)
            cout << " Точката лежи в правоъгълника. " <<endl;
        else cout << " Точката НЕ лежи в правоъгълника. " <<endl;

}

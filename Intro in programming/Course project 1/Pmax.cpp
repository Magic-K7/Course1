/*В масивите a1, a2, . . . , an и b1, b2, . . . , bn се съдържат катетите на 
n правоъгълни триъгълника. Да се напише програма за намиране номера/та 
на триъгълника/-ците с най-голям периметър.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
    system("chcp 1251");

    int n, k = 0, i; float a[50], b[50], P[50], c[50], maxP = 0;
    cout << " Въведете брой на правоъгълните триъгълници: "; cin >> n; cout << "\n";

    for (i = 0; i < n; i++) {
        cout << " Въведете катет a" << i << " = "; cin >> a[i];
        cout << " Въведете катет b" << i << " = "; cin >> b[i]; cout << "\n";
    }
    for (i = 0; i < n; i++) {
        c[i] = sqrt(a[i] * a[i] + b[i] * b[i]);
        P[i] = a[i] + b[i] + c[i];
        if (P[i] > maxP)   maxP = P[i];
    }
    
    cout << " номер/а: ";
    for (i = 0; i < n; i++) {
        if (maxP == P[i])  cout << i <<"    ";
    }

}

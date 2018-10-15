#include<iostream>

using namespace std;

int main() {
    int A, B, C, D;

    cout << "Masukkan bilangan 1 (A): ";
    cin >> A;

    cout << "Masukkan bilangan 2 (B): ";
    cin >> B;

    cout << "Masukkan bilangan 3 (C): ";
    cin >> C;

    cout << "Masukkan bilangan 4 (D): ";
    cin >> D;

    if (A > B && A > C && A > D)
        cout << "Bilangan terbesar adalah: " << A << endl;

    if (B > C && B > A && B > D)
        cout << "Bilangan terbesar adalah: " << B << endl;

    if (C > A && C > B && C > D)
        cout << "Bilangan terbesar adalah: " << C << endl;

    if (D > A && D > B && D > C)
        cout << "Bilangan terbesar adalah: " << D << endl;
}

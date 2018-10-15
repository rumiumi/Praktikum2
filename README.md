# Praktikum2

## Latihan 1: Menentukan Bilangan Terbesar dari 3 Bilangan

**Alur Algoritma**
1. Mendeklarasikan variable `int A, B, C` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nailai variabel **A** dan **B**
4. Kondisi **True**, maka bandingkan nilai variabel **A** dengan **C**
5. Kondisi **False**, maka bandingkan nilai **B** dengan **C**

**Flowchart Program**
...

**Berikut Code Lengkapnya**
```
#include<iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Masukkan bilang 1: ";
    cin >> A;

    cout << "Masukkan bilang 2: ";
    cin >> B;

    cout << "Masukkan bilang 3: ";
    cin >> C;

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalah: " << B << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    }
}

```

Hasilnya:
...
# Praktikum2

## Latihan 1: Menentukan Bilangan Terbesar dari 3 Bilangan

**Alur Algoritma**
1. Mendeklarasikan variable `int A, B, C` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nailai variabel **A** dan **B**
4. Kondisi **True**, maka bandingkan nilai variabel **A** dengan **C**
5. Kondisi **False**, maka bandingkan nilai **B** dengan **C**

**Flowchart Program**

![Flowchart1](https://github.com/rumiumi/Praktikum2/blob/master/flowchart1.png)

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
![Hasil](https://github.com/rumiumi/Praktikum2/blob/master/hasil.PNG)

## Latihan 2: Menentukan Bilangan Terbesar dari 4 Bilangan

**Alur Algoritma**
1. Mendeklarasikan variable `int A, B, C, D` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C >> D`
3. Membandingkan apakah `A` lebih besar dari `B`, `C` dan `D`, bila iya cetak angka A
4. Membandingkan apakah `B` lebih besar dari `A`, `C` dan `D`, bila iya cetak angka B
5. Membandingkan apakah `C` lebih besar dari `A`, `B` dan `D`, bila iya cetak angka C
6. Membandingkan apakan `D` lebih besar dari `A`, `B` dan `C`, bila iya cetak angka D

**Flowchart Program**

...

**Berikut Code Lengkapnya**
```
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
```

**Hasilnya**

![Hasil2](https://github.com/rumiumi/Praktikum2/blob/master/hasil2.PNG)
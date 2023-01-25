#include <iostream>
#include <math.h>
using namespace std;

#define m 10

int A[m+1], x, indeks;

int main() {
    // baca elemen larik A
    for (indeks=0; indeks < m; indeks++){
        cout << "Masukkan elemen ke-" << indeks+1 <<" : ";
        cin >> A[indeks];
    }
    // baca data yang akan dicari
    // cout << "\nmasukkan data yang dicari : ";
    // cout << "masukkan elemen ke-" << indeks+1 << " : ";
    // cin >> A[indeks];
    
    cout << "\nmasukkan data yang dicari : ";
    cin >> x;
    // x sebagai sentinel
    A[m] = x;
    // pencarian data
    indeks = 1;
    while (x != A[indeks])
    indeks = indeks + 1;
    // menetapkan hasil
    if (indeks < m)
    cout << "\nx ditemukan di posisi " << indeks + 1 << '\n';
    else {
        cout << "\nx tidak ditemukan dalam larik\n";
        cout << "tetapi pada sentinel\n";
    }
    system("PAUSE");
    return 0;
}
// baca data yang akan dicari

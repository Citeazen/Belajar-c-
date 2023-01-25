// Pencarian data beruntun(Sequential)
#include <iostream>
#include <math.h>
using namespace std;

#define m 10

int A[m], x, indeks;
int main()
{
    // baca elemen larik a
    for (indeks = 0; indeks < m; indeks++)
    {
        cout << "Masukkan elemen ke-" << indeks + 1 << " : ";
        cin >> A[indeks];
    }
    cout << "\nmasukkan data yang dicari : ";
    cin >> x;
    indeks = 1;
    while ((indeks < m) && (x != A[indeks]))
        indeks++;

    if (indeks < m)
        cout << "\nx ditemukan diposisi " << indeks + 1 << '\n';
    else
        cout << "\nx tidak ditemukan dalam larik" << '\n';

    system("PAUSE");
    return 0;
}
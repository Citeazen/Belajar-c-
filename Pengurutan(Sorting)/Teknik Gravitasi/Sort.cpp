#include <iostream>
using namespace std;

void Baca_Larik(int M, int A[]);
void Cetak_Larik(int M, int A[]);
void Teknik_Gravitasi(int M, int A[]);

int main(){
    const int N=6;
    int A[N];
    int pilihan;

    Baca_Larik(N,A);
    cout << "Larik Sebelum di Sort : ";
    Cetak_Larik(N,A);
    cout << endl << endl;

    // Lakukan Sort
    Teknik_Gravitasi(N,A);
    cout << "Setelah di Sort : ";
    Cetak_Larik(N,A);

    system ("pause");
    return 0;
}
void Baca_Larik (int M, int A[]){
    int indeks;
    for (indeks=0; indeks < M; indeks++){
        cout << "Masukkan elemen ke-" << indeks+1 << " : ";
        cin >> A[indeks];
    }
}
void Cetak_Larik(int M, int A[]){
    int indeks;

    cout << endl;
    for (indeks=0; indeks < M; indeks++){
        cout << A[indeks] << " ";
    }
}
void Teknik_Gravitasi(int M, int A[]){
    int maks, putaran, indeks, jum_elemen, temp;

    maks = M;
    for (putaran=0; putaran < M; putaran++){
        for (indeks=0; indeks < (M-1); indeks++){
            if (A[indeks] > A[indeks+1]){
                temp = A[indeks];
                A[indeks] = A[indeks+1];
                A[indeks+1] = temp;
            }
        }
        maks = maks - 1;
    }
}
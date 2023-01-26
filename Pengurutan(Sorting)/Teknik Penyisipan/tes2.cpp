#include <iostream>
using namespace std;

void Baca_Larik(int M, int A[]);
void Cetak_Larik(int M, int A[]);
void sort_Insertion(int M, int A[]);

int main() {
    const int N=6;
    int A[N];
    int pilihan;

    Baca_Larik(N,A);
    cout << "Larik sebelum di Sort : \n";
    Cetak_Larik(N,A);

    // Lakukan sort
    sort_Insertion(N,A);
    cout << "Setelah di Sort : \n";
    Cetak_Larik(N,A);

    system("PAUSE");
    return 0;
}

void Baca_Larik(int M, int A[]){
    int indeks;

    for (indeks=0; indeks <M; indeks++){
        cout << "Masukkan elemen ke- " << indeks+1 << " : ";
        cin >> A[indeks];
    }
}

void Cetak_Larik(int M, int A[]){
    int indeks;

    cout << endl << endl;
    for (indeks=0; indeks < M; indeks++){
        cout << A[indeks] << " ";
    }
    cout << endl << endl;
}

void sort_Insertion(int M, int A[]){
    int x, k, posisi, idx;


    for (posisi=1; posisi < M; posisi++){
        x = A[posisi];
        idx = 0;
        // Cari posisi
        while (x > A[idx] && idx < posisi)
        idx = idx + 1;
        // sisipkan pada posisi yang tepat
        if (x <= A[idx]){
            // geser ke kanan
            for (k=posisi; k>idx; k--){
                A[k] = A[k-1];
            }
            A[idx] = x;
        }
    }
}
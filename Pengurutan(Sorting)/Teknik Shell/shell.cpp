#include <iostream>
using namespace std;

void Baca_Larik(int M, int A[]);
void Cetak_Larik(int M, int A[]);
void shell_Sort(int M, int A[]);

int main(){
    const int N=6;
    int A[N];
    int pilihan;

    Baca_Larik(N,A);
    cout << "Larik sebelum di Sort : \n";
    Cetak_Larik(N,A);

    // Lakukan Sort
    shell_Sort(N,A);
    cout << "Setelah di Sort : \n";
    Cetak_Larik(N,A);

    system("PAUSE");
    return 0;
}

void Baca_Larik(int M, int A[]){
    int indeks;

    for (indeks=0; indeks < M; indeks++){
        cout << "Masukkan elemen ke-" << indeks+1 << " : ";
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
void shell_Sort(int M, int A[]){
    int tempo;
    int i, j, k;
    bool urut;

    k = M-1;
    while (k>0){
        k = k/2;
        do {
            urut = true;
            for (j=0; j<M-k; j++){
                i = j + k;
                if (A[i] < A[j]){
                    tempo = A[i];
                    A[i] = A[j];
                    A[j] = tempo;
                    urut = false;
                }
            }
        } while (!urut);
    }
}
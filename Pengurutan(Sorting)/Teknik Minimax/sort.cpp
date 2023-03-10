#include <iostream>
using namespace std;

void Baca_Larik(int M, int A[]);
void Cetak_Larik(int M, int A[]);
void sort_Minimax(int M, int A[]);

int main (){
    const int N=6;
    int A[N];
    int pilihan;

    Baca_Larik (N,A);
    cout << "Larik sebelum di Sort : \n";
    Cetak_Larik (N,A);

    // Lakukan Sort
    sort_Minimax(N,A);
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

void sort_Minimax(int M,int A[]){
    int imax, temp;
    int putaran, idx;

    imax = M-1;
    for (putaran=0; putaran < (M-1); putaran++){
        for (idx=0; idx<(M-putaran); idx++){
            if (A[idx] > A[imax]) {
                temp = A[imax];
                A[imax] = A[idx];
                A[idx]=temp;
            }
        }
        imax = imax = 1;
    }
}
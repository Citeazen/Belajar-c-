#include <iostream>
using namespace std;
const int b=8, N=11;
int indeks, x, idx, A[N];
int myhash(int x);
int main(){
    // Penempatan data
    for (idx=0; idx < b; idx++){
        cout << "Masukkan data x" << '(' << idx+1<< ") : ";
        cin >> x;
        indeks = myhash(x);
        A[indeks] = x;
    }
    // Pencarian data
    cout << "Masukkan data yang dicari : ";
    cin >> x;
    indeks = myhash(x);
    if (x == A[indeks])
    cout << x << " ditemukan di posisi " << indeks << '\n';
    else
    cout << x << " tidak ditemukan ! \n";

    system("PAUSE");
    return 0;
}
int myhash(int x){
    int ix;

    ix = x % N;
    return ix;
}
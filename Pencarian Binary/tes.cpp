#include <iostream>
#include <math.h>
using namespace std;
const int m=8;
int A[m], x;
int idx1, idx2, indeks;
bool ketemu;
int main(){
    ketemu = false;
    // cout << "Baca larik yang sudah sort:\n";
    // for (idx1=0; idx1<m; idx1++){
    //     cout << "A[" <<idx1+1 << "] : ";
    //     cin >> x;
        cout << "Baca larik yang sudah sort:\n";
        for (idx1=0; idx1<m; idx1++){
            cout << "A "<< idx1+1 <<" : ";
            cin >> A[idx1];
        }
    cout << "Masukkan data yang dicari :";
    cin >> x;
        idx1=0;
        idx2=m-1;
        while (!ketemu && (idx1 <= idx2)){
        // while (idx1 <= idx2){
            indeks = (idx1 + idx2)/2;
            // cout << indeks+1 << '\n';
            if (x == A[indeks]){
                ketemu = true;
                // break;
            }
            else if (x < A[indeks])
            {
                idx2 = indeks - 1;
            }
            else{
                idx1 = indeks + 1;
            }
        }
        if (ketemu)
        cout << x << " ketemu di posisi " << indeks+1<< '\n';
        else
        cout << x <<" tidak ditemukan \n";
        system ("PAUSE");
        return 0;
    }


// Modul 6.1
// Contoh implementasi struktur data dengan menggunakan tipe pointer

#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

int main(){
    int *p, *q, *r; // Deklarasi pointer p, q, r
    int n = 10; // Deklarasi variabel n
    p = (int*)malloc(sizeof(int)); // Mengalokasikan memori untuk p
    q = (int*)malloc(sizeof(int)); // Mengalokasikan memori untuk q

    p = &n; // Mengisi alamat register p dengan alamat register n
    *q = 20; // Mengisi nilai register q dengan 120
    r = p; // Mengisi alamat register r dengan alamat register p

    cout << "Informasi isi pointer :" << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;
    cout << "*r = " << *r << endl;
    cout << "\nAlamat register pointer :" << endl;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;

    n = *p; // Mengisi nilai register n dengan isi register p
    p = q; // Mengisi alamat register p dengan alamat register q

    cout << "\nInformasi isi pointer setelah diubah :" << endl;
    cout << "n = " << n << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;
    cout << "*r = " << *r << endl;

    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x = 15;    // Variabel biasa
    int *p = (int*)malloc(sizeof(int)); 

    if (p == nullptr) {
        cout << "Gagal mengalokasikan memori." << endl;
        return 1;
    }

    *p = x; // Menyimpan nilai x ke alamat memori yang dialokasikan oleh malloc()

    cout << "Nilai x: " << x << endl;
    cout << "Nilai yang disimpan di p: " << *p << endl;
    cout << "Alamat memori p: " << p << endl;

    free(p); // Membebaskan memori

    return 0;
}

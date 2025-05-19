#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;

    // Alokasi memori secara dinamis
    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == nullptr) {
        cout << "Gagal mengalokasikan memori." << endl;
        return 1;
    }

    // Mengisi nilai array
    for (int i = 0; i < n; ++i) {
        arr[i] = (i + 1) * 10;
    }

    // Menampilkan nilai array
    cout << "Isi array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bebaskan memori setelah selesai digunakan
    free(arr);

    return 0;
}

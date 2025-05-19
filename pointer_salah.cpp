// Modul 6.2
// contoh pemakaian pointer yang salah
#include <iostream>
using namespace std;

int main(){
    float *pu;
    float nu;
    int u = 123;

    // pu = &u;
    nu = *pu;

    cout << "u = " << u << endl;
    cout << "nu = " << nu << endl;
}
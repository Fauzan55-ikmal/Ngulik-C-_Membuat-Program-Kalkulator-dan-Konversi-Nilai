#include <iostream>
#include "../include/konversi.h"
using namespace std;

void jalankanKonversi()
{
    int nilai;
    cout << "\n--- Konversi Nilai Sedang Bekerja ---" << endl;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    if (nilai >= 80)
        cout << "Hasil: A" << endl;
    else
        cout << "Hasil: B/C" << endl;
}
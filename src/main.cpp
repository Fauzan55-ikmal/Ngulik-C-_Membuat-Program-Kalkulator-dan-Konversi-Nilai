#include <iostream>
#include "../include/kalkulator.h"
#include "../include/konversi.h"
#include "../include/sorting.h" // Tambahkan header ini

using namespace std;

int main()
{
    int pilihan;

    cout << "=== MENU UTAMA ===" << endl;
    cout << "1. Kalkulator" << endl;
    cout << "2. Konversi Nilai" << endl;
    cout << "3. Sorting Angka" << endl;
    cout << "Pilih (1-3): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        jalankanKalkulator();
        break;
    case 2:
        jalankanKonversi();
        break;
    case 3:
        jalankanSorting();
        break;
    default:
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
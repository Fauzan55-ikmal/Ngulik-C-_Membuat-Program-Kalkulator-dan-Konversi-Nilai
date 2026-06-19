#include <iostream>
#include "../include/kalkulator.h"
#include "../include/konversi.h"
using namespace std;

int main()
{
    int pil;
    char lagi;

    do
    {
        cout << "\n=== MENU UTAMA ===" << endl;
        cout << "1. Kalkulator" << endl;
        cout << "2. Konversi Nilai" << endl;
        cout << "Pilih (1/2): ";
        cin >> pil;

        if (pil == 1)
        {
            jalankanKalkulator();
        }
        else if (pil == 2)
        {
            jalankanKonversi();
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "\nBalik ke menu utama? (y/t): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}
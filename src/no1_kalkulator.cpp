#include <iostream>
#include "../include/kalkulator.h"
using namespace std;

void jalankanKalkulator()
{
    double a, b;
    char op;
    cout << "\n--- Kalkulator Sedang Bekerja ---" << endl;
    cout << "Masukkan angka 1: ";
    cin >> a;
    cout << "Masukkan operator: ";
    cin >> op;
    cout << "Masukkan angka 2: ";
    cin >> b;

    if (op == '+')
        cout << "Hasil: " << a + b << endl;
    else
        cout << "Operator belum didukung (tes saja)." << endl;
}
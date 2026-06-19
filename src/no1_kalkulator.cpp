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
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka 2: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Hasil: " << a + b << endl;
        break;
    case '-':
        cout << "Hasil: " << a - b << endl;
        break;
    case '*':
        cout << "Hasil: " << a * b << endl;
        break;
    case '/':
        if (b != 0)
            cout << "Hasil: " << a / b << endl;
        else
            cout << "Error: Tidak bisa dibagi nol!" << endl;
        break;
    default:
        cout << "Operator tidak valid!" << endl;
    }
}
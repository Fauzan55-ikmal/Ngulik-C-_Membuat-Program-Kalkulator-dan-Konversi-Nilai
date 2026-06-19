#include <iostream>
#include <vector>
#include "../include/sorting.h"
using namespace std;

void jalankanSorting()
{
    int n;
    cout << "\n--- Algoritma Sorting (Bubble Sort) ---" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Proses Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Hasil urutan: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}
#include <iostream>
using namespace std;

// Variable Global
int angka;
int pilihan;

// Fungsi untuk mengecek bilangan prima menggunakan while loop
bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

// Fungsi untuk mengecek apakah n ada dalam deret Fibonacci menggunakan while loop
bool isFibonacci(int n) {
    
}
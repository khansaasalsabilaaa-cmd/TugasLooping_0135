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
    if (n < 0) return false;
    int a = 0, b = 1;
    if (n == a || n == b) return true;

    int c = a + b;
    while (c <= n) {
      if (c == n) return true;
      a = b;
      b = c;
      c = a + b;  
    }
    return false;
}

// Prosedur untuk menerima inputan angka dari pengguna
void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

// Prosedur untuk menampilkan hasil pengecekan prima
void tampilkanPrima() {
    if (isPrima(angka)) {
        cout << "Hasil: " << angka << "adalah bilangan PRIMA." << endl;
    } else {
        cout << "Hasil: " << angka << "BUKAN bilangan prima." << endl;
    }
}

// Prosedur untuk menampilkan hasil pengecekan Fibonacci
void tampilkanFibonacci() {
    if (isFibonacci(angka)) {
        cout << "Hasil: " << angka << "termasuk dalam deret FIBONACCI." << endl;
    } else {
        cout << "Hasil: " << angka << "TIDAK termasuk dalam deret fibonacci." << endl;
    }
}

// Function menu untuk menampilkan pilihan kepada pengguna
void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihan;
}

int main() {
    while (true) {
        tampilkanMenu();

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanPrima();
                break;
            case 2:
                inputAngka();
                tampilkanFibonacci();
                break;
            case 0:
                cout << "Keluar dari program. Terima kasih!" << endl;
                return 0; 
            default:
                cout << "Pilihan tidak valid! Silahkan masukkan 0, 1, atau 2." << endl;
                break;
        }
    }

    return 0;
}

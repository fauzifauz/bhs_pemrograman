#include <iostream>

void menu() {
    std::cout << "Pilih operasi aritmatika:\n";
    std::cout << "1. Penjumlahan\n";
    std::cout << "2. Pengurangan\n";
    std::cout << "3. Perkalian\n";
    std::cout << "4. Pembagian\n";
}

void tambah() {
    int a, b;
    std::cout << "Masukkan Angka Pertama : ";
    std::cin >> a;
    std::cout << "Masukkan Angka Kedua : ";
    std::cin >> b;
    std::cout << "Penjumlahan: " << a + b << std::endl;
}

void kurang() {
    int a, b;
    std::cout << "Masukkan Angka Pertama : ";
    std::cin >> a;
    std::cout << "Masukkan Angka Kedua : ";
    std::cin >> b;
    std::cout << "Pengurangan : " << a - b << std::endl;
}

void kali() {
    int a, b;
    std::cout << "Masukkan Angka Pertama : ";
    std::cin >> a;
    std::cout << "Masukkan Angka Kedua : ";
    std::cin >> b;
    std::cout << "Perkalian : " << a * b << std::endl;
}

void bagi() {
    int a, b;
    std::cout << "Masukkan Angka Pertama : ";
    std::cin >> a;
    std::cout << "Masukkan Angka Kedua : ";
    std::cin >> b;
    if (b != 0) {
        std::cout << "Pembagian : " << static_cast<double>(a) / b << std::endl;
    } else {
        std::cout << "Pembagian : Tidak bisa dibagi dengan nol" << std::endl;
    }
}

int main() {
    menu();

    tambah();
    kurang();
    kali();
    bagi();

    return 0;
}
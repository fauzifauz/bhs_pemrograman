#include <iostream>
#include <string>
using namespace std;

// Deklarasi fungsi
void visiMisi();
void menu();
void hargaProduk();
void ongkosKirim();
void layanan();

int main() {
    int pilihan;
    do {
        cout << "====================================\n";
        cout << "Selamat datang di Bisnis Daur Ulang Sampah Go Green\n";
        cout << "====================================\n";
        
        visiMisi();
        menu();

        cout << "\n9. Keluar Aplikasi\n";
        cout << "Pilih (1-9): ";
        cin >> pilihan;
    } while (pilihan != 9);
    
    cout << "Terima kasih telah menggunakan aplikasi kami. Sampai jumpa lagi!\n";
    
    return 0;
}

void visiMisi() {
    cout << "\nVisi:\n";
    cout << "Menjadi perusahaan terdepan dalam pengelolaan sampah\n";
    cout << "dan daur ulang untuk menciptakan lingkungan yang lebih bersih\n";
    cout << "dan hijau bagi generasi mendatang.\n";

    cout << "\nMisi:\n";
    cout << "1. Mengurangi jumlah sampah yang dibuang ke lingkungan.\n";
    cout << "2. Meningkatkan kesadaran masyarakat tentang pentingnya daur ulang.\n";
    cout << "3. Menghasilkan produk berkualitas dari hasil daur ulang sampah.\n";
    cout << "4. Mendukung komunitas lokal melalui program daur ulang sampah.\n";
}

void menu() {
    int pilihan1, pilihan2, pilihan3, pilihan4;
    
    cout << "\nMenu:\n";
    cout << "1. Sampah yang ingin dikumpulkan:\n";
    cout << "   1. Sampah rumah tangga\n";
    cout << "   2. Sampah pabrik\n";
    cout << "   3. Sampah perhutanan\n";
    cout << "Pilih (1-3): ";
    cin >> pilihan1;

    cout << "\n2. Jenis sampah yang ingin dikumpulkan:\n";
    cout << "   1. Sampah organik\n";
    cout << "   2. Sampah non organik\n";
    cout << "Pilih (1-2): ";
    cin >> pilihan2;

    cout << "\n3. Berat sampah yang ingin dikumpulkan:\n";
    cout << "   1. 500 gram\n";
    cout << "   2. 1 Kg\n";
    cout << "   3. 2 Kg\n";
    cout << "   4. 5 Kg\n";
    cout << "Pilih (1-4): ";
    cin >> pilihan3;

    cout << "\n4. Produk hasil jadi daur ulang:\n";
    cout << "   1. Pakaian\n";
    cout << "   2. Botol minuman\n";
    cout << "   3. Piring makanan\n";
    cout << "Pilih (1-3): ";
    cin >> pilihan4;

    hargaProduk();
    ongkosKirim();
    layanan();
}

void hargaProduk() {
    cout << "\nHarga Produk:\n";
    cout << "   1. Botol minuman : 5.000\n";
    cout << "   2. Piring makanan : 8.000\n";
    cout << "   3. Pakaian : 20.000\n";
}

void ongkosKirim() {
    int kota;
    cout << "\n6. Kota yang menerima daur ulang sampah:\n";
    cout << "   1. Jakarta\n";
    cout << "   2. Bandung\n";
    cout << "   3. Bogor\n";
    cout << "Pilih kota (1-3): ";
    cin >> kota;
    
    cout << "\n7. Ongkos Kirim dan Transportasi Pengiriman:\n";
    switch (kota) {
        case 1:
            cout << "   JNT - Jakarta - 20.000\n";
            break;
        case 2:
            cout << "   JNT - Bandung - 25.000\n";
            break;
        case 3:
            cout << "   JNT - Bogor - 15.000\n";
            break;
        default:
            cout << "   Kota tidak valid.\n";
            break;
    }
}

void layanan() {
    cout << "\n8. Layanan daur ulang sampah go green:\n";
    cout << "   081279007550\n";
}
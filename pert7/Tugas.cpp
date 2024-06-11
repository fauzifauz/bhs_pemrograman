#include <iostream>
using namespace std;

class PecelLele {
public:
    int jumlah;
    double total;

    void printPecelLele() {
        cout << "Pecel Lele" << endl;
        cout << "Jumlah: ";
        cin >> jumlah;
    }

    void calculateTotal() {
        total = jumlah * 10000; 
        printTotal();
    }

    void printTotal() {
        cout << "Total Pecel Lele: " << total << endl;
    }
};

class NasiGoreng {
public:
    int jumlah;
    double total;

    void printNasiGoreng() {
        cout << "Nasi Goreng" << endl;
        cout << "Jumlah: ";
        cin >> jumlah;
    }

    void calculateTotal() {
        total = jumlah * 15000; 
        printTotal();
    }

    void printTotal() {
        cout << "Total Nasi Goreng: " << total << endl;
    }
};

class MinumanItem {
public:
    int jumlah;
    double total;
    double harga;

    void setPrice(double h) {
        harga = h;
    }

    void calculateTotal() {
        total = jumlah * harga; 
        printTotal();
    }

    void printTotal() {
        cout << "Total Minuman: " << total << endl;
    }
};

class Makanan {
public:
    int pilihan;

    void printMakanan() {
        cout << "Makanan" << endl;
        cout << "1. Pecel Lele" << endl;
        cout << "2. Nasi Goreng" << endl;
        cout << "Menu yang dipilih: ";
        cin >> pilihan;
    }

    void execute() {
        switch (pilihan) {
            case 1:
                pecelLele.printPecelLele();
                pecelLele.calculateTotal();
                break;
            case 2:
                nasiGoreng.printNasiGoreng();
                nasiGoreng.calculateTotal();
                break;
            default:
                cout << "Pilihan tidak berhasil" << endl;
                printMakanan();
                execute();
                break;
        }
    }

    PecelLele pecelLele;
    NasiGoreng nasiGoreng;
};

class Minuman {
public:
    int pilihan;

    void printMinuman() {
        cout << "Minuman" << endl;
        cout << "1. Es Jeruk " << endl;
        cout << "2. Teh Manis" << endl;
        cout << "3. Es Buah  " << endl;
        cout << "Jenis minuman yang dipilih: ";
        cin >> pilihan;
        cout << "Jumlah: ";
        cin >> jumlah;
    }

    void execute() {
        switch (pilihan) {
            case 1:
                minumanItem.setPrice(5000);
                break;
            case 2:
                minumanItem.setPrice(3000);
                break;
            case 3:
                minumanItem.setPrice(8000);
                break;
            default:
                cout << "Pilihan tidak berhasil" << endl;
                printMinuman();
                execute();
                return;
        }
        minumanItem.jumlah = jumlah;
        minumanItem.calculateTotal();
    }

    MinumanItem minumanItem;
    int jumlah;
};

class Menu {
public:
    int pilihan;
    Makanan makanan;
    Minuman minuman;

    void printMenu() {
        cout << "MENU" << endl;
        cout << "1. Makanan" << endl;
        cout << "2. Minuman" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilihan yang bisa dipilih: ";
        cin >> pilihan;
    }

    void execute() {
        switch (pilihan) {
            case 1:
                makanan.printMakanan();
                makanan.execute();
                break;
            case 2:
                minuman.printMinuman();
                minuman.execute();
                break;
            case 3:
                cout << "Keluar dari menu..." << endl;
                exit(0);
            default:
                cout << "Pilihan tidak berhasil" << endl;
                printMenu();
                execute();
                break;
        }
    }
};

int main() {
    Menu menu;
    while (true) {
        menu.printMenu();
        menu.execute();
    }
    return 0;
}
#include <iostream>
using namespace std;

// Variabel Global
int element[10];
int nPanjang;
int x;

void input() {
    while (true) {
        cout << "Masukan banyaknya element pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10 && nPanjang > 0) {
            break;
        } else {
            cout << "\n[!] Jumlah element harus antara 1-10. Silahkan coba lagi.\n\n";      
        }
    }

    cout << "\n==================\n";
    cout << " Masukan element array \n";
    cout << "==================\n";

    for (int i = 0; i < nPanjang; i++) {
        cout << "Element ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

void bubbleSort() {
    for (int i = 0; i < nPanjang - 1; i++) {
        for (int j = 0; j < nPanjang - i - 1; j++) {
            if (element[j] > element[j + 1]) {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
    }
}

void display() {
    cout << "\n==================\n";
    cout << " Elemen array setelah diurutkan (Asc) \n";
    cout << "==================\n";

    for (int j = 0; j < nPanjang; j++) {
        cout << element[j];
        if (j < nPanjang - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

void binarySearch() {
    char ulang;
    do {
        cout << "\n===================\n";
        cout << " PENCARIAN BINARY SEARCH \n";
        cout << "===================\n";

        cout << "Masukan elemen yang ingin dicari: ";
        cin >> x;
        
        int low = 0;
        int high = nPanjang - 1;
        bool ditemukan = false;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (element[mid] == x) {
                cout << "\n[v] Element " << x << " ditemukan pada indeks ke-" << mid << ".\n";
                ditemukan = true;
                break;
            }

            if (x < element[mid]) {
                high = mid - 1; // Cari di bagian kiri
            } else {
                low = mid + 1;  // Cari di bagian kanan
            }
        }

        if (!ditemukan) {
            cout << "\n[x] Element " << x << " tidak ditemukan dalam array.\n";
        }

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}

int main() {
    input();        // 1. Input data
    bubbleSort();   // 2. Urutkan (Syarat mutlak Binary Search)
    display();      // 3. Tampilkan hasil urutan
    binarySearch(); // 4. Cari data
    
    cout << "\nProgram Selesai. Terima kasih!\n";
    return 0;
}
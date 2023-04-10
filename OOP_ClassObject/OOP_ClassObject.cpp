#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    void tampil() {
        cout << "NIM = " << nim;
        cout << "\nNama = " << nama;
    }
};

class MataKuliah {
private:
    int sks;
    string kode;
    string namaMk;
public:
    void inputMk() {
        cout << "\nJumlah SKS = ";
        cin >> sks;
        cout << "\nMasukkan Kode Mk = ";
        cin >> kode;
        cout << "\nMasukkan Nama Mk = ";
        cin >> namaMk;
        
    }
    void tampilMk() {
        cout << "\nJumlah SKS = " << sks;
        cout << "\nKode MK = " << kode;
        cout << "\n Nama Mk = " << namaMk;
    }
};

int main()
{
    Mahasiswa mhs1;
    MataKuliah mk;

    cout << "Masukkan NIM = ";
    cin >> mhs1.nim;
    cout << "Masukkan Nama = ";
    cin >> mhs1.nama;

    mk.inputMk();
    mhs1.tampil();
    mk.tampilMk();
    
} 
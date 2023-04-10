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
        cout << "\nMasukkan Kode Matakuliah = ";
        cin >> kode;
        cout << "Masukkan Matakuliah = ";
        cin >> namaMk;
        cout << "Jumlah SKS = ";
        cin >> sks;
    }
    void tampilMk() {
        cout << "\nKode Matakuliah : " << kode;
        cout << "\nNama Matakuliah : " << namaMk;
        cout << "\nSKS : " << sks;
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

  

    

} 
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

class MataKuliah() {
private:
    int sks;
    string kode;
    string namaMk;
public:
    void input() {
        cout << "\nMasukkan Kode Matakuliah = ";
        cin >> kode;
        cout << "Masukkan Matakuliah = ";
        cin >> namaMk;
        cout << "Jumlah SKS = ";
        cin >> sks;
    }
}
int main()
{
    std::cout << "Hello World!\n";
} 
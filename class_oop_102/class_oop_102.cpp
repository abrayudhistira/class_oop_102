#include <iostream>
using namespace std;

class Mahasiswa {			// class 
public:						// akses modifier untuk object public
	string nim;
	string nama;
public: void cetak() {		// akses modifier, metode untuk public
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
	}
};

class Matakuliah {				//class
private:						// akses modifier untuk object private
	string kode;
	string namaM;
	int sks;
public:							//akses modifier untuk object public
	void input() {								// metode dari akses modifier public
		cout << "\nMasukkan kode Mata Kuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Mata Kuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {								// metode dari akses modifer public
		cout << "\nKode Mata Kuliah : " << kode;
		cout << "\nNama Mata Kuliah : " << namaM;
		cout << "\nSKS : " << sks;

	}
};
int main()									// main program
{
	Mahasiswa mhs1;
	Matakuliah mk;

	cout << "Masukkan NIM : ";				// memanggil metode mhs1
	cin >> mhs1.nim;
	cout << "Masukkan Nama : ";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();								// memanggil metode mk
	mk.tampil();
}
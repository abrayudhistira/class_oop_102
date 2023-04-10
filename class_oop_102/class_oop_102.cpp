#include <iostream>
using namespace std;

class Mahasiswa {			// class 
public:						// akses modifier
	string nim;
	string nama;
public: void cetak() {		//metode
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
	}
};

class Matakuliah {				//class
private:						// akses modifier
	string kode;
	string namaM;
	int sks;
public:							//akses modifier
	void input() {								// metode
		cout << "Masukkan kode Mata Kuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Mata Kuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {								// metode
		cout << "Kode Mata Kuliah : " << kode;
		cout << "Nama Mata Kuliah : " << namaM;
		cout << "SKS : " << sks;

	}
};
int main()									// main program
{
	Mahasiswa mhs1;
	Matakuliah mk;
}
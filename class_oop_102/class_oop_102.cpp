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
private:
	string kode;
	string namaM;
	int sks;
public:							//akses modifier
	void input() {
		cout << "Masukkan kode Mata Kuliah : ";
	}
	void tampil() {

	}
};
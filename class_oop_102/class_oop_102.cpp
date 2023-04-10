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

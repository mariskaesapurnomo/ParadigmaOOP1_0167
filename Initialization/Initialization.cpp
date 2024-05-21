// Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pid, string pnama, float pnilai) : id(pid), nama(pnama), nilai(pnilai) {	//membuat definisi
	}

	~mahasiswa() {
		cout << "id = " << id << endl;
		cout << "nama = " << nama << endl;
		cout << "nilai = " << nilai << endl;
	}
};

int main()
{
	mahasiswa mgs(12, "Asroni", 90.5);

	return 0;
}


#include <iostream>;
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r, double n) {
	if (r >= 70 or n > 80) {
		return "Diterima";
	}
	else {
		return "Belum Diterima";
	}
}

int Nil_MTK[20], NilBing[20];
float NilRerata[20];
string Nama[20];

void input() {
	for (int i = 0; i < 20; i++) {
		cout << "Masukkan Nama Kandidat : ";
		cin >> Nama[i];
		cout << "Masukkan Nilai Matematika : ";
		cin >> Nil_MTK[i];
		cout << "Masukkan Nilai Bahasa Inggris : ";
		cin >> NilBing[i];

		NilRerata[i] = rerata(Nil_MTK[i], NilBing[i]);
	}
}

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


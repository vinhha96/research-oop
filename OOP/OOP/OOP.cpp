// OOP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class PhanSo {
private:
	int TuSo, MauSo;
public:
	PhanSo RutGon();
	void Nhap();
	void Xuat();
};
void PhanSo::Nhap() {
	cout << "Nhap tu so: ";
	cin >> this->TuSo;

	cout << "Nhap mau so: ";
	cin >> this->MauSo;

}

void PhanSo::Xuat() {
	cout << this->TuSo << "/" << this->MauSo;
}
PhanSo PhanSo::RutGon() {
	int a, b;
	a = abs(this->TuSo);
	b = abs(this->MauSo);
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else
			b -= a;
	}
	this->TuSo /= a;
	this->MauSo /= b;
	return *this;

}

int main(int argc, const char * argv[]) {
	PhanSo ps;
	ps.Nhap();
	ps.RutGon();
	ps.Xuat();
	system("exit");
	return 0;
}


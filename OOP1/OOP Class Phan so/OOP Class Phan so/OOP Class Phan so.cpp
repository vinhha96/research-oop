// OOP Class Phan so.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include<string>

using namespace std;

class HocSinh
{
private:
	string hoten;
	float dtoan;
	float dvan;

public:
	void nhap();
	void xuat();
	float dtb();
	void xeploai();
	string getht() {
		return hoten;
	}
	void setht(string ht) {
		hoten = ht;
	}
	float getvan() {
		return dvan;
	}
	void setvan(float van) {
		dvan = van;
	}
	float gettoan() {
		return dtoan;
	}
	void settoan(float toan) {
		dtoan = toan;
	}

};

void HocSinh::nhap() {

	cin.ignore();
	getline(cin, hoten);
	cin >> dvan;
	cin >> dtoan;

}
void HocSinh::xuat()
{
	cout << hoten;

}

float HocSinh::dtb() {
	float a = (dtoan + dvan) / 2;
	return a;
}

void HocSinh::xeploai() {
	if (dtb() >= 8)
		cout << "\nGioi";
	else if (dtb() >= 7 && dtb() < 8)
		cout << "\nKha";
	else if (dtb() >= 5 && dtb() < 7)
		cout << "\nTrung binh";
	else
		cout << "\nYeu";
}
int main() {
	int n;
	cin >> n;
	HocSinh a[100];
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
	float k = a[0].dtb();
	for (int i = 0; i < n; i++) {
		if (a[i].dtb() > k)
			k = a[i].dtb();
	}
	for (int i = 0; i < n; i++) {
		if (a[i].dtb() == k) {
			a[i].xuat();
			a[i].xeploai();
		}
	}


	//system("pause");
	return 0;
}



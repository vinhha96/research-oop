#include "pch.h"
#include <iostream>
using namespace std;
class Arrint2 {
private:
	int len;
	int mang[100];
public:
	Arrint2() {
		len = 1;
		mang[0] = 0;
	}
	Arrint2(int a) {
		this->len = a;
		int dem = 0;
		for (int i = a - 1; i >= 0; i++){
			dem++;
			mang[i] = dem;
		}
	}
	Arrint2(int a, int b[]) {
		for (int i = 0; i < a; i++) {
			mang[i - 1] = b[i];
		}
	}
	int getlen() {
		return this->len;
	}
	int setlen(int a) {
		this->len = a;
		return 0;
	}
	int Nhap(int a, int b[]) {
		this->len = a;
		for (int i = 0; i < a; i++) {
			mang[i] = b[i];
		}
		return 0;
	}
	int Xuat() {
		cout << this->len << ": ";
		for (int i = len - 1; i >= 0; i--) {
			cout << mang[i];
		}
		cout << endl;
		return 0;
	}
};
int main()
{
	Arrint2 arr;
	int n, a[100];
	char kitu1, kitu2;
	cin >> n;
	cin >> kitu1;
	if (kitu1 == '#') {
		Arrint2 arr(n);
		arr.Xuat();
	}
	else {
		kitu2 = ((int)kitu1) - 48;
		a[0] = kitu2;
		for (int i = 1; i < n; i++) {
			cin >> a[i];
		}
		arr.Nhap(n, a);
		arr.Xuat();
	}
	return 0;
}



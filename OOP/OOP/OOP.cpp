
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
class HocSinh {
private:
	string Hoten, Diachi;
	float Diemtoan, Diemvan;
	
public:
	
	void Nhap() {
		fflush(stdin);
		cout << "nhap ten cua hoc sinh: " << endl;
		getline(cin, Hoten);
		fflush(stdin);
		cout << "nhap dia chi: " << endl;
		getline(cin, Diachi);
		cout << "nhap diem toan: " << endl;
		cin >> Diemtoan;
		cout << "nhap diem van: " << endl;
		cin >> Diemvan;

	}
	void Xuat();
};
void HocSinh::Xuat() {
	cout << "Ho ten: " << Hoten;
	cout << "Dia chi: " << Diachi;
	cout << "Diem Toan: " << Diemtoan;
	cout << "Diem Van: " << Diemvan;
}
int main(int argc, const char * argv[]) {

	HocSinh hs;
	hs.Nhap();
	hs.Xuat();
	system("exit");
	return 0;
}
}


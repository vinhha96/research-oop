#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Employee {
private:
	int id;
	string firstname;
	string lastname;
	double salary;
public:
	Employee(int i, string first, string last, double sala) {
		id = i;
		firstname = first;
		lastname = last;
		salary = sala;
	}
	int getID() {
		return id;
	};
	string getfirstname() {
		return firstname;
	};
	string getlastname() {
		return lastname;
	};
	string getName() {
		return getfirstname()+" "+getlastname();
	}
	double getsalary() {
		return salary;
	};
	void getsalary(double salary) {
		double sala;
		sala = salary;
	};
	double setAnnualSalary() {
		double t;
		t = 12 * salary;
		return t;
	};
	double raiseSalary(double percent) {
		double t, s;
		t = percent / 100 * salary;
		s = t + salary;
		return s;

	};
	string toString();
	Employee() {
		id = 0;
		firstname = "";
		lastname = "";
		salary = 0;

	};
	void Nhap() {
		cin >> id;
		cin.ignore();
		getline(cin, firstname);
		getline(cin, lastname);
		cin >> salary;
	};
	void Xuat() {
		cout << "Employee[id=" << id << ",name=" << getName() << ",salary=$" << fixed << setprecision(2) << salary << "]" << endl;
	};
};


int main()
{
	Employee e;
	e.Nhap();
	e.Xuat();
	double a, b, c;
	cin >> a;
	b = e.raiseSalary(a);
	cout << "$" << b << endl;
	c = b * 12;
	cout << "$" << c;
	return 0;
}


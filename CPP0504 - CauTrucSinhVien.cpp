#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
	string hoten;
	string ngaysinh;
	string malop;
	double gpa;
};

void nhap(SinhVien &a)
{
	getline(cin, a.hoten);
	getline(cin, a.malop);
	string ngay;
    getline(cin, ngay);
    stringstream ss(ngay);
    int d, m, y;
    char slash;
    ss >> d >> slash >> m >> slash >> y;
    stringstream ss2;
    ss2 << setw(2) << setfill('0') << d << "/" 
        << setw(2) << setfill('0') << m << "/" 
        << setw(4) << y;
    a.ngaysinh = ss2.str();
	cin >> a.gpa;
	cin.ignore();
}

void in(SinhVien a)
{
	cout << "B20DCCN001" << " " << a.hoten << " " << a.malop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
	string hoten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string mst;
	string ngayky;
};

void nhap(NhanVien &a)
{
	getline(cin, a.hoten);
	getline(cin, a.gioitinh);
	getline(cin, a.ngaysinh);
	getline(cin, a.diachi);
	getline(cin, a.mst);
	getline(cin, a.ngayky);
}

void in(NhanVien a)
{
	cout << "00001" << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.ngayky;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

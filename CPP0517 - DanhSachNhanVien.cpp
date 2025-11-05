#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ma;
    string ten;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKy;
};

void nhap(NhanVien &nv) 
{
    static bool first = true;
    if (first) 
	{
        cin.ignore();
        first = false;
    }
	getline(cin, nv.ten);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKy);
}

void inds(NhanVien ds[], int N) 
{
    for (int i = 0; i < N; i++) 
	{
        ds[i].ma = string(5 - to_string(i + 1).length(), '0') + to_string(i + 1);
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].gioiTinh << " " << ds[i].ngaySinh << " " << ds[i].diaChi << " " << ds[i].maSoThue << " " << ds[i].ngayKy << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}




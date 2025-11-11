#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float gpa;
};

void nhapThongTinSV(SinhVien &sv) {
    sv.maSV = "N20DCCN001";
    getline(cin, sv.hoTen);
    getline(cin, sv.lop);
    getline(cin, sv.ngaySinh);
    cin >> sv.gpa;
}

string chuanHoaNgaySinh(string ngay) 
{
    stringstream ss(ngay);
    string day, month, year;
    
    getline(ss, day, '/');
    getline(ss, month, '/'); 
    getline(ss, year);
    
    if (day.length() == 1) day = "0" + day;
    if (month.length() == 1) month = "0" + month;
    
    return day + "/" + month + "/" + year;
}

void inThongTinSV(SinhVien sv) 
{
    string ngaySinhChuan = chuanHoaNgaySinh(sv.ngaySinh);
    cout << sv.maSV << "\t" << sv.hoTen << "\t" << sv.lop << "\t" << ngaySinhChuan << "\t" << fixed << setprecision(2) << sv.gpa;
}
int main(){
    SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string hoten, ngaysinh, msv, malop;
    double gpa;
};

string masv(int i) {
    string s = to_string(i);
    while (s.length() < 3) s = '0' + s;
    return "B20DCCN" + s;
}

void nhap(SinhVien ds[], int N) {
    cin.ignore();
    for (int i = 0; i < N; i++) {
        ds[i].msv = masv(i + 1);
        getline(cin, ds[i].hoten);
        getline(cin, ds[i].malop);
        getline(cin, ds[i].ngaysinh);
        cin >> ds[i].gpa;
        if (ds[i].ngaysinh[1] == '/') ds[i].ngaysinh = "0" + ds[i].ngaysinh;
        if (ds[i].ngaysinh[4] == '/') ds[i].ngaysinh.insert(3, "0");
        cin.ignore();
    }
}

void in(SinhVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << ds[i].msv << " " << ds[i].hoten << " " << ds[i].malop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}


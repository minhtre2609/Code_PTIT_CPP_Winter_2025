#include <bits/stdc++.h>

using namespace std;

struct ThiSinh {
	string hoten;
	string ngaysinh;
	double diem1, diem2, diem3;
};

void nhap(ThiSinh &A)
{
	getline(cin, A.hoten);
	getline(cin, A.ngaysinh);
	cin >> A.diem1 >> A.diem2 >> A.diem3;
}

void in(ThiSinh A)
{
	cout << A.hoten << " " << A.ngaysinh << " " << fixed << setprecision(1) << (A.diem1 + A.diem2 + A.diem3);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

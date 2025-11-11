#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
	long long tu;
	long long mau;
};

void rutgon(PhanSo &A)
{
	long long g = __gcd(A.tu, A.mau);
    A.tu /= g;
    A.mau /= g;
}

PhanSo tong (PhanSo A, PhanSo B)
{
	long long g = __gcd(A.mau, B.mau);
	PhanSo C;
	long long msc = (A.mau * B.mau) / g;
	C.mau = msc;
	C.tu = A.tu * msc / A.mau + B.tu * msc / B.mau;
	rutgon(C);
	return C; 
}

PhanSo tich (PhanSo A, PhanSo B)
{
	PhanSo D;
	D.tu = A.tu * B.tu;
	D.mau = A.mau * B.mau;
	rutgon(D);
	return D;
}

void process (PhanSo A, PhanSo B)
{
	PhanSo C;
	C = tich(tong(A, B), tong(A, B));
	PhanSo D;
	D = tich (C, (tich(A, B)));
	cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

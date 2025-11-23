#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

void nhap(PhanSo &p) {
    cin >> p.tu >> p.mau;
}

PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo t;
    t.tu = p.tu * q.mau + q.tu * p.mau;
    t.mau = p.mau * q.mau;
    
    long long ucln = __gcd(t.tu, t.mau);
    t.tu /= ucln;
    t.mau /= ucln;
    
    return t;
}

void in(PhanSo t) {
    cout << t.tu << "/" << t.mau;
}

int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}

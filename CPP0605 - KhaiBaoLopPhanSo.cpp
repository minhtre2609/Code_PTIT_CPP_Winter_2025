#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    long long tu, mau;

public:
    PhanSo(long long tu = 0, long long mau = 1) {
        this->tu = tu;
        this->mau = mau;
    }

    void rutgon() {
        long long g = __gcd(tu, mau);
        tu /= g;
        mau /= g;
    }

    friend istream& operator >> (istream &in, PhanSo &p) {
        in >> p.tu >> p.mau;
        return in;
    }

    friend ostream& operator << (ostream &out, const PhanSo &p) {
        out << p.tu << "/" << p.mau;
        return out;
    }
};

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}


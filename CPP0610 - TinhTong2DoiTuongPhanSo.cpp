#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
	private:
		long long tu;
		long long mau;
	public:
		PhanSo()
		{
			tu = 0;
			mau = 1;
		}
		PhanSo(long long tu, long long mau)
		{
			this->tu = tu;
			this->mau = mau;
		}
		friend istream& operator>>(istream &is,  PhanSo &ps)
		{
			return is >> ps.tu >> ps.mau;
		}
		friend ostream& operator<<(ostream &os, const PhanSo &ps)
		{
			return os << ps.tu << "/" << ps.mau;
		}
		PhanSo operator+(const PhanSo &ps)
		{
			PhanSo r;
			long long g = __gcd(mau,ps.mau);
			r.mau = mau*ps.mau/g;
			r.tu=tu*(r.mau/mau) + ps.tu*(r.mau/ps.mau);
			long long g2 = __gcd(r.tu,r.mau);
			r.tu/=g2;
			r.mau/=g2;
			return r;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

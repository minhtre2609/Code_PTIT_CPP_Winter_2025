#include <bits/stdc++.h>
using namespace std;
class sinhvien
{
    private:
        string masv;
        string hoten;
        string lop;
        string mail;
    public:
        void nhap()
        {
            getline(cin,masv);
            getline(cin,hoten);
            getline(cin,lop);
            getline(cin,mail);
        }
        void xuat()
        {
            cout << masv << " " << hoten << " " << lop << " " << mail << endl;
        }
        string getlop() const
        {
            return lop;
        }
        string getmasv() const
        {
            return masv;
        }
};

bool cmp(const sinhvien &a,const sinhvien &b)
{
    if(a.getlop() != b.getlop()) return a.getlop() < b.getlop();
    else return a.getmasv() < b.getmasv();
}

int main()
{
    long long n;
    cin >> n;
    cin.ignore();
    vector <sinhvien> a(n);
    for(long long i = 0;i<n;i++)
    {
        a[i].nhap();
    }
    sort(a.begin(),a.end(),cmp);
    for(long long i = 0;i<n;i++)
    {
        a[i].xuat();
    }
}

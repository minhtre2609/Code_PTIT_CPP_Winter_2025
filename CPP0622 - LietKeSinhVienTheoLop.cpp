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
};

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
    long long q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
        string lopp;
        getline(cin,lopp);
        cout << "DANH SACH SINH VIEN LOP " << lopp << ":\n";
        for(int i = 0;i<n;i++)
        {
            if(a[i].getlop() == lopp)
            {
                a[i].xuat();
            }
        }
    }
}

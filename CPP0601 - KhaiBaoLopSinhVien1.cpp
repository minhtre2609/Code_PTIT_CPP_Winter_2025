#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string hoten;
        string malop;
        string birth;
        double gpa;
    
        void chuanhoa()
        {
            if(birth[1] == '/') birth = "0" + birth;
            if(birth[4] == '/') birth.insert(3,"0");
        }
    public:
        void nhap()
        {
            getline(cin,hoten);
            getline(cin,malop);
            getline(cin,birth);
            cin >> gpa;
        }
        
        void xuat()
        {
            chuanhoa();
            cout << "B20DCCN001 " << hoten << " " << malop << " " << birth << " " << fixed << setprecision(2) << gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

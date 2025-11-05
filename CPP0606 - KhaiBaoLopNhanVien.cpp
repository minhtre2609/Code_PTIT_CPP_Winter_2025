#include <bits/stdc++.h>
using namespace std;

class NhanVien {
private:
    string ma = "00001";
    string hoten, gt, ns, dc, mst, nkhd;

public:
    friend istream& operator >> (istream &in, NhanVien &a) 
	{
        getline(in, a.hoten);
        getline(in, a.gt);
        getline(in, a.ns);
        getline(in, a.dc);
        getline(in, a.mst);
        getline(in, a.nkhd);
        return in;
    }

    friend ostream& operator << (ostream &out, const NhanVien &a) 
	{
        out << a.ma << " " << a.hoten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd;
        return out;
    }
};

int main (){
	NhanVien a;
	cin >> a;
	cout << a;
	return 0;
}

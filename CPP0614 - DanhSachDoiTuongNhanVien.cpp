#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class NhanVien {
	private:
		string manv, hoten, gioitinh, ngaysinh, diachi, mst, ngayky;
	public:
		friend istream& operator >> (istream &is, NhanVien &a)
		{
			cin.ignore();
			getline(cin, a.hoten);
			cin >> a.gioitinh >> a.ngaysinh;
			cin.ignore();
			getline(cin, a.diachi);
			cin >> a.mst >> a.ngayky;
			
			string s = to_string(stt++);
			while(s.length() < 5)
			{
				s = "0" + s;
			}
			a.manv = s;
			return is;
		}
		friend ostream& operator << (ostream &os, NhanVien a)
		{
			cout << a.manv << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.ngayky << endl;
			return os;
		}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

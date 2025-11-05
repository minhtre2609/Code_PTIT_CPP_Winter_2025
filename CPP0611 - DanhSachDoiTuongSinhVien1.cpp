#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

class SinhVien
{
	private:
		string ten;
		string lop;
		string sinhnhat;
		string masv;
		long long vitri;
		float gpa;
		
		string chuanhoa( string sn)
		{
			string k = sn;
			if(k[1] == '/') k.insert(0,"0");
			if(k[4] == '/') k.insert(3,"0");
			return k;
		}
		
	public:
		SinhVien()
		{
			ten = "";
			lop = "";
			sinhnhat = "";
			gpa = 0.0;	
		}	
		SinhVien(string ten, string lop, string sinhnhat, float gpa)
		{
			this->ten = ten;
			this->lop = lop;
			this->sinhnhat = sinhnhat;
			this->gpa = gpa;
			this->masv = masv;
		}
		friend istream &operator>>(istream &is, SinhVien &sv)
		{
			cnt++;
			sv.masv = "B20DCCN";
			string num = to_string(cnt);
			while(num.size()<3) num = "0" + num;
			sv.masv += num;
			is.ignore();
			getline(is,sv.ten);
			getline(is,sv.lop);
			getline(is,sv.sinhnhat);
			is >> sv.gpa;
			sv.sinhnhat = sv.chuanhoa(sv.sinhnhat);
			return is;
		}
		friend ostream &operator<<(ostream &os, const SinhVien &sv)
		{
			os << sv.masv << " " << sv.ten << " " << sv.lop << " " << sv.sinhnhat
			<< " " << fixed << setprecision(2) << sv.gpa << endl;
			return os;	
		}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

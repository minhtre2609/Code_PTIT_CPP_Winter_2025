#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float gpa;

public:
    SinhVien() {
        maSV = "";
        hoTen = "";
        lop = "";
        ngaySinh = "";
        gpa = 0.0;
    }

    string chuanHoaTen(string ten) {
        string result = "";
        stringstream ss(ten);
        string word;
        
        while (ss >> word) {
            if (!word.empty()) {
                word[0] = toupper(word[0]);
                for (int i = 1; i < word.length(); i++) {
                    word[i] = tolower(word[i]);
                }
                result += word + " ";
            }
        }
        
        if (!result.empty()) {
            result.pop_back();
        }
        return result;
    }

    string chuanHoaNgaySinh(string ngay) {
        string result = "";
        vector<string> parts;
        stringstream ss(ngay);
        string part;
        
        while (getline(ss, part, '/')) {
            parts.push_back(part);
        }
        
        for (int i = 0; i < parts.size(); i++) {
            if (parts[i].length() == 1) {
                result += "0" + parts[i];
            } else {
                result += parts[i];
            }
            
            if (i < parts.size() - 1) {
                result += "/";
            }
        }
        
        return result;
    }

    friend istream& operator>>(istream& in, SinhVien& sv) {
        sv.maSV = "B20DCCN001";
        
        getline(in, sv.hoTen);
        sv.hoTen = sv.chuanHoaTen(sv.hoTen);
        
        getline(in, sv.lop);
        
        getline(in, sv.ngaySinh);
        sv.ngaySinh = sv.chuanHoaNgaySinh(sv.ngaySinh);
        
        in >> sv.gpa;
        
        return in;
    }

    friend ostream& operator<<(ostream& out, const SinhVien& sv) {
        out << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " 
            << fixed << setprecision(2) << sv.gpa;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}



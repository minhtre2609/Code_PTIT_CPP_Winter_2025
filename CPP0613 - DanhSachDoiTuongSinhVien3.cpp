#include <bits/stdc++.h>
using namespace std;

int counter = 1;

class SinhVien {
private:
    string maSV, hoTen, lop, ngaySinh;
    float gpa;
    
public:
    SinhVien() {
        maSV = hoTen = lop = ngaySinh = "";
        gpa = 0;
    }
    
    friend istream& operator >> (istream& in, SinhVien& sv) {
        in.ignore();
        getline(in, sv.hoTen);
        getline(in, sv.lop);
        getline(in, sv.ngaySinh);
        in >> sv.gpa;
        
        sv.maSV = "B20DCCN" + string(3 - to_string(counter).length(), '0') + to_string(counter);
        counter++;
        
        sv.chuanHoaHoTen();
        sv.chuanHoaNgaySinh();
        
        return in;
    }
    
    friend ostream& operator << (ostream& out, const SinhVien& sv) {
        out << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " 
            << sv.ngaySinh << " " << fixed << setprecision(2) << sv.gpa;
        return out;
    }
    
    void chuanHoaHoTen() {
        stringstream ss(hoTen);
        string word, result;
        while (ss >> word) {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.length(); i++) {
                word[i] = tolower(word[i]);
            }
            result += word + " ";
        }
        if (!result.empty()) {
            result.pop_back();
        }
        hoTen = result;
    }
    
    void chuanHoaNgaySinh() {
        stringstream ss(ngaySinh);
        string day, month, year;
        getline(ss, day, '/');
        getline(ss, month, '/');
        getline(ss, year);
        
        if (day.length() == 1) day = "0" + day;
        if (month.length() == 1) month = "0" + month;
        
        ngaySinh = day + "/" + month + "/" + year;
    }
    
    float getGPA() const {
        return gpa;
    }
};

bool cmp(const SinhVien& a, const SinhVien& b) {
    return a.getGPA() > b.getGPA();
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i] << endl;
    }
    return 0;
}

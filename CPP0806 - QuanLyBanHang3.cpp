#include <bits/stdc++.h>
using namespace std;

class KhachHang {
public:
    string maKH, tenKH, gioiTinh, ngaySinh, diaChi;
};

class MatHang {
public:
    string maMH, tenMH, donViTinh;
    int giaMua, giaBan;
};

class HoaDon {
public:
    string maHD, maKH, maMH;
    int soLuong;
};

int main() {
    ifstream khFile("KH.in");
    ifstream mhFile("MH.in");
    ifstream hdFile("HD.in");
    
    vector<KhachHang> khList;
    vector<MatHang> mhList;
    vector<HoaDon> hdList;
    
    int N;
    khFile >> N;
    khFile.ignore();
    for (int i = 0; i < N; i++) {
        KhachHang kh;
        getline(khFile, kh.tenKH);
        getline(khFile, kh.gioiTinh);
        getline(khFile, kh.ngaySinh);
        getline(khFile, kh.diaChi);
        kh.maKH = "KH" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        khList.push_back(kh);
    }
    
    int M;
    mhFile >> M;
    mhFile.ignore();
    for (int i = 0; i < M; i++) {
        MatHang mh;
        getline(mhFile, mh.tenMH);
        getline(mhFile, mh.donViTinh);
        mhFile >> mh.giaMua;
        mhFile >> mh.giaBan;
        mhFile.ignore();
        mh.maMH = "MH" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        mhList.push_back(mh);
    }
    
    int K;
    hdFile >> K;
    hdFile.ignore();
    for (int i = 0; i < K; i++) {
        HoaDon hd;
        hdFile >> hd.maKH >> hd.maMH >> hd.soLuong;
        hdFile.ignore();
        hd.maHD = "HD" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        hdList.push_back(hd);
    }
    
    for (const auto &hd : hdList) {
        KhachHang kh;
        MatHang mh;
        
        for (const auto &k : khList) {
            if (k.maKH == hd.maKH) {
                kh = k;
                break;
            }
        }
        
        for (const auto &m : mhList) {
            if (m.maMH == hd.maMH) {
                mh = m;
                break;
            }
        }
        
        long long thanhTien = hd.soLuong * mh.giaBan;
        
        cout << hd.maHD << " " << kh.tenKH << " " << kh.diaChi << " "
             << mh.tenMH << " " << mh.donViTinh << " " << mh.giaMua << " "
             << mh.giaBan << " " << hd.soLuong << " " << thanhTien << endl;
    }
    
    khFile.close();
    mhFile.close();
    hdFile.close();
    
    return 0;
}

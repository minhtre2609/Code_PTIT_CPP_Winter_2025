#include <bits/stdc++.h>
using namespace std;

int cnt=0;
class SinhVien{
private:
    string id, name, lop, dob;
    float gpa;
public:
    SinhVien(){
        id = name = lop = dob = "";
        gpa = 0;
    }
    void normName(){
        stringstream ss(name);
        string w,res="";
        while(ss>>w){
            w[0]=toupper(w[0]);
            for(int i=1;i<w.size();i++) w[i]=tolower(w[i]);
            res+=w+" ";
        }
        res.pop_back();
        name=res;
    }
    void normDob(){
        if(dob[1]=='/') dob="0"+dob;
        if(dob[4]=='/') dob.insert(3,"0");
    }
    istream& operator>>(istream &in){
        cnt++;
        string num = to_string(cnt);
        while(num.size()<3) num="0"+num;
        id="B20DCCN"+num;
        in.ignore();
        getline(in,name);
        getline(in,lop);
        getline(in,dob);
        in>>gpa;
        normName();
        normDob();
        return in;
    }
    ostream& operator<<(ostream &out) const{
        out<<id<<" "<<name<<" "<<lop<<" "<<dob<<" "<<fixed<<setprecision(2)<<gpa<<"\n";
        return out;
    }
};

istream& operator>>(istream &in, SinhVien &s){
    return s.operator>>(in);
}
ostream& operator<<(ostream &out, const SinhVien &s){
    return s.operator<<(out);
}

int main(){
    SinhVien ds[50];
    int N,i;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>ds[i];
    }
    for(i=0;i<N;i++){
        cout<<ds[i];
    }
    return 0;
}


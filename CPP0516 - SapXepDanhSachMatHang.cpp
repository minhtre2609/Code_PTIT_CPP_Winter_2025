#include <bits/stdc++.h>
using namespace std;

struct Product 
{
    int id;
    string name, type;
    float buy, sell;
    void input() 
	{
        cin.ignore();
        getline(cin, name);
        getline(cin, type);
        cin >> buy >> sell;
    }
    float profit() const { return sell - buy; }
};

bool cmp(const Product &a, const Product &b) 
{
    return a.profit() > b.profit();
}

int main() 
{
    int n;
    cin >> n;
    vector<Product> a(n);
    for (int i = 0; i < n; i++) 
	{
        a[i].id = i + 1;
        a[i].input();
    }
    sort(a.begin(), a.end(), cmp);
    for (auto &p : a)
        cout << p.id << " " << p.name << " " << p.type << " " << fixed << setprecision(2) << p.profit() << endl;
}


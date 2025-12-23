#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in;
	in.open("DATA.in");
    string s;
    long long sum = 0;

    while (getline(in, s)) {
        long long num = 0;
        bool inNumber = false;
        bool valid = true;

        for (char c : s) {
            if (isdigit(c)) {
                inNumber = true;
                if (valid) {
                    num = num * 10 + (c - '0');
                    if (num > INT_MAX)
                        valid = false;
                }
            } else {
                if (inNumber) {
                    if (valid)
                        sum += num;
                    num = 0;
                    valid = true;
                    inNumber = false;
                }
            }
        }

        if (inNumber && valid)
            sum += num;
    }

    cout << sum;
    in.close();
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in;
	in.open("VANBAN.in");
    set<string> st;
    string word;

    while (in >> word) {
        for (char &c : word)
            c = tolower(c);
        st.insert(word);
    }

    for (auto &w : st)
        cout << w << "\n";
    
    in.close();
    return 0;
}


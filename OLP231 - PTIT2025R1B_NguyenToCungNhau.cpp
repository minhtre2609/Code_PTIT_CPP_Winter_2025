#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<bool> bad(MAXN, false);
    for (int i = 0; i < N; i++) {
        int x = A[i];
        for (int d = 2; d * d <= x; d++) {
            if (x % d == 0) {
                bad[d] = true;
                while (x % d == 0) x /= d;
            }
        }
        if (x > 1) bad[x] = true;
    }
    
    vector<bool> valid(M + 1, true);
    for (int p = 2; p < MAXN; p++) {
        if (bad[p]) {
            for (int j = p; j <= M; j += p) {
                valid[j] = false;
            }
        }
    }
    
    vector<int> result;
    for (int k = 1; k <= M; k++) {
        if (valid[k]) {
            result.push_back(k);
        }
    }
    
    cout << result.size() << "\n";
    for (int k : result) {
        cout << k << " ";
    }
    
    return 0;
}

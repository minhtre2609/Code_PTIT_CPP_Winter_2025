#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
	{
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++) 
		{
            int cnt = 1;
            while(i + 1 < s.length() && s[i] == s[i + 1]) 
			{
                cnt++;
                i++;
            }
            cout << s[i] << cnt;
        }
        cout << endl;
    }
    return 0;
}


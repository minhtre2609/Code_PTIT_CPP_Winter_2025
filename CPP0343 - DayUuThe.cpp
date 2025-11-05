#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int t;
    cin >> t;
    cin.ignore();
    while (t--) 
	{
        string line;
        getline(cin, line);
        
        stringstream ss(line);
        int num;
        int count = 0, even_count = 0, odd_count = 0;
        
        while (ss >> num) 
		{
            count++;
            if (num % 2 == 0) 
			{
                even_count++;
            } 
			else 
			{
                odd_count++;
            }
        }
        
        bool is_superior = false;
        
        if (count % 2 == 0) 
		{
            if (even_count > odd_count) 
			{
                is_superior = true;
            }
        } 
		else 
		{
            if (odd_count > even_count) 
			{
                is_superior = true;
            }
        }
        
        if (is_superior) 
		{
            cout << "YES" << endl;
        } 
		else 
		{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		string x, y;
		cin >> x >> y;
		if (x.length() < y.length()) swap(x, y);
		
		string res ="";
		int carry = 0;
		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());
		
		for (int i = 0; i < y.length(); i++)
		{
			int sum = (x[i] - '0') + (y[i] - '0') + carry;
			res += (sum % 10) + '0';
			carry = sum / 10;
		}
		
		for (int i = y.length(); i < x.length(); i++)
		{
			int sum = (x[i] - '0') + carry;
			res += (sum % 10) + '0';
			carry = sum / 10;
		}
		if(carry) res += carry + '0';
		reverse(res.begin(), res.end());
		
		cout << res << endl;
	}
}

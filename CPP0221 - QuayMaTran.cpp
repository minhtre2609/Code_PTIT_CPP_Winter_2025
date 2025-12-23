#include <bits/stdc++.h>
using namespace std;

void quaymatran(vector<vector<int>> &a, int n, int m)
{
	int top = 0, bot = n - 1, l = 0, r = m - 1;
	while(top < bot && l < r)
	{
		int tmp = a[top + 1][l];
		for (int i = l; i <= r; i++) swap(a[top][i], tmp);
		top++;
		for (int i = top; i <= bot; i++) swap(a[i][r], tmp);
		r--;
		for (int i = r; i >= l; i--) swap(a[bot][i], tmp);
		bot--;
		for (int i = bot; i >= top; i--) swap(a[i][l], tmp);
		l++;
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		
		quaymatran (a, n, m);
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}

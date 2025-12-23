#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ifstream in;
	in.open("DATA.in");
	
	int cnt[1000] = {};
	int x;
	while (in >> x)
	{
		cnt[x]++;
	}
	for (int i = 0; i < 1000; i++)
	{
		if (cnt[i] > 0)
		{
			cout << i << " " << cnt[i] << endl;
		}
	}
	in.close();
}

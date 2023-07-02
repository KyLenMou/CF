#include <bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x, vector<x>, greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int, int> PII;

const int N = 0;

void solve()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	string l, r;
	cin >> l >> r;
	//遍历密码的每一个位置
	for (int i = 0; i < n; i++)
	{
		int a = l[i];
		int b = r[i];
		int idx = 0;
		//遍历该位置所有可能的字符
		for (int j = a; j <= b; j++)
		{
			if (s.find(j) == s.npos) 
			{
				cout << "YES" << endl;
				return;
			}
			else idx = max(idx, (int)s.find(j));
		}
		s = s.substr(idx + 1);
	}
	cout << "NO" << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while (T--)
		solve();
	return 0;
}
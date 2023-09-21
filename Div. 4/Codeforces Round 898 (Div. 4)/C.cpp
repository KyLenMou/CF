#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve()
{
    vector<string> g(11);
    for (int i = 1; i <= 10; i++) 
    {
        cin >> g[i];
        g[i] = '?' + g[i];
    } 
    int res = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (g[i][j] == 'X')
            {
                if (i == 1 || j == 1 || i == 10 || j == 10) res += 1;
                else if (i == 2 || j == 2 || i == 9 || j == 9) res += 2;
                else if (i == 3 || j == 3 || i == 8 || j == 8) res += 3;
                else if (i == 4 || j == 4 || i == 7 || j == 7) res += 4;
                else if (i == 5 || j == 5 || i == 6 || j == 6) res += 5;
            }
        }
    }
    cout << res << endl;
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	//T = 1;
	while(T--) solve();
	return 0;
}
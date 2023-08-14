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
    string g[9];
    for (int i = 1; i <= 8; i++)
    {
        cin >> g[i];
        g[i] = '0' + g[i];
    }
    for (int i = 2; i <= 7; i++)
    {
        for (int j = 2; j <= 7; j++)
        {
            if (g[i][j] == '#' && g[i-1][j-1] == '#' && g[i-1][j+1] == '#' && g[i+1][j+1] == '#' && g[i+1][j-1] == '#')
            {
                cout << i << ' ' << j << endl;
                return;
            }

        }
        
    }

     
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
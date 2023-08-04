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
string c[9];
void solve(){
    for (int i = 1; i <= 8; i++) 
    {
        cin >> c[i];
        c[i] = '0' + c[i]; 
    }
    for (int i = 1; i <= 8; i++)
    {
        char t = c[i][1];
        if (t == '.') continue;
        bool flag = true;
        for (int j = 2; j <= 8; j++)
        {
            if (c[i][j] != t) flag = false;
        }
        if (flag && t != 'B')
        {
            cout << t << endl;
            return;
        }
    }
    for (int i = 1; i <= 8; i++)
    {
        char t = c[1][i];
        if (t == '.') continue;
        bool flag = true;
        for (int j = 2; j <= 8; j++)
        {
            if (c[j][i] != t) flag = false;
        }
        if (flag && t != 'R')
        {
            cout << t << endl;
            return;
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
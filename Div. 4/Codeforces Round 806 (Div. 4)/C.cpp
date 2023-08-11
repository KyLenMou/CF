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
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int cnt = 0;
        for (int j = 0; s[j]; j++)
        {
            if (s[j] == 'D') cnt++;
            else cnt--;
        }
        a[i] = (a[i] + 10 + cnt) % 10;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << endl;
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
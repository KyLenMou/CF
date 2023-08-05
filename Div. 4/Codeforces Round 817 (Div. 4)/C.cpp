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

void solve(){
	int n;
    cin >> n;
    unordered_map<string,int> m;
    vector<string> v[4];
    for (int j = 1; j <= 3; j++)
    {
        for (int i = 1; i <= n; i++ )
        {
            string a;
            cin >> a;
            m[a]++;
            v[j].push_back(a);
        }
    }
    for (int j = 1; j <= 3; j++)
    {
        int res = 0;
        for (auto a : v[j])
        {
            if (m[a] == 1) res += 3;
            else if (m[a] == 2) res += 1;
        }
        cout << res << ' ';
    }
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
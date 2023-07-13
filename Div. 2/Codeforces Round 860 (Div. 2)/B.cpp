#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n; 
    cin >> n;
    vector<vector<int>> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        for (int j = 1; j <= m; j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    unordered_map<int,int> m;
    for (int i = 2; i <= n; i++)
        for (auto j : v[i])
            m[j]++;
    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        for (auto j : v[i])
        {
            // cout << i << ' ' << j << ' ' << m[j] << endl;
            if (m[j] == 0 && i == 1 || m[j] == 1 && i > 1) 
            {
                res.push_back(j);
                if (i > 1)
                {
                    for (auto k : v[i]) 
                        m[k]--;
                }
                break;
            }
        }
    }
    if (res.size() < n)
    {
        cout << -1 << endl;
        return;
    }
    for (auto i : res) cout << i << ' ';
    cout << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
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
    vector<vector<int>> v(2),idx(2);
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        v[t & 1].push_back(t);
        idx[t&1].push_back(i);
    }
    sort(begin(v[0]),end(v[0]));
    sort(begin(v[1]),end(v[1]));
    vector<int> res(n);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            res[idx[i][j]-1] = v[i][j];
        }
    }
    if (res.size() == 1) cout << "YES" << endl;
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (res[i] < res[i-1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl; 
    }
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
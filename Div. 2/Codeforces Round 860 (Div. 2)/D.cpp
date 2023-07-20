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
    vector<ll> v(n);
    for (auto &i : v) cin >> i;
    sort(begin(v),end(v));
    if (v[n-1] == 0)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> res;
    ll num = 0;
    for (int i = 0, j = n - 1; i < j;)
    {
        if (num >= 0)
        {
            res.push_back(v[i]);
            num += v[i++];
        }
        else
        {
            res.push_back(v[j]);
            num += v[j];
        }
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
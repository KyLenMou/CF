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
	int n,k;
    cin >> n >> k;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    int cnt1 = 0, cntn = 0;
    int idx1 = 0, idxn = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == v[1]) cnt1++;
        if (cnt1 == k && !idx1) idx1 = i;
    }
    for (int i = n; i >= 1; i--)
    {
        if (v[i] == v[n]) cntn++;
        if (cntn == k && !idxn) idxn = i;
    }
    // cout << idx1 << ' ' << idxn << endl;
    if (cnt1 >= k && cntn >= k && idx1 <= idxn || v[1] == v[n] && cnt1 >= k) cout << "YES" << endl;
    else cout << "NO" << endl;  
    // cout << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
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
    int ans = 0, cur = 0; 
    unordered_set<int> s;
    s.insert(0);
    for (int i = 1; i <= n; i++)
    {
        int x; 
        cin >> x;
        cur ^= x;
        s.insert(cur);
        for (auto j : s)
        {
            ans = max(ans,j ^ cur);
        }
    }
    cout << ans << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
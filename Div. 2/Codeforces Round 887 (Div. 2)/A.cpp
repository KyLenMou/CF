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
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    int mn = 1e9+1;
    
    for (int i = 2; i <= n; i++)
    {
        mn = min(mn,v[i]-v[i-1]);
    }
    
    if (mn < 0) cout << 0 << endl;
    else cout << mn / 2 + 1 << endl;

}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
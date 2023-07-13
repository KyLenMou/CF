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
    vector<int> a(n+1),b(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= b[n] && b[i] <= a[n]) swap(a[i],b[i]);
    }   
    if (*max_element(begin(a),end(a)) == a[n] && *max_element(begin(b),end(b)) == b[n]) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 
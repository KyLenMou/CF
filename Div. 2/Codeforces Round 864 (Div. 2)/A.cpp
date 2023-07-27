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
	int n,m;
    cin >> n >> m;
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int res = 4;
    int ans = 4;
    if (x1 == 1 || x1 == n) res--;
    if (y1 == 1 || y1 == m) res--;
    ans = min(ans,res);
    res = 4;
    if (x2 == 1 || x2 == n) res--;
    if (y2 == 1 || y2 == m) res--;
    cout << min(ans,res) << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 
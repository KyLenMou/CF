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
	int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (d < b || (a + d - b) < c)
    {
        cout << -1 << endl;
        return;
    }
    cout << d - b + a + d - b - c << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 
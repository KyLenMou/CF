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
	int n,m,k;
    cin >> n >> m >> k;
    int a,b;
    cin >> a >> b;
    bool win = true;
    while (k--)
    {
        int x,y;
        cin >> x >> y;
        if ((abs(x-a) + abs(y-b)) % 2 == 0) win = false;
    }
    if (!win) cout << "NO" << endl;
    else cout << "YES" << endl; 
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
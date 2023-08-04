#include<bits/stdc++.h>
// #define x first
// #define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n,x,y;
    cin >> n >> x >> y;
    string a,b;
    cin >> a >> b;
    int cnt = 0;
    //奇数个不一样
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) cnt++;
        if (i == n - 1)
        {
            if (cnt & 1) 
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    //偶数个不一样
    if (cnt > 2)
    {
        cout << cnt / 2 * y << endl;
    }
    else if (cnt == 0) cout << 0 << endl;
    else
    {
        int l = -1,r;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (l == -1) l = i;
                else r = i;
            }
        }
        if (l + 1 == r) 
        {
            if (2 * y <= x) cout << y * 2 << endl;
            else cout << x << endl;
        }
        else cout << y << endl;
    }
    


}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	//T = 1;
	while(T--) solve();
	return 0;
}
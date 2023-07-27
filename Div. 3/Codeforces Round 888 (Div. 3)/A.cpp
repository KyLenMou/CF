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
	int n,m,d,h;
    cin >> n >> m >> d >> h;
    vector<int> v(n+1); 
    for (int i = 1; i <= n; i++) cin >> v[i];
    int res = 0;
    vector<bool> st(n+1,false);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)    
        {
            if (j == i) continue;
            for (int k = 1; k <= n; k++)
            {
                if (i * d + h == v[k] + j * d && !st[k]) 
                {
                    // cout << i << ' ' << j << ' ' << k << endl;
                    res++;
                    st[k] = true;
                }
            }
        }
    }
    cout << res << endl; 
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
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

struct C
{
    ll a,b,c;
};

bool cmp(C c1, C c2) 
{
    if (c1.a == c2.a) return c1.b < c2.b;
    return c1.a > c2.a;
}

void solve(){
	ll n,m,t;
    cin >> n >> m >> t;
    vector<C> st(n);
    for (int i = 1; i <= n; i++)
    {
        vector<ll> p(m);
        for (auto &j : p) cin >> j;
        sort(p.begin(),p.end());
        ll score = 0;
        ll tim = 0;
        for (int j = 0; j < m; j++)
        {
            if (j != 0) p[j] += p[j-1];
            if (p[j] > t) break;
            score++;
            tim += p[j];
        }
        st[i-1] = {score,tim,i};
    }
    sort(st.begin(),st.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        
        if (st[i].c == 1) 
        {
            for (int j = 0; j < n; j++)
            {
                if (st[j].a == st[i].a && st[j].b == st[i].b)
                {
                    cout << j + 1 << endl;
                    return;
                }
            }
        }
        // cout << st[i].a << ' ' << st[i].b << ' ' << st[i].c << endl;
    }
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
#include<bits/stdc++.h> 
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    vector<bool> st(n);
    int res = 0;
    for (int i = 1; i <= min(n,32/*妙啊*/); i++)
    {
        int maxa = 0, idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (st[j]) continue;
            if ((res | a[j]) > maxa)
            {
                // cout << "res | a[j] = " << (res | a[j]) << " maxa = " << maxa << endl;
                idx = j;
                maxa = (res | a[j]);
            }  
        }
        st[idx] = true;
        res |= a[idx];
        cout << a[idx] << ' ';
    }   
    for (int i = 0; i < n; i++)
    {
        if (!st[i]) cout << a[i] << ' ';
    }
    cout << endl;
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
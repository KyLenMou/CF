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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    } 
    int p = 1, q = n;
    int last = 0;
    int cnt = 0;
    int k = 0;
    int ansp = 0;
    int ansq = 0;
    
    while (p <= q)
    {
        if (k & 1)
        {
            int cur = 0;
            while (p <= q && cur <= last) cur += a[q], q--;
            ansq += cur;
            last = cur;
            cnt++;
        }
        else
        {
            int cur = 0;
            while (p <= q && cur <= last) cur += a[p], p++;
            ansp += cur;
            last = cur;
            cnt++;
        }
        k ^= 1;
    }

    cout << cnt << ' ' << ansp << ' ' << ansq << endl;

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
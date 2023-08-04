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

void solve(){
	int n;
    cin >> n;
    vector<int> a(n+1),b(n+1);
    int maxa = 1, mina = 1;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        b[i] = a[i];
        if (a[i] >= a[maxa]) maxa = i;
        if (a[i] <= a[mina]) mina = i;
    }

    if (a[maxa] == a[mina])
    {
        cout << 0 << endl;
        return;
    }

    //最大值小于零
    if (a[maxa] <= 0)
    {
        cout << n - 1 << endl;
        for (int i = n; i > 1; i--) cout << i - 1 << ' ' << i << endl;
    }
    //最小值大于零
    else if (a[mina] >= 0)
    {
        cout << n - 1 << endl;
        for (int i = 2; i <= n; i++) cout << i << ' ' << i - 1 << endl;
    }
    //最大值大于零
    //最小值小于零
    else
    {
        vector<PII> maxres,minres;
        while (a[maxa] + a[mina] < 0) a[maxa] *= 2, maxres.push_back({maxa,maxa});
        while (b[mina] + b[maxa] > 0) b[mina] *= 2, minres.push_back({mina,mina});
        for (int i = 1; i <= n; i++)
        {
            if (a[i] < 0) a[i] += a[maxa], maxres.push_back({i,maxa});
            if (b[i] > 0) b[i] += b[mina], minres.push_back({i,mina});
        }
        for (int i = 2; i <= n; i++)
        {
            if (a[i - 1] > a[i]) a[i] += a[i-1], maxres.push_back({i,i-1});
        }
        for (int i = n; i > 1; i--)
        {
            if (b[i - 1] > b[i]) b[i-1] += b[i], minres.push_back({i-1,i});
        }
        if (maxres.size() <= 31)
        {
            cout << maxres.size() << endl;
            for (auto [x,y] : maxres) cout << x << ' ' << y << endl;
        }
        else if (minres.size() <= 31)
        {
            cout << minres.size() << endl;
            for (auto [x,y] : minres) cout << x << ' ' << y << endl;
            // for (auto i : b) cout << i << ' ';
        }
    }
    
    




    // for (int i = 1; i <= n; i++) b[i] = a[i];
    // int mx = *max_element(begin(a)+1,end(a));
    // int mi = *min_element(begin(a)+1,end(a));
    // if (mx == mi) 
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // int t1 = mx, t2 = mi;
    // int mxi = max_element(begin(a)+1,end(a)) - begin(a), mii = min_element(begin(a)+1,end(a)) - begin(a);
    // vector<PII> mxr,mir;
    // if (mx > 0 && mi < 0)
    // {
    //     while (mx + t2 < 0 && mx) mx *= 2, a[mxi] *= 2, mxr.push_back({mxi,mxi});
    // }
    // if (t1 > 0 && mi < 0)
    // {
    //     while (mi + t1 > 0 && mi) mi *= 2, b[mii] *= 2, mir.push_back({mii,mii});
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (a[i] < 0) a[i] += mx, mxr.push_back({i,mxi});
    //     if (b[i] > 0) b[i] += mi, mir.push_back({i,mii});
    // }
    // // for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    // // cout << endl;
    // for (int i = 2; i <= n; i++)  
    // {
    //     if (a[i-1] > a[i]) 
    //     // {
    //         // cout << i-1 << ' ' << i << endl;
    //         a[i] += a[i-1], mxr.push_back({i,i-1});
    //     // }
    // }
    // for (int i = n; i > 1; i--)
    // { 
    //     if (b[i-1] > b[i]) b[i-1] += b[i], mir.push_back({i-1,i});
    // }
    // // cout << endl;
    // if (mxr.size() > mir.size()) swap(mxr,mir);
    // cout << mxr.size() << endl;
    // for (auto [x,y] : mxr) cout << x << ' ' << y << endl;
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
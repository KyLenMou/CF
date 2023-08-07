#include<bits/stdc++.h>
#define x first
#define y second
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
    int n;
    cin >> n;
    vector<int> a(n+1);
    int num = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        num += a[i];
        if (a[i] == 1) cnt++;
    }
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    num -= cnt * 2;
    if (num <= 0 || num < n - cnt) 
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    // //枚举1 - n-2
    // for (int i = 1; i <= n - 2; i++)
    // {
    //     if (a[i] == 1) num -= 2;
    //     else num -= 1;
    // }
    // if (num < 2 || num == a[n-1] + a[n] && a[n-1] == 1 || num == 3 && (a[n-1] == 1 || a[n] == 1) || num == 2 && (a[n-1] == 1 || a[n] == 1)) cout << "NO" << endl; 
    // else cout << "YES" << endl;

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
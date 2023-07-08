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
	int n;
    double d,h;
    cin >> n >> d >> h;
    double s = d * h / 2;
    double x;
    cin >> x; 
    double res = s;
    while (--n)
    {
        double t = x;
        cin >> x;
        res += s;
        if (x - t < h) res -= s * (t + h - x) * (t + h - x) / h / h;
    }
    cout << fixed << setprecision(8) << res << endl; 
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
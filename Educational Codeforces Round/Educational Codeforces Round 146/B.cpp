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
	int a,b;
    cin >> a >> b;      
    if (a > b) swap(a,b);
    int res = 1e9;
    for (int i = 1; i <= 1e5; i++)
    {
        if (i > b) break;
        if (i > a) res = min(res, b % i + b / i + i); 
        res =  min(res, (a + i - 1) / i + (b + i - 1) / i + i - 1);
    }
    cout << res << endl;
    // if (a > b) swap(a,b);
    // int mi = 2e9+1;
    // int c = 1;
    // int res = 0;
    // for (int i = 1; i <= a; i++)
    // {
    //     if (a % i + a / i + i - 1 < mi) 
    //     {
    //         // cout << mi << endl;
    //         //mi总次数,c加到多少
    //         mi = a % i + a / i + i - 1;
    //         c = i;
    //     }
    //     else break;
    // }
    // cout << c << endl;
    // cout << mi << endl;
    // res += mi;
    // mi = 2e9 + 1;
    // for (int i = c; i <= b; i++)
    // {
    //     if (b % i + b / i + i - c < mi)
    //     {
    //         mi = b % i + b / i + i - c;
    //         // cout << mi << endl;
    //     }
    //     else break;
    // }
    // cout << mi << endl;
    // cout << res + mi << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
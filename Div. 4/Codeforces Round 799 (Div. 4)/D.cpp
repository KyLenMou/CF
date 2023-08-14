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

set<pair<string,string>> q = {{"00","00"},{"10","01"},{"11","11"},{"12","21"},{"13","31"},{"14","41"},{"15","51"},{"20","02"},{"01","10"},{"02","20"},{"03","30"},{"04","40"},{"05","50"},{"21","12"},{"22","22"},{"23","32"}};                                   

void solve()
{
    string s;
    cin >> s;
    int t;
    cin >> t;
    int T = 3600;
    int a = stoi(s.substr(0,2)), b = stoi(s.substr(3));
    // cout << a << ' ' << b << endl;
    set<pair<string,string>> res;
    while (T--)
    {
        b += t;
        if (b >= 60) 
        {
            a += b / 60;
            b %= 60;
        }
        if (a >= 24) a %= 24;
        string A = to_string(a), B = to_string(b);
        if (A.size() == 1) A = "0" + A;
        if (B.size() == 1) B = "0" + B;
        if (q.count({A,B}))
        {
            res.insert({A,B});
        }
    }
    cout << res.size() << endl;
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


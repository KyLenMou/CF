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
	int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<PII> v(26);
    for (auto i : s) 
    {
        char t = i;
        if (t > 'Z') 
        {
            t -= 'a' - 'A', v[t-'A'].y++;
        }
        else v[t-'A'].x++;
    }
    int res = 0;
    for (auto [x,y] : v)
    {
        // cout << x << ' ' << y << endl;
        int a = min(x,y);
        int A = max(x,y);
        res += a;
        A -= a;
        while (k && A > 1)
        {
            k--;
            res++;
            A -= 2;
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
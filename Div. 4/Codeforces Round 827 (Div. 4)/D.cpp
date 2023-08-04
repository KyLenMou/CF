//卡数据范围
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
    vector<PII> v;
    unordered_set<int> s;
    v.push_back({0,0}); 
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (s.count(a))
        {
            for (auto &[x,y] : v)
            {
                if (x == a) 
                {
                    y = i;
                    break;
                }
            }
        }
        else 
        {
            v.push_back({a,i}); 
            s.insert(a);
        }
    }
    n = v.size() - 1;
    int res = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            if (gcd(v[i].x,v[j].x) == 1)
            {
                res = max(v[i].y + v[j].y, res);
            }
        }
    }
    cout << (res == 0 ? -1 : res) << endl;
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
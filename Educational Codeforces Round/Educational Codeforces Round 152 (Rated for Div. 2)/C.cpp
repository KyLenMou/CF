#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	string s;
    int n,m;    
    cin >> n >> m >> s;
    vector<int> l(n+1),r(n+1); //区间内左第一个1,右第一个0
    s = '?' + s;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '0') r[i] = i;
        else r[i] = (i == 1 ? 0 : r[i-1]);
    }
    for (int i = n; i >= 1; i--)
    {
        if (s[i] == '1') l[i] = i;
        else l[i] = (i == n ? 0 : l[i+1]);
    }
    // for (int i = 1; i <= n; i++) cout << l[i] << ' ';
    // cout << endl;
    // for (int i = 1; i <= n; i++) cout << r[i] << ' ';
    // cout << endl;
    unordered_set<string> se;
    while (m--)
    {
        int a,b;
        cin >> a >> b;  
        if (l[a] == 0 || r[b] == 0) 
        {
            se.insert("cf");
            continue;
        }
        a = l[a], b = r[b];
        if (a > b) 
        {
            se.insert("cf");
            // cout << "cf" << endl;
        }
        else 
        {
            se.insert(to_string(a) + " " + to_string(b));
            // cout << to_string(a) + " " + to_string(b) << endl;
        }
    }
    // for (auto i : se) cout << i << endl;
    cout << se.size() << endl;
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
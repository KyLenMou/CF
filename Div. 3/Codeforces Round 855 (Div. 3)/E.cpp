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
    string s,t;
    cin >> s >> t;
    if (k * 2 <= n)
    {
        sort(begin(s),end(s));
        sort(begin(t),end(t));
        if (s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else
    {
        if (s == t)
        {
            cout << "YES" << endl;
            return;
        }
        if (k > n) 
        {
            cout << "NO" << endl;
            return;
        }
        vector<char> ss,tt;
        for (int i = 0; i < n - k; i++) ss.push_back(s[i]),tt.push_back(t[i]);
        for (int i = k; i < n; i++) ss.push_back(s[i]),tt.push_back(t[i]);
        sort(begin(ss),end(ss));
        sort(begin(tt),end(tt));
        for (int i = 0; i < ss.size(); i++) 
            if (ss[i] != tt[i])
            {
                cout << "NO" << endl;
                return;
            }
        for (int i = n - k; i < k; i++)
            if (s[i] != t[i])
            {
                cout << "NO" << endl;
                return;
            }
        cout << "YES" << endl;
    }
    
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
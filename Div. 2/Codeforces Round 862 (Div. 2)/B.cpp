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
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(26,-1);
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[s[i]-'a'] == -1) v[s[i]-'a'] = i;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] != -1)
        {
            cout << s[v[i]] << s.substr(0,v[i]) << s.substr(v[i]+1) << endl;
            return;
        }
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
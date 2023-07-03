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
    vector<int> v(3);
    for (int i = 1; i <= n; i++) 
    {
        int a;
        cin >> a;
        if (a == 0) v[0]++;
        else if (a == 1) v[1]++;
        else v[2]++;
    }
    if (v[0] <= (n + 1) / 2) cout << 0 << endl;
    else if (v[1] == 0) cout << 1 << endl;
    else if (v[2] >= 1) cout << 1 << endl;
    else cout << 2 << endl;
    
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
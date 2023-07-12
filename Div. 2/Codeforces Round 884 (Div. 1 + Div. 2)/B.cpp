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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 4)
    {
        cout << "3 1 4 2" << endl;
        return;
    }
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) v[i] = i;
    swap(v[2],v[n]);
    swap(v[1],v[(n-1)/2+1]);
    if (n > 6) swap(v[1],v[3]); 
    for (int i = 1; i <= n; i++) cout << v[i] << ' ';
    cout << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
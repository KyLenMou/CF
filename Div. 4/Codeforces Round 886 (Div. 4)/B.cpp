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
	PQ(PII) q;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;
        if (a <= 10)
        {
            q.push({b,i});
        }
    }
    cout << q.top().y << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
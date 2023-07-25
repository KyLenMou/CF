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
    int cnt = 0;
    for (int i = (n+1)/2; i <= n; i++)
    {
        int b = i, c = n;
        for (int j = 2; j <= k; j++)
        {
            int a = c - b;
            c = b;
            b = a;
            if (b < 0) break;
            if (j == k) cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
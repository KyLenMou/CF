#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve()
{
    int Q;
    cin >> Q;
    vector<int> a(26),b(26);
    a[0] = b[0] = 1;
    while (Q--)
    {
        int d,k;
        string s;
        cin >> d >> k >> s;
        if (d == 1)
        {
            for (int i = 0; s[i]; i++)
            {
                a[s[i] - 'a'] += k;
            }
        }
        else
        {
            for (int i = 0; s[i]; i++)
            {
                b[s[i] - 'a'] += k;
            }
        }
        bool flag = false;
        // for (int i = 0; i < 26; i++) cout << a[i] << ' ';
        // cout << endl;
        // for (int i = 0; i < 26; i++) cout << b[i] << ' ';
        // cout << endl;
        for (int i = 25; i > 0; i--)
        {
            if (b[i]) flag = true;
        }
        if (flag) cout << "YES" << endl;
        else
        {
            if (a[0] >= b[0]) cout << "NO" << endl;
            else
            {
                flag = true;
                for (int i = 1; i < 26; i++)
                {
                    if (a[i])
                    {
                        flag = false;
                    }
                }
                if (flag) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
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
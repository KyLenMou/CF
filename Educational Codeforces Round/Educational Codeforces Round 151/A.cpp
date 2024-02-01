#include <bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x, vector<x>, greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int, int> PII;

const int N = 0;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 1)
    {
        cout << "NO" << endl;
        return; 
    }
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
            cout << "1 ";
        cout << endl;
    }
    else
    {
        if (k == 2)
        {
            if (n & 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 1; i <= n / 2; i++)
                    cout << "2 ";
                cout << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            if (n & 1)
            {
                cout << 1 + (n - 3) / 2 << endl;
                cout << "3 ";
                n -= 3;
                for (int i = 1; i <= n / 2; i++)
                    cout << "2 ";
                cout << endl;
            }
            else
            {
                cout << n / 2 << endl;
                for (int i = 1; i <= n / 2; i++)
                    cout << "2 ";
                cout << endl;
            }
        }
    }
}

int main()
{
    IOS;
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
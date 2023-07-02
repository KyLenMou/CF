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
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    ll res = 1;
    if ((ax - bx) * (ax - cx) > 0) res += min(abs(ax - bx), abs(ax - cx));
    if ((ay - by) * (ay - cy) > 0) res += min(abs(ay - by), abs(ay - cy));
    cout << res << endl;
    
    // if (ax <= bx && ax <= cx && ay <= by && ay <= cy || ax <= bx && ax <= cx && ay >= by && ay >= cy || ax >= bx && ax >= cx && ay >= by && ay >= cy || ax >= bx && ax >= cx && ay <= by && ay <= cy)
    // {
    //     cout << min(abs(ax - bx), abs(ax - cx)) + min(abs(ay - by), abs(ay - cy)) + 1 << endl;
    // }
    // else if (ax < bx && ax > cx && ay > by && ay > cy || ax > bx && ax < cx && ay > by && ay > cy || ax < bx && ax > cx && ay < by && ay < cy || ax > bx && ax < cx && ay < by && ay < cy)
    // {
    //     cout << min(abs(ay - by), abs(ay - cy)) + 1 << endl;
    // }
    // else if (ax < bx && ax < cx && ay > by && ay < cy || ax < bx && ax < cx && ay < by && ay > cy || ax > bx && ax > cx && ay > by && ay < cy || ax > bx && ax > cx && ay < by && ay > cy)
    // {
    //     cout << min(abs(ax - bx), abs(ax - cx)) + 1 << endl;
    // }
    // else
    // {
    //     cout << 1 << endl;
    // }
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
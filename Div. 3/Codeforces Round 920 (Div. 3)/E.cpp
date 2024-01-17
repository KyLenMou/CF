#include<bits/stdc++.h>
#define RainRingBell int32_t main()
#define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define Kshqsz int T;cin >> T;while(T--) solve()
#define Kitto return 0
#define x first
#define y second
#define endl '\n'
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define int long long
using namespace std;

void solve() {
    int h,w,x1,y1,x2,y2;
    cin >> h >> w >> x1 >> y1 >> x2 >> y2;
    if (x1 >= x2) {
        cout << "Draw" << endl;
        return;
    }
    int d = abs(x1 - x2) / 2;
    int dd = abs(x1 - x2) % 2;
    // cout << d << ' ' << dd << '\n';
    // 奇数, Bob赢
    if (!dd) {
        if (y1 <= y2) {
            y1 = max(1LL, y1 - d - dd);
            y2 = max(1LL, y2 - d);
            if (y2 <= y1) cout << "Bob" << endl;
            else cout << "Draw" << endl;
        }
        else {
            y1 = min(w, y1 + d + dd);
            y2 = min(w, y2 + d);
            if (y2 >= y1) cout << "Bob" << endl;
            else cout << "Draw" << endl;
        }
    }
    // Alice赢
    else {
        if (y1 <= y2) {
            y1 = min(w, y1 + d + dd);
            y2 = min(w, y2 + d);
            if (y1 >= y2) cout << "Alice" << endl;
            else cout << "Draw" << endl;
        }
        else {
            y1 = max(1LL, y1 - d - dd);
            y2 = max(1LL, y2 - d);
            if (y1 <= y2) cout << "Alice" << endl;
            else cout << "Draw" << endl;
        }
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}
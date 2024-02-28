/*\ \/\ \         /\ \                     /'\_/`\                   
 \ \ \/'/'  __  __\ \ \         __    ___ /\      \    ___   __  __  
  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\ \ \__\ \  / __`\/\ \/\ \ 
   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \ \ \_/\ \/\ \L\ \ \ \_\ \
    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ \_\\ \_\ \____/\ \____/
     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/\/_/ \/_/\/___/  \/___/ 
                /\___/                                               
                \/_*/                                         
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
    int n;
    cin >> n;
    map<int,int> m;
    int mina = 1e9;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        m[x]++;
        mina = min(mina,x);
    }
    if (m[mina] == 1) cout << "YES" << endl;
    else {
        for (auto i : m) {
            if (i.x == mina) continue;
            if (i.x % mina != 0) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}
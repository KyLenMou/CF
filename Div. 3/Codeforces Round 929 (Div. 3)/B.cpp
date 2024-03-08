/* \/\ \         /\ \                       
\ \ \/'/'  __  __\ \ \         __    ___    
 \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\  
  \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \ 
   \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\
    \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/
               /\___/                       
       ___ ___ \/__/                                       
     /' __` __`\                                         
     /\ \/\ \/\ \    ___   __  __                                 
     \ \ \ \ \ \ \  / __`\/\ \/\ \                                 
      \ \ \ \ \ \ \/\ \L\ \ \ \_\ \                                 
       \ \ \ \ \ \ \ \____/\ \____/                                 
        \/_/\/_/\/_/\/___/  \/__*/                                 
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
    int num = 0;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        m[t%3]++;
        num += t;
    }
    if (num % 3 == 0) {
        cout << 0 << endl;
        return;
    }
    if (num % 3 == 1) {
        if (m[1] >= 1) {
            cout << 1 << endl;
            return;
        }
        if (m[2] % 3 == 1) {
            cout << 1 << endl;
            return;
        } else {
            cout << 2 << endl;
            return;
        }
    } else {
        cout << 1 << endl;
        return;
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}
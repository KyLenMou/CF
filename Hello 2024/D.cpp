    #include<bits/stdc++.h>
    #define x first
    #define y second
    #define endl '\n'
    // #define int long long
    #define ll long long
    #define pq(x) priority_queue<x,vector<x>,greater<x>>
    #define PQ(x) priority_queue<x>
    using namespace std;
    typedef pair<int,int> PII;

    void solve() {
        int n;
        cin >> n;
        vector<int> a(n+2),L(n+2),R(n+2);
        a[0] = -2;
        a[n+1] = -2;
        // 链表初始化
        R[0] = 1, L[n+1] = n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            L[i] = i - 1;
            R[i] = i + 1;
        }
        set<PII> s;
        for (int i = 1; i <= n; i++) {
            if (a[i-1] + 1 == a[i]) s.insert({a[i],i});
            if (a[i+1] + 1 == a[i]) s.insert({a[i],i});
        }
        for (int _ = 1; _ < n; _++) {
            if (s.size() == 0) {
                cout << "NO" << endl;
                return;
            }
            auto t = *s.rbegin();
            // cout << t.x << ' ' << t.y << endl;
            int cur = t.y;
            int l = L[cur], r = R[cur];
            // 删
            if (l != 0 && a[l] == a[cur] - 1 || r != n + 1 && a[r] == a[cur] - 1) {
                s.erase(t);
                R[l] = r, L[r] = l;
                // 加入(如果可以)
                if (l != 0 && r != n + 1) {
                    if (a[l] + 1 == a[r]) s.insert({a[r],r});
                    if (a[r] + 1 == a[l]) s.insert({a[l],l});
                }
            }
            else {
                cout << "NO" << endl;
                return; 
            }
        }
        if (a[R[0]] != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    int32_t main() {
        ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        int T;
        cin >> T;
        while(T--) solve();
        return 0;
    }
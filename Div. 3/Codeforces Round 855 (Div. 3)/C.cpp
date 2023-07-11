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
        PQ(int) q;
        ll res = 0;
        while (n--)
        {
            int a;
            cin >> a;
            if (a) q.push(a);
            else
            {
                if (q.size())
                {    
                    res += q.top();
                    q.pop();
                }
            }
        }
        cout << res << endl;
    }

    int main()
    {
        IOS;
        int T;
        cin >> T;
        while(T--) solve();
        return 0;
    }  
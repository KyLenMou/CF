    #include<bits/stdc++.h>
    #define x first
    #define y second
    #define endl '\n'
    #define ll long long
    #define pq(x) priority_queue<x,vector<x>,greater<x>>
    #define PQ(x) priority_queue<x>
    using namespace std;
    typedef pair<int,int> PII;

    const int N = 0;

    void solve(){
        int n,m;
        cin >> n >> m;
        cout << endl;
        fflush(stdout);
        cout << "? 1 1" << endl;
        fflush(stdout);
        int a;
        cin >> a;
        cout << "? 1 " << m << endl;
        fflush(stdout);
        int b;
        cin >> b;
        if (a >= m)
        {
            cout << "? " << 1 + a << " 1" << endl;
            fflush(stdout);
            int c;
            cin >> c;
            cout << "! " << 1 + a << " " << c + 1 << endl;
            fflush(stdout);
        }
        else if (a + b + 1 != m)
        {
            if (a < b)
            {
                cout << "! " << 1 + a << ' ' << m - b << endl;
                fflush(stdout);
            }
            else if (a > b)
            {
                cout << "! " << 1 + b << ' ' << a + 1 << endl;
                fflush(stdout);
            }
            else
            {
                cout << "? " << 1 + a << ' ' << 1 << endl;
                fflush(stdout);
                int c;
                cin >> c;
                cout << "! " << 1 + a << ' ' << c + 1 << endl;
            }
        }
        else
        {
            cout << "? " << 1 << " " << 1 + a << endl;
            fflush(stdout);
            int c;
            cin >> c;
            cout << "! " << c + 1 << ' ' << 1 + a << endl;
            fflush(stdout);
        }
        cout << endl;
        fflush(stdout);
    }

    int main()
    {
        int T;
        cin >> T;
        while(T--) solve();
        return 0;
    }
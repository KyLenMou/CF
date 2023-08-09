#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    s = '0' + s;
    int idx = -1;
    for (int i = n; i >= 1; i--)
    {
        if (s[i] >= '5') s[i-1]++, idx = i;
    }
    if (idx == -1) cout << s.substr(1) << endl; 
    else
    {
        if (s[0] == '0')
        {
            for (int i = 1; i < idx; i++) cout << s[i];
            for (int i = idx; i <= n; i++) cout << '0';
            cout << endl; 
        }
        else
        {
            cout << '1';
            for (int i = idx; i <= n; i++) cout << '0';
            cout << endl; 
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
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     string s;
//     cin >> s;
//     int n = s.size();
//     s = '0' + s;
//     for (int i = 0; i <= n; i++)
//     {
//         if (s[i + 1] >= '5')
//         {
//             cout << char(s[i] + 1);
//             for (; i < n; i++) cout << '0';
//             cout << endl;
//             return;
//         }
//         else if (s[i + 1] == '4')
//         {
//             int p = i + 1;
//             while (p <= n && s[p] == '4') p++;
//             if (p > n)
//             {
//                 if (i == 0) i++;
//                 for (; i <= n; i++) cout << s[i]; 
//                 cout << endl;
//                 return;
//             }
//             else if (s[p] >= '5')
//             {
//                 cout << char(s[i] + 1);
//                 i++;
//                 for (; i <= n; i++) cout << '0';
//                 cout << endl;
//                 return;
//             }
//             else
//             {
//                 if (i == 0) i++;
//                 for (; i < p; i++) cout << s[i];
//                 i = p - 1;
//             }
//         }
//         else if (s[i] <= '3' && i) cout << s[i];
//     }
//     cout << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 
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
    string s;
    int tt = 8;
    while (tt--)
    {
        cin >> s;
        for (int i = 0; s[i]; i++) 
            if (s[i] != '.')
                cout << s[i];
    }
    cout << endl;
// 	char g[10][10];
//     int x = 0, y = 0;
//     for (int i = 1; i <= 8; i++) 
//     {
//         cin >> g[i] + 1;
//         for (int j = 1; j <= 8; j++)
//         {
//             if (g[i][j] != '.' && x == 0 && y == 0)
//             {
//                 x = i;
//                 y = j;
//             }
//         }
//     }
//     if (x == 8 && y == 8)
//     {
//         cout << g[x][y] << endl;
//     }
//     else if (x == 8)
//     {
//         for (int i = y; i <= 8; i++)
//         {
//             if (g[8][i] != '.') cout << g[8][i];
//         }
//         cout << endl;
//     }
//     else if (y == 8)
//     {
//         for (int i = x; i <= 8; i++)
//         {
//             if (g[i][8] != '.') cout << g[i][8];
//         }
//         cout << endl;
//     }
//     else if ()
//     {
        
//     }
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
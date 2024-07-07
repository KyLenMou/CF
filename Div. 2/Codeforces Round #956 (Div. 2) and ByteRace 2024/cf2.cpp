#include<bits/stdc++.h>
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define int long long
using namespace std;
int mod = 1e9 + 7;
int n, m;
int cnt;
int ans, sum, mid;
int l, r;
int T;
int max(int a, int b){return a > b ? a : b;}
int min(int a, int b){return a < b ? a : b;}
int c2(int n){return (n - 1) * n / 2;}
int k, fr;
int a[200003], b[200003], c[200003];
bool cmp(int a, int b)
{
	return a > b;
}
struct node
{
	int a, b, d;
};
bool cmp1(node a, node b)
{
	if(a.a == b.a)
	{
		return a.b < b.b;
	}
	return a.a < b.a;
}
int ad[200003], bd[200003], cd[200003];
double tt;
int a1, c1, b1;

signed main()
{
	cin >> T;
	while(T --)
	{
		cin >> n;
		for(int i = 1; i <= n; i ++)
		{
			cin >> a[i];
			ad[i] = ad[i - 1] + a[i];
		}
		for(int i = 1; i <= n; i ++)
		{
			cin >> b[i];
			bd[i] = bd[i - 1] + b[i];
		}
		for(int i = 1; i <= n; i ++)
		{
			cin >> c[i];
			cd[i] = cd[i - 1] + c[i];
		}
		tt = ad[n];
		a1 = 1;
		c1 = 1;
		b1 = 1;
		for(int i = 1; i <= n - 2; i ++)
		{
			if(ad[i] < ceil(tt / 3))
			{
				a1 = i + 1;
			}
			if(bd[i] < ceil(tt / 3))
			{
				b1 = i + 1;
			}
			if(cd[i] < ceil(tt / 3))
			{
				c1 = i + 1;
			}
		}
		if(a1 <= n - 2)
		{
			l = a1 + 1, r = n;
			while(l < r)
			{
				mid = l + r >> 1;
				if(bd[mid] - bd[a1] < ceil(tt / 3))
				{
					l = mid + 1;
				}
				else
				{
					r = mid;
				}
			}
			if(bd[l] - bd[a1] >= ceil(tt / 3) && cd[n] - cd[l] >= ceil(tt / 3))
			{
				cout << 1 << ' ' << a1 << ' ' << a1 + 1 << ' ' << l << ' ' <<  l + 1 << ' ' << n;
				goto bed;
			}
			l = a1 + 1, r = n;
			while(l < r)
			{
				mid = l + r >> 1;
				if(cd[mid] - cd[a1] < ceil(tt / 3))
				{
					l = mid + 1;
				}
				else
				{
					r = mid;
				}
			}
			if(cd[l] - cd[a1] >= ceil(tt / 3) && bd[n] - bd[l] >= ceil(tt / 3))
			{
				cout << 1 << ' ' << a1 << ' ' << l + 1 << ' ' << n << ' ' <<  a1 + 1 << ' ' << l;
				goto bed;
			}
		}
		if(b1 <= n - 2)
		{
			l = b1 + 1, r = n;
			while(l < r)
			{
				mid = l + r >> 1;
				if(ad[mid] - ad[b1] < ceil(tt / 3))
				{
					l = mid + 1;
				}
				else
				{
					r = mid;
				}
			}
			if(ad[l] - ad[b1] >= ceil(tt / 3) && cd[n] - cd[l] >= ceil(tt / 3))
			{
				cout << b1 + 1 << ' ' << l << ' ' << 1 << ' ' << b1 << ' ' <<  l + 1 << ' ' << n;
				goto bed;
			}
			l = b1 + 1, r = n;
			while(l < r)
			{
				mid = l + r >> 1;
				if(cd[mid] - cd[b1] < ceil(tt / 3))
				{
					l = mid + 1;
				}
				else
				{
					r = mid;
				}
			}
			if(cd[l] - cd[b1] >= ceil(tt / 3) && ad[n] - ad[l] >= ceil(tt / 3))
			{
				cout << l + 1 << ' ' << n << ' ' << 1 << ' ' << b1 << ' ' <<  b1 + 1 << ' ' << l;
				goto bed;
			}
		}
		if(c1 <= n - 2)
		{
			l = c1 + 1, r = n;
			while(l < r)
			{
				mid = l + r >> 1;
				if(bd[mid] - bd[c1] < ceil(tt / 3))
				{
					l = mid + 1;
				}
				else
				{
					r = mid;
				}
			}
			if(bd[l] - bd[c1] >= ceil(tt / 3) && ad[n] - ad[l] >= ceil(tt / 3))
			{
				cout << l + 1 << ' ' << n << ' ' << c1 + 1 << ' ' << l << ' ' <<  1 << ' ' << c1;
				goto bed;
			}
			l = c1 + 1, r = n;
			while(l < r)
			{
				mid = l + r >> 1;
				if(ad[mid] - ad[c1] < ceil(tt / 3))
				{
					l = mid + 1;
				}
				else
				{
					r = mid;
				}
			}
			if(ad[l] - ad[c1] >= ceil(tt / 3) && bd[n] - bd[l] >= ceil(tt / 3))
			{
				cout << c1 + 1 << ' ' << l << ' ' << l + 1 << ' ' << n << ' ' <<  1 << ' ' << c1;
				goto bed;
			}
		}
		cout << -1 << endl;
		continue;
		bed: cout << endl;
			
	}
}


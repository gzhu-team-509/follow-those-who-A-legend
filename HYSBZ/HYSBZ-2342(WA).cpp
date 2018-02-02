#include <bits/stdc++.h>
using namespace std;

// 注意起点i的拓展，注意更强的回文中心可能的位置 

char str[500500];

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	int n; str[0] = '#';
	while (scanf("%d%s", &n, str+1) == 2)
	{
		int i = 1, mx = 0;
		while (str[i])
		{
			int l(i), r(i);
			while (str[r] == str[r+1]) ++r;
			int cur = r - l + 1;
			while (str[l-1] == str[r+1]) {
				--l, ++r, cur += 2;
			}
			
			if (cur % 4 == 0) {
				int len = (r-l+1)/2;
				if (strncmp(str+l, str+l+len, len) == 0) {
					int ll = l, rr = l+len-1;
					while (str[ll] == str[rr] && ll < rr) ++ll, --rr;
					if (ll > rr) mx = max(mx, cur);
				}
			}
			++i;
		}
		printf("%d\n", mx);
	}
}


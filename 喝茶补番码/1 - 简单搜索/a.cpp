#include <iostream>
using namespace std;

int n, k;

int tot = 0;
char map[10][10];

int main()
{ 
	while (cin >> n >> k)
	{
		for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> map[i][j];
			
		tot = 0;
		dfs(0);
		cout << tot << endl;
	}
}


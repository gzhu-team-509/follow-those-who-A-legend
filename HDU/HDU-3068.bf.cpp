#include <bits/stdc++.h>
using namespace std;

char str[110110]; 

int main()
{
	while (scanf("%s", str+1) == 1)
	{
		int i = 0, mx = 1; 
		str[0] = '*'; // �ر��±�Խ�����⣬�����ж�Խ���ʱ��
		
		while (str[i])
		{
			int q = i, p = i;
			
			while (str[i+1] == str[i]) ++i;
			p = i;
			
			while (str[q-1] == str[p+1]) --q, ++p;
			mx = max(mx, p - q + 1);
			
			++i; // i = p + 1;
			// ���Ĵ�����չ��p������p֮ǰ�����и�ǿ�Ļ������� 
			 
		}
		printf("%d\n", mx);
	}
} 

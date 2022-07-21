#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int m = 0, n = 0, q = 0, w = 0, e = 0, r = 0, t = 0;
	while (scanf("%d %d", &m, &n) != EOF)
	{
		while (m <= n)
		{
			r = m;
			q = r % 10;
			r /= 10;
			w = r % 10;
			r /= 10;
			e = r % 10;
			q = (int)pow(q, 3);
			w = (int)pow(w, 3);
			e = (int)pow(e, 3);
			if (!((q + w + e) - m))
			{
				printf("%d ", m);
				t++;
			}
			m++;
		}
		if (!t)
		{
			printf("no\n");
		}
	}
	return 0;
}
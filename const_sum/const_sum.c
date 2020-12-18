#include <stdio.h>

int main()
{
	int c;
	int kongge, zhibiao, huanhang;
	kongge = 0;
	zhibiao = 0;
	huanhang = 0;
	while ((c = getchar()) != EOF)
	{
		if (c ==' ')
		{
			++kongge;
		}
		if (c == '\t')
		{
			++zhibiao;
		}
		if (c =='\n')
		{
			++huanhang;
		}
	}
	printf("kongge=%d\tzhibiao=%d\thuanhang=%d\n", kongge, zhibiao, huanhang);
	return 0;

}
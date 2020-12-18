#include <stdio.h>

int main()
{
	int c;
	c = getchar();
	while (c != '\n')
	{
		putchar(c);
		c = getchar();
		 while(c == ' ')
		{
			c =getchar();
			if (c != ' ')
			{
				putchar(' ');
			}
		}
	}
	return 0;

}
#include <stdio.h>
//用可见的方式将制表符和回退符显示出来
int main()
{
	int c;
	while ((c=getchar())!=EOF)
	{
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		if (c != '\b')
			if (c != '\t')
				if (c != '\\')
					putchar(c);
		
	}
	return 0;

}
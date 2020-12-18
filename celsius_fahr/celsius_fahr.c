#include <stdio.h>

int main()
{
	printf("ÉãÊÏÎÂ¶È->»ªÊÏÎÂ¶È\n");
	int celsius;
	float fahr=0.0;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (celsius * 9.0) / 5.0 + 32;
		
		printf("%3d\t", celsius);
		printf("%6.2f\n", fahr);
		celsius = celsius + step;	
	}
	return 0;
}
#include <stdio.h>

int main()
{
	printf("ÄæÐò´òÓ¡celsius->fahr\n");
	int celsius;
	float fahr;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = upper;
	while(celsius >= lower)
	{
		fahr = (celsius * 9.0) / 5.0 + 32.0;
		printf("%3d\t", celsius);
		printf("%6.2f\n", fahr);
		celsius = celsius - step;
	}

	return 0;

}
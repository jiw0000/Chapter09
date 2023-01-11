#include <stdio.h>

void to_base_n(unsigned long, int);

int main()
{
	unsigned long number;
	int ginsoo;

	printf("정수 입력 : \n");

	while (scanf("%lu", &number) == 1)
	{
		printf("몇 진수\n");

		while (scanf("%d", &ginsoo) != 1)
			while (getchar() != '\n');

		printf("%d진수 표기: ", ginsoo);
		to_base_n(number, ginsoo);
		putchar('\n');
		printf("정수 입력 : \n");
	}

}

void to_base_n(unsigned long n, int g)
{
	int r;

	r = n % g;
	if (n >= g)
		to_base_n(n / g, g);
	printf("%d", r);

	return;
}
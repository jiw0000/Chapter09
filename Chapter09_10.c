#include <stdio.h>

void to_base_n(unsigned long, int);

int main()
{
	unsigned long number;
	int ginsoo;

	printf("���� �Է� : \n");

	while (scanf("%lu", &number) == 1)
	{
		printf("�� ����\n");

		while (scanf("%d", &ginsoo) != 1)
			while (getchar() != '\n');

		printf("%d���� ǥ��: ", ginsoo);
		to_base_n(number, ginsoo);
		putchar('\n');
		printf("���� �Է� : \n");
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
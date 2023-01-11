#include <stdio.h>

void chline(char, int, int);

int main()
{
	char ch;
	int i, j, ck;

	printf("문자를 하나 입력하시오 : ");
	ch = getchar();

	while (getchar() != '\n');

	while (1)
	{
		printf("i열과 j열을 입력하시오 : ");
		ck = scanf("%d %d", &i, &j);

		if (ck == 2) break;
		else while (getchar() != '\n');
	}

	chline(ch, i, j);

}

void chline(char ch, int i, int j)
{
	int min = (i < j) ? i : j;
	int max = (i > j) ? i : j;

	for (int idx = 1; idx <= max; idx++)
	{
		putchar((idx < min) ? ' ' : ch);
	}
	putchar('\n');
}
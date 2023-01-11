#include <stdio.h>

void print_ch(char, int, int);

int main()
{
	char ch;
	int i, j, ck;

	printf("문자를 하나 입력하시오 : ");
	ch = getchar();

	while (getchar() != '\n');

	while (1)
	{
		printf("i열과 j행을 입력하시오 : ");
		ck = scanf_s("%d %d", &i, &j);

		if (ck == 2) break;
		else while (getchar() != '\n');
	}

	print_ch(ch, i, j);

}

void print_ch(char ch, int i, int j)
{
	for (int x = 0; x < j; x++)
	{
		for (int y = 0; y < i; y++)
			putchar(ch);
		putchar('\n');
	}

}
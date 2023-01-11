#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_alpha_cnt(char);

int main()
{
	int ck;
	char ch;

	while ((ck = scanf("%c", &ch)) != EOF && ck != 0)
	{
		printf("%c : %d\n", ch, get_alpha_cnt(ch));
	}

}

int get_alpha_cnt(char ch)
{
	int ck;
	int num = -1;

	char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	if (islower(ch))
	{
		for (int i = 0; i < strlen(alpha); i++)
			if (ch == alpha[i])
			{
				num = i;
				break;
			}
	}
	else if (isupper(ch))
	{
		for (int i = 0; i < strlen(Alpha); i++)
			if (ch == Alpha[i])
			{
				num = i;
				break;
			}
	}

	return num;
}
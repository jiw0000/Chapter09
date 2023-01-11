#include <stdio.h>

double power(double, int);

int main()
{
	double x, xpow;
	int exp;

	printf("수와 정수 거듭제곱수를 입력하시오.\n");
	printf("끝내려면 q\n");

	while (scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g의 %d승은 %.5g입니다.\n", x, exp, xpow);
		printf("두 수 입력 끝내려면 q\n");
	}

}

double power(double n, int p)
{
	double pow = 1.0f;

	if (p == 0) return 1.0;
	pow = power(n, (p > 0) ? (p - 1) : (p + 1));
	pow = (p > 0) ? (pow * n) : (pow / n);

	return pow;
}
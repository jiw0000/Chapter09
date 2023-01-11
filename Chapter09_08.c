#include <stdio.h>

double power(double, int);

int main()
{
	double x, xpow;
	int exp;

	printf("수와 정수 거듭제곱수를 입력하시오.\n");
	printf("끝내려면 q\n");


	while (scanf_s("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g의 %d승은 %.5g입니다.\n", x, exp, xpow);
		printf("두 수 입력  끝내려면 q\n");
	}
	

}

double power(double n, int p)
{
	double pow = 1.0f;
	int i = 0;
	int pm = (p > 0) ? 1 : -1;

	for (; i != p; i += pm)
	{
		pow = (p > 0) ? (pow * n) : (pow / n);
	}

	return pow;
}
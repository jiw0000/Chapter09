#include <stdio.h>

double harmonic(double n1, double n2);

int main()
{
	double n1, n2;

	printf("2개의 부동소수점수를 입력하시오.\n");
	scanf("%lf %lf", &n1, &n2);

	printf("%.3lf와 %.3lf의 조화 평균은 %.3lf입니다.\n",
		n1, n2, harmonic(n1, n2));

}

double harmonic(double n1, double n2)
{
	double value;
	double en1, en2, aver;

	en1 = (1.0 / n1);
	en2 = (1.0 / n2);
	aver = (en1 + en2) / 2;
	value = (1.0 / aver);

	return value;
}
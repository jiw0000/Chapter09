#include <stdio.h>

double power(double, int);

int main()
{
	double x, xpow;
	int exp;

	printf("���� ���� �ŵ��������� �Է��Ͻÿ�.\n");
	printf("�������� q\n");

	while (scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g�� %d���� %.5g�Դϴ�.\n", x, exp, xpow);
		printf("�� �� �Է� �������� q\n");
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
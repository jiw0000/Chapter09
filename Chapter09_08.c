#include <stdio.h>

double power(double, int);

int main()
{
	double x, xpow;
	int exp;

	printf("���� ���� �ŵ��������� �Է��Ͻÿ�.\n");
	printf("�������� q\n");


	while (scanf_s("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g�� %d���� %.5g�Դϴ�.\n", x, exp, xpow);
		printf("�� �� �Է�  �������� q\n");
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
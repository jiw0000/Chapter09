#include <stdio.h>

double harmonic(double n1, double n2);

int main()
{
	double n1, n2;

	printf("2���� �ε��Ҽ������� �Է��Ͻÿ�.\n");
	scanf("%lf %lf", &n1, &n2);

	printf("%.3lf�� %.3lf�� ��ȭ ����� %.3lf�Դϴ�.\n",
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
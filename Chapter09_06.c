#include <stdio.h>

void swap(double*, double*);

int main()
{
	int ck;
	double x, y, z;

	while (1)
	{
		printf("�� ���� �ε��Ҽ��� : ");
		ck = scanf("%lf %lf %lf", &x, &y, &z);

		if (ck == 3) break;
		else while (getchar() != '\n');
	}

	printf("�� %lf, %lf, %lf\n", x, y, z);
	if (x > y) swap(&x, &y);
	if (x > z) swap(&x, &z);
	if (y > z) swap(&y, &z);
	printf("�� %lf, %lf, %lf\n", x, y, z);

}

void swap(double* x, double* y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}
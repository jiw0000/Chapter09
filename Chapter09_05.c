#include <stdio.h>

void larger_of(double*, double*);

int main()
{
	int ck;
	double x, y;

	while (1)
	{
		printf("�� ���� �ε��Ҽ���  : ");
		ck = scanf("%lf %lf", &x, &y);

		if (ck == 2) 
			break;
		else {
			while (getchar() != '\n');
		}
	}

	printf("�� %lf, %lf\n", x, y);
	larger_of(&x, &y);
	printf("�� %lf, %lf\n", x, y);

}

void larger_of(double* x, double* y)
{
	*x = (*x > *y) ? *x : *y;
	*y = *x;
}
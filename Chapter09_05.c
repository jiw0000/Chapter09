#include <stdio.h>

void larger_of(double*, double*);

int main()
{
	int ck;
	double x, y;

	while (1)
	{
		printf("두 개의 부동소수점  : ");
		ck = scanf("%lf %lf", &x, &y);

		if (ck == 2) 
			break;
		else {
			while (getchar() != '\n');
		}
	}

	printf("전 %lf, %lf\n", x, y);
	larger_of(&x, &y);
	printf("후 %lf, %lf\n", x, y);

}

void larger_of(double* x, double* y)
{
	*x = (*x > *y) ? *x : *y;
	*y = *x;
}
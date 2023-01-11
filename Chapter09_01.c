#include<stdio.h>
void min(double);

int main()
{
	double x, y;

	printf("x = ");
	scanf_s("%lf", &x);
	printf("y = ");
	scanf_s("%lf", &y);

	min(x, y);

}

void min(double x, double y)
{
	if (x > y)
		printf("%lf", y);
	else if (x < y)
		printf("%lf", x);
}
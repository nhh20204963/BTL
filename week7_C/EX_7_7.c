#include <stdio.h>

int main()
{
	float c, f;
	printf("Nhap do c = ");
	scanf("%f", &c);
	f = 1.8 * c + 32.0;
	printf("Do f = %.1f", f);
	return 0;
}
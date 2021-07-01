
#include <stdio.h>

int main(){
	float a, b, c;
	printf("Gia tri a = ");scanf("%f", &a);
	printf("Gia tri b = ");scanf("%f", &b);
	printf("Gia tri c = ");scanf("%f", &c);
	float *p;
	p = &a;
	printf("a + 100 = %.2f\n", *p + 100);
	p = &b;
	printf("b + 100 = %.2f\n", *p + 100);
	p = &c;
	printf("c + 100 = %.2f\n", *p + 100);
}
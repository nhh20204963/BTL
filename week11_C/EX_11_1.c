
#include <stdio.h>

int main(){
	int a, b, c;
	int *p;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("Nhap c = ");scanf("%d", &c);
	p = &a;
	printf("a = %d\n", *p);
	p = &b;
	printf("b = %d\n", *p);
	p = &c;
	printf("c = %d\n", *p);
}
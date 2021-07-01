#include <stdio.h>

void swap(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c =  temp;
}
int main(){
	int a, b, c;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("Nhap c = ");scanf("%d", &c);
	printf("Before swapping a = %d, b = %d, c = %d\n", a, b, c);
	swap(&a, &b, &c);
	printf("After swapping a = %d, b = %d, c = %d\n", a, b, c);
}
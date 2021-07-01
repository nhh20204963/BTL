#include <stdio.h>

void swap(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c =  temp;
}
int main(){
	int x, y, z, *p, *q, *r;
	printf("Set x = ");scanf("%d", &x);
	printf("Set y = ");scanf("%d", &y);
	printf("Set z = ");scanf("%d", &z);
	p = &x, q = &y, r = &z;
// printf with lables the values of x, y, z, p, q, r, *p, *q, *r.
	printf("%d %d %d %d %d %d %p %p %p\n", x, y, z, p, q, r, *p, *q, *r);
// swap x, y, z
	swap(&x, &y, &z);
	printf("%d %d %d %d %d %d %p %p %p\n", x, y, z, p, q, r, *p, *q, *r);
}
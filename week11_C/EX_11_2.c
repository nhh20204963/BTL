#include <stdio.h>

int main(){
	int a[7] = {13, -355, 235, 47, 67, 943, 1222};
	int i;
	int *p;
	p = &a[0];
	for(i = 0; i < 5; i++){
		printf("Address a[%d] la: %p\n", i, (p + i));
	}
	for(i = 0 ; i < 5; i++){
		printf("Address a[%d] la: %X\n", i, &a[i]);
	}
}
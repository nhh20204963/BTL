#include <stdio.h>

int main(){
	int a[100], n , i, *p;
	printf("So phan tu cua mang = ");scanf("%d", &n);
	p = a;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", p+i);
	}
	printf("\nMang la : ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\nSau khi dao nguoc: ");
	for(i = n-1; i >= 0; i--){
		p = &a[n-1];
		printf("%d ", *p);
		(*p)--;
	}
} 
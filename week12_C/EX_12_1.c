#include <stdio.h>

void nhapmang(int *p, int n);
int countEven(int *p, int n);
int main(){
	int a[100];
	int n;
	printf("So luong phan tu trong mang = ");scanf("%d", &n);
	int *p;
	p = a;
	nhapmang(p, n);
	printf("So luong phan tu chan trong mang la = %d", countEven(p,n));
}
void nhapmang(int *p, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", p + i);
	}
}
int countEven(int *p, int n){
	int count = 0;
	int i;
	for(i = 0; i < n; i++){
		if(*(p+i) % 2 == 0){
			count++;
		}else{
			printf("");
		}
	}
	return count;
}

#include <stdio.h>
 
void getSale(int *p, int n);
int totalSale(int *p, int n);
int main(){
	int a[100];
	int n;
	int *p;
	p = a;
	printf("Nhap so mat hang = ");scanf("%d", &n);
	getSale(p, n);
	printf("Tong so luong cac mat hang = %d", totalSale(p, n));
	return 0;
}
void getSale(int *p, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Mat hang thu %d = ", i+1);
		scanf("%d", p + i);
	}
}
int totalSale(int *p, int n){
	int sum = 0;
	int i;
	for(i = 0 ;i < n; i++){
		sum = sum + *p;
		p++;
	}
	return sum;
}
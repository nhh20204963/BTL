#include <stdio.h>
/* 
So hoan hao chan  co cong thuc tong quat la 2^(n-1) . (2^n-1) voi n la so nguyen to
*/
int sumcube(int n){
	int i;
	int sum = 0;
	for(i = 1; i <= n; i++){
		sum += i * i * i;
	}
	printf("Tong lap phuong cua cac so tu 1 den %d la = %d\n", n, sum);
	return 0;
}
void submutiples(int n){
	int j;
	for(j = 1; j <= n; j++){
		if(n % j == 0){
			printf("%d ", j);
		}
	}
}

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	sumcube(n);
	printf("Cac uoc so cua %d la ", n);
	submutiples(n);
}
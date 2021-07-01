#include <stdio.h>

void nhapmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\nNhap vao phan tu a[%d] = ", i);
		scanf("%d", &a[i]);
	}

}
void xuatmang(int a[], int n){
	int i;
	printf("\nMang da duoc nhap la ");
	for(i = 0; i <  n; i++){
		printf("%d ", a[i]);
	}
}
void check(int b[], int n, int c[], int m){
	int i, j;
	int dem = 0;
	if(n != m){
		printf("\n2 mang khong bang nhau");
	}else{
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				if(b[i] == c[j]){
					dem++;
					break;
				}
			}
		}
		if(dem == n){
			printf("\n2 mang bang nhau");
		}else{
			printf("\n2 mang khong bang nhau");
		}
	}
} 
int main(){
	int n, m, i;
	int b[100], c[100];
	printf("\nSo luong phan tu mang dau tien la ");
	scanf("%d", &n);
	printf("\nMang 1 la ");
	nhapmang(b, n);
	xuatmang(b, n);
	printf("\nSo luong phan tu mang thu hai la ");
	scanf("%d", &m);
	printf("\nMang 2 la ");
	nhapmang(c ,m);
	xuatmang(c, m);
	check(b ,n, c, m);
}
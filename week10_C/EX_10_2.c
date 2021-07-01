#include <stdio.h>

int localmaximum(int a[], int n){
	int i;
	int sum = 0;
	for(i = 1; i < n - 1; i++){
		if(a[i] > a[i -1] && a[i] > a[i + 1]){
			sum += a[i];
		}
	}
	printf("\nSum = %d ", sum);
}
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
int main(){
	int a[100];
	int n;
	printf("\nSo luong phan tu cua mang la ");
	scanf("%d", &n);
	nhapmang(a, n);
	xuatmang(a, n);
	localmaximum(a, n);
}
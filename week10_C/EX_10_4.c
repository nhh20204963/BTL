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
void checkle(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 1){
			printf("%d ", a[i]);
		}
	}
}
void sort(int a[], int n){
	int i, j;
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nMang giam dan la : ");
	for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int a[100];
	int n;
	printf("\nSo luong phan tu cua mang la : ");
	scanf("%d", &n);
	nhapmang(a, n);
	xuatmang(a, n);
	sort(a, n);
	sort(checkle(a, n), n);
}
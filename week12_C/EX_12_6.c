#include <stdio.h>

void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void daonguoc(int a[], int n);
int main(){
	int a[100];
	int n, i;
	printf("So phan tu cua mang = ");scanf("%d", &n);
	nhapmang(a, n);
	printf("\nMang truoc khi dao nguoc la : \n");
	xuatmang(a, n);
	printf("\nMang sau khi dao nguoc la : \n");
	daonguoc(a, n);
	
}
void nhapmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void daonguoc(int a[], int n){
	int i;
	for(i = n -1; i >=  0; i--){
		printf("%d ", a[i]);
	}
}
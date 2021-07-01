#include <stdio.h>

void reverses(float a[], int n){
	int i;
	for(i = n - 1; i >= 0; i--){
		printf("%.2f ", a[i]);
	}
}
int main(){
	int n, i;
	float a[100];
	printf("So luong phan tu cua mang la ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	printf("\nMang ban dau la ");
	for(i = 0; i < n; i++){
		printf("%.2f ", a[i]);
	}
	printf("\nMang sau khi da nguoc la ");
	reverses(a, n);	
}
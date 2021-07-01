#include <stdio.h>

int main(){
	int a[100];
	int n;
	printf("So luong phan tu cua mang la ");
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		printf("\nNhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	int count = 0;
	for(i = 0; i < n; i++){
		if(a[i] == 0){
			count++;
		}
	}
	printf("\n%d", count);
	
}
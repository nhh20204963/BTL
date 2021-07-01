
#include <stdio.h>

void check(int a[], int n){
	int dem = 0, i;
    for(i = 0; i < n; i++){
        if(a[i] != a[n-1-i])
            dem++;
    }
    if(dem == 0){
    	printf("\nMang la doi xung");
	}else{
		printf("\nMang khong doi xung");
	}
}
int main(){
	int a[100];
	int n, i;
	do{
		printf("\nSo luong phan tu cua mang la ");
		scanf("%d", &n);
	}while(n <= 0 || n > 100);
	for(i = 0; i < n; i++){
		printf("\nNhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\nMang la : ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	check(a ,n);
}

#include <stdio.h>

int main(){
	int arr[10];
	int i;
/* nhap mang */
	for(i = 0; i <  10; i++){
		printf("Nhap a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
/* xuat mang*/
	printf("\nMang da nhap la : ");
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

/* xuat mang cac so le */
	printf("\nMang cac so le tu mang da cho la : ");
	for(i = 0; i < 10; i++){
		if(arr[i] % 2 == 1){
			printf("%d ", arr[i]);
		}
	}
/* tim min cua mang */
	int min = arr[0];
	printf("\nMinimum of array is ");
	for(i = 0; i < 10; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	printf("%d", min);

}
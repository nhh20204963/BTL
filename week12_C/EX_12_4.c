#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, *ptr;
	printf("Enter number of elements = ");scanf("%d", &n);
	ptr = (int*) malloc(n * sizeof(int));
	if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    for(i = 0; i < n; i++)
    {	
    	printf("phan tu thu %d la ", i+1);
        scanf("%d", ptr + i);
    }
    printf("\nMang duoc nhap la : ");
    for(i = 0; i < n; i++){
    	printf("%d ", *(ptr + i));
	}
	
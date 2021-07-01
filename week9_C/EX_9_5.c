#include <stdio.h>

void printnchars(char c, int n){
	int i;
	for(i = 1; i <= n; i++){
		printf("%c ", c);
	}
	for(i = 1; i <= n; i++){
		printf("\n%c", c);
	}
}

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Triangle canh la %d, %d:\n", n, n+1);
	printnchars('*', 4);
}
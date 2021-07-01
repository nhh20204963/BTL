#include <stdio.h>

void convert(int f){
	int i; 
	double c;
	c = (f - 32) / 1.8;
	printf("%d %.2f\n", f, c);
}
int main(){
	int f;
	printf("Convert F to C from 0 to ");
	scanf("%d", &f);
	int i;
	for(i = 0; i <= f; i++){
		convert(i);
	}
}
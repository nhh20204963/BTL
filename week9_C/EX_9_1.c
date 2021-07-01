#include <stdio.h>

void dongnang(double m, int v){	
	double K = (m * v * v) / 2;
	printf("Dong nang cua phan tu = %.2f", K);
}

int main(){
	double m;
	int v;
	dongnang(5, 10);
	return 0;
}
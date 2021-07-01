#include <stdio.h>

int main(){
	int days, phep, muon; 
	int phucap = 500;
	int phikhac = 750;
	int onedays = 500;
	int onephep = 200;
	int onemuon = 50;
	printf("So ngay di lam = ");scanf("%d", &days);
	printf("So ngay nghi phep = ");scanf("%d", &phep);
	printf("So ngay di muon = ");scanf("%d", &muon);
	int luong = days * onedays - phep * onephep - muon * onemuon;
	if(phep <= 4){
		printf("Luong bang = %d", luong + phucap);
	}else{
		printf("Luong = %d", luong);
	}
	return 0;
}
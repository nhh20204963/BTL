#include <stdio.h>

int salary(int luong, int sonam){
	int tangluong;
	int check = 0;
	if(sonam > 3){
		tangluong = luong + (sonam - 3) * 1500000;
		check = 1;
	}
	if(check == 0){
		printf("khong dc tang luong");
	}
}
int main(){
	int luong, sonam;
	printf("Luong hien tai = ");scanf("%d", &luong);
	printf("So nam lam viec = ");scanf("%d", &sonam);
	printf("Luong sau tang = %d", salary(luong, sonam));
}
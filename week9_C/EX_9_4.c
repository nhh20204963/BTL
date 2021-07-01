#include <stdio.h>

int salary(int n){
	int gio = 15;
	while(n >= 10 && n <= 65){
		if(n <= 40){
			return n * gio;
		}else{
			return 40 * 15 + (n - 40) * 15 * 2;
		}
	}
	return 0;
}
int main(){
	int n;
	printf("So gio lam viec = ");
	scanf("%d", &n);
	printf("Salary = %d", salary(n));

}
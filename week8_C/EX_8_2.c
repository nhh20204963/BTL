#include <stdio.h>
int main(){
	char C;
	while(C = getchar()){
		if(C == 8 || C == 9){
			printf("\\\\");
		}
		else
		putchar(C);
	}
}
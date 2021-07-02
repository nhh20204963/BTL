  
#include <stdio.h>
#include <string.h>
int countblank(char str[]);
int main(){
	char str[100];
	gets(str);
	printf("\nSo khoang trong trong van ban = %d", countblank(str));
}
int countblank(char str[]){
	int i;
	int count = 0;
	for(i = 1; i <= strlen(str); i++){
		if(str[i] == ' '){
			count++;
		}
	}
	return count;
}
#include <stdio.h>
#include <string.h>

void replace(char str[], char ch, char c);
int main(){
	char str[100];
	char c;
	printf("Nhap chuoi: ");
	gets(str);
	char ch = str[0];
	printf("\nChuoi truoc khi thay the: ");
	puts(str);
	printf("\nNhap ki tu thay the: ");
	scanf("%c", &c);
	printf("\nChuoi sau khi thay the: ");
	replace(str, ch, c);
}
void replace(char str[], char ch, char c){
	int i;
	for(i = 0; i < strlen(str); i++){
		if(str[i] == ch){
			str[i] = c;
		}
	}
 	printf("%s", str);

}
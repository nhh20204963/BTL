#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	/*Bài 6.1*/
	int i;
	char x;
	char se[100];

	printf("Enter a sequence: ") ;
	scanf("%s",se);
	int n=strlen(se);
	x=se[0];
for(i=1;i<n;i++){
	if(se[i]<x){ 
	x=se[i];
	}}
	printf("%c",x);
	return 0;
}
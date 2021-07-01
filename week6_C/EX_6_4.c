#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
		int b;
		char class[20];
	printf("\nEnter the age:");
		scanf("%d",&b);
  if(b<0){
  	printf("Enter a positive number");
  }
 if(65>b&&b>=18){
	 strcpy(class,"adult");
	 }
 if(b<18){
	 strcpy(class,"child");

 }
  if(b>=65){
	 strcpy(class,"senior citizen");

 }
  printf("%s",class);
	return 0;
}
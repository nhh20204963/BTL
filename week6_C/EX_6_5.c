	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

int main(){
  	int m;
  	printf("Guess your positive number:");
  	scanf("%d",&m);
  	int z=rand()%(101);
  	if(m==z){
  	printf("You're correct!!");
  	}
	  	else{
	  		if(m>z){
			 printf("The guess was too great");
			  }else{
			 printf("the guess was too small");
			  }
			  }
			  printf("\nThe correct number is:%d",z);
	return 0;}
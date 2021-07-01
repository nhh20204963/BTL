#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("\nEnter the age:");
		scanf("%d",&a);
  if(a<0){
  	printf("Enter a positive number");
  }
  if(a<18){
  	printf("\nYour class is child");
  	}
  	else{
  		if(18<=a&&a<65){
  			printf("Your class is:Adult");
  			
		  }else{
		  	printf("Your class is senior Citizen");
		  }
	  }
	return 0;}
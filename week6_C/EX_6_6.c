#include<stdio.h>
#include<math.h>

       int main(){
		  int j,k,l;
		  printf("enter 3 integer numbers (j,k,l): ");
		  
		  scanf("(%d,%d,%d)",&j,&k,&l);
		 if(j<k&&j<l){
		 	printf("j is the smallest number");
		 }
		  if(k<j&&k<l){
		 	printf("k is the smallest number");
		 }
		  if(l<j&&l<k){
		 	printf("l is the smallest number");
		 }
		 if(j==l&&k==l){
		 	printf("No smallest");}
	       return 0;}
	
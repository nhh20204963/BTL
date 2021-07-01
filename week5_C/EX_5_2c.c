 /*Bài 5.2 */
  #include<stdio.h>
int main(){
 int x1,x2,x3;
 printf("enter 3 numbers x1 x2 x3: ");
 scanf("%d%d%d",&x1,&x2,&x3);
 if(x1-x2==x2-x3){
 printf("x1=x3\n");
  
 }
 if(x1<=x2&&x1<=x3){
 printf("x1 is the smallest!\n");
 }
  return 0;}
#include<stdio.h>
#include<math.h>
int leap_year(int n){
    if((n%4==0&&n%100!=0)||(n%400==0)){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Nhap vao nam : ");
    scanf("%d",&n);
  if(leap_year(n)){
      printf("%d la nam nhuan !! ",n );
  }
  else{
      printf("%d khong la nam nhuan!! ",n);
  }
    return 0;
}
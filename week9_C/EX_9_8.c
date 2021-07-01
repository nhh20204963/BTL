#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void getJudgeData (int a[]){
    int i;
    printf("Nhap so diem ma giam khao danh cho thi sinh (1-10): \n");
    for(i=1;i<=5;i++){
        printf("Giam Khao[%d]: ",i);
        scanf("%d",&a[i-1]);
    }
}
int calcu(int a[]){
    int i,j;
    int tem;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
               tem=a[i];
               a[i]=a[j];
               a[j]=tem; 
            }
        }
    }
  return (a[1]+a[2]+a[3]);
}
int main(){
    int a[100];
    getJudgeData(a);
printf("So diem cua hoc sinh nay la: %d",calcu(a)) ;  
 return 0;
}
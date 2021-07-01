#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int check(int n,int a[]){
    int i;
    int nho;
for(i=0;;i++){  
    a[i]=n%10;
    n/=10;
    if(n==0){
        nho=i;
        break;
        }
    }
    int du=a[0]%2;
    for(i=1;i<=nho;i++){
        if(a[i]%2!=du){
            return 0;
            break;        
}
    }
    if(du==1){
        return 1;}
    if(du==0){
        return 2;
}
}
int main(){
    int n;
    int a[100];
    printf("nhap vao so n: ");
    scanf("%d",&n);
    if(check(n,a)==1){
        printf("A la so toan chu so le");
    }
    if(check(n,a)==2){
        printf("A la so toan chu so chan");
    }
   if(check(n,a)==0){
        printf("A vua co chu so chan vua co chu so le!!");

    }
    return 0;
}
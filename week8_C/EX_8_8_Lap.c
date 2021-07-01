  #include<stdio.h>
#include<math.h>

int main(){

    int i=1;
    int n;
    int giaithua=1;
    printf("\nNhập số n cần tính giai thừa : ");
    scanf("%d",&n);
    while(i<=n){
        giaithua = giaithua*i;
        i++;
    };
    printf("giai thừa cần tính là : %d ",giaithua);
	return 0;
}
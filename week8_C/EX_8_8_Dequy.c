#include<stdio.h>
#include<math.h>

int giaithua(int i){
if(i==1) return 1;
return giaithua(i-1)*i;
}
int main()
{int n;
    printf("\nnhập số n: ");
    scanf("%d",&n);
    printf("\n giai thừa của n là  :%d ",giaithua(n));
	return 0;
}
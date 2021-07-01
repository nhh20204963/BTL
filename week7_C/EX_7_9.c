#include <stdio.h>
int giaithua(int n){
    if(n==1){return 1;
        
    }
    
    return giaithua(n-1)*n;
}
int main() { 
    int n;
printf("enter a positive number : ");
scanf("%d",&n);
printf("%d",giaithua(n));
printf("\n");
    return (0);
    
}
